#include "epricelist.h"
#include "ui_epricelist.h"

#define isDROP 0

Epricelist::Epricelist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Epricelist)
{
    ui->setupUi(this);

    connect(ui->pushButton_close,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));
    connect(ui->pushButton_confirm,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));

    setWindowFlags(Qt::FramelessWindowHint|windowFlags()|Qt::WindowStaysOnTopHint);

    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_FYF);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_KTMHH);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_HMMHH);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_HMNTH);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_JGYD);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_MSJZ);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_SYSZ);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_DSST);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_YGX);
    m_DoubleSpinBoxArray.append(ui->doubleSpinBox_JLX);






    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./qtdb1.54");
    db.setHostName("admin");
    db.setUserName("admin");
    db.setPassword("12345");

    if (!db.open())//打开数据库
    {
        cout << "无法建立数据库连接";
    }
    QSqlQuery query;
    bool success = query.exec("create table equipment(id int primary key,name varchar,"
                                      "price float,characternum int)");
    if(success)
        cout << "创建成功";
    else
        cout << "创建失败";

    QString nameInit[ECOUNT] = {"封印符",
                                "苦痛冥幻魂","毁灭冥幻魂","毁灭南天魂",
                                "金刚腰带",
                                "冥神戒指",
                                "三炎手镯",
                                "斗神手套",
                                "月光星","金雷星"
                                };
    int characternumInit[ECOUNT] = {0,
                                    12,12,12,
                                    12,
                                    12,
                                    12,
                                    12,12,
                                    };

    if(isDROP)
        query.exec("DROP TABLE equipment");

    for(int i = 0; i < ECOUNT; i++)
    {
        query.prepare("insert into equipment values(?,?,?,?)");
        query.bindValue(0, i);
        query.bindValue(1, nameInit[i]);
        query.bindValue(2, 1000+i);
        query.bindValue(3, characternumInit[i]);
        success=query.exec();
        if(!success)
        {
            query.exec("select name from equipment where id = " + QString::number(i));
            query.next();
            if(nameInit[i] != query.value(0).toString())
            {
                query.exec(tr("UPDATE equipment SET name = '%1',price = '1000' WHERE id= '%2'").arg(nameInit[i]).arg(i));
                cout << "修改成功";
            }
            else
            {
                cout << "插入失败";
            }
        }
    }
    int id[40];
    QString name[40];
    double price[40];
    int characternum[40];
    query.exec("select * from equipment");
    while(query.next())
    {
        bool ok;
        static int i = 0;
        id[i] = query.value(0).toInt(&ok);
        name[i] = query.value(1).toString();
        price[i] = query.value(2).toFloat(&ok);
        characternum[i] = query.value(3).toInt(&ok);
        cout << id[i];
        cout << name[i];
        cout << price[i];
        cout << characternum[i];
        if(id[i] > ECOUNT-1)
        {
            QSqlQuery drop;
            drop.exec(tr("delete from equipment where id = '%1'").arg(id[i]));
            cout << "删除成功";
        }
        i++;
    }

    for(int i = 0; i < ECOUNT; i++)
    {
        m_DoubleSpinBoxArray[i]->setValue(price[i]);
    }
}
Epricelist::~Epricelist()
{
    delete ui;
}

void Epricelist::mouseMoveEvent(QMouseEvent  *e)
{
    QPoint pt = e->globalPos()- m_pt;
    move(pt);
}
void Epricelist::mousePressEvent(QMouseEvent *e)
{
   if(e->button() == Qt::LeftButton)
   {
       m_pt = e->globalPos() - this->frameGeometry().topLeft();
   }
}

void Epricelist::on_pushButton_confirm_clicked()
{
    double price[40];

    for(int i = 0; i < ECOUNT; i++)
    {
        price[i] = m_DoubleSpinBoxArray[i]->value();
    }

    if (!db.open())//打开数据库
    {
        cout << "无法建立数据库连接";
    }
    QSqlQuery query;
    for(int i = 0; i < ECOUNT; i++)
    {
        query.exec(tr("UPDATE equipment SET price = '%1'WHERE id= '%2'").arg(price[i]).arg(i));
    }
    close();
}

void Epricelist::on_pushButton_clear_clicked()
{
    QMessageBox::StandardButton result = QMessageBox::question(this,"提示","是否清除数据？");
    if(result == QMessageBox::Yes)
    {
        QSqlQuery query;
        //query.exec("DROP TABLE materials");
        for(int i = 0; i < ECOUNT; i++)
        {
            query.exec(tr("UPDATE equipment SET price = 0 WHERE id= '%1'").arg(i));
            m_DoubleSpinBoxArray[i]->setValue(0);
        }
    }
}

#include "epricelist.h"
#include "ui_epricelist.h"

#define isDROP 0

#define ZB_DSB_0 ui->doubleSpinBox_FYF
#define ZB_DSB_1 ui->doubleSpinBox_KTMHH
#define ZB_DSB_2 ui->doubleSpinBox_HMMHH
#define ZB_DSB_3 ui->doubleSpinBox_KTNTH
#define ZB_DSB_4 ui->doubleSpinBox_HMNTH
#define ZB_DSB_5 ui->doubleSpinBox_SSYD
#define ZB_DSB_6 ui->doubleSpinBox_JGYD
#define ZB_DSB_7 ui->doubleSpinBox_PTJZ
#define ZB_DSB_8 ui->doubleSpinBox_SGSZ
#define ZB_DSB_9 ui->doubleSpinBox_SJSZ
#define ZB_DSB_10 ui->doubleSpinBox_QTST
#define ZB_DSB_11 ui->doubleSpinBox_CHX
#define ZB_DSB_12 ui->doubleSpinBox_JLX




Epricelist::Epricelist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Epricelist)
{
    ui->setupUi(this);

    connect(ui->pushButton_close,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));
    connect(ui->pushButton_confirm,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));

    setWindowFlags(Qt::FramelessWindowHint|windowFlags());

    m_DoubleSpinBoxArray[0] = ZB_DSB_0;
    m_DoubleSpinBoxArray[1] = ZB_DSB_1;
    m_DoubleSpinBoxArray[2] = ZB_DSB_2;
    m_DoubleSpinBoxArray[3] = ZB_DSB_3;
    m_DoubleSpinBoxArray[4] = ZB_DSB_4;
    m_DoubleSpinBoxArray[5] = ZB_DSB_5;
    m_DoubleSpinBoxArray[6] = ZB_DSB_6;
    m_DoubleSpinBoxArray[7] = ZB_DSB_7;
    m_DoubleSpinBoxArray[8] = ZB_DSB_8;
    m_DoubleSpinBoxArray[9] = ZB_DSB_9;
    m_DoubleSpinBoxArray[10] = ZB_DSB_10;
    m_DoubleSpinBoxArray[11] = ZB_DSB_11;
    m_DoubleSpinBoxArray[12] = ZB_DSB_12;

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./qtdb");
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
                                "苦痛梦幻魂","毁灭梦幻魂","苦痛南天魂","毁灭南天魂",
                                "神山腰带","金刚腰带",
                                "蟠桃戒指",
                                "三光手镯","三极手镯",
                                "齐天手套",
                                "晨晖星","金雷星", 
                                };
    int characternumInit[ECOUNT] = {0,
                                    12,12,12,12,
                                    12,12,
                                    12,
                                    6,12,
                                    12,
                                    12,12};

    if(isDROP)
        query.exec("DROP TABLE equipment");

    for(int i = 0; i < ECOUNT; i++)
    {
        query.prepare("insert into equipment values(?,?,?,?)");
        query.bindValue(0, i);
        query.bindValue(1, nameInit[i]);
        query.bindValue(2, 1000);
        query.bindValue(3, characternumInit[i]);
        success=query.exec();
        if(!success)
        {
            query.exec("select name from equipment where id = " + QString::number(i));
            query.next();
            if(nameInit[i] != query.value(0).toString())
            {
                query.exec(tr("UPDATE equipment SET name = '%1'WHERE id= '%2'").arg(nameInit[i]).arg(i));
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

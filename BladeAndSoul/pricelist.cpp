#include "pricelist.h"
#include "ui_pricelist.h"

#define DSB_0 ui->doubleSpinBox_LYJJ
#define DSB_1 ui->doubleSpinBox_FHJJ
#define DSB_2 ui->doubleSpinBox_MHHS
#define DSB_3 ui->doubleSpinBox_NTHS
#define DSB_4 ui->doubleSpinBox_TMJ
#define DSB_5 ui->doubleSpinBox_XYJ
#define DSB_6 ui->doubleSpinBox_JYJ
#define DSB_7 ui->doubleSpinBox_LSXS
#define DSB_8 ui->doubleSpinBox_CHXS
#define DSB_9 ui->doubleSpinBox_JLXS
#define DSB_10 ui->doubleSpinBox_TQLJJ
#define DSB_11 ui->doubleSpinBox_XYK
#define DSB_12 ui->doubleSpinBox_XHMNDBY
#define DSB_13 ui->doubleSpinBox_XFZTH
#define DSB_14 ui->doubleSpinBox_HYMNDXJ
#define DSB_15 ui->doubleSpinBox_XHG
#define DSB_16 ui->doubleSpinBox_XFG
#define DSB_17 ui->doubleSpinBox_HYG
#define DSB_18 ui->doubleSpinBox_SGS
#define DSB_19 ui->doubleSpinBox_QYZXW
#define DSB_21 ui->doubleSpinBox_TZZSP

PriceList::PriceList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PriceList)
{
    ui->setupUi(this);

    connect(ui->pushButton_close,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));
    connect(ui->pushButton_confirm,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));

    setWindowFlags(Qt::FramelessWindowHint|windowFlags()|Qt::WindowStaysOnTopHint);

    m_DoubleSpinBoxArray[0] = DSB_0;
    m_DoubleSpinBoxArray[1] = DSB_1;
    m_DoubleSpinBoxArray[2] = DSB_2;
    m_DoubleSpinBoxArray[3] = DSB_3;
    m_DoubleSpinBoxArray[4] = DSB_4;
    m_DoubleSpinBoxArray[5] = DSB_5;
    m_DoubleSpinBoxArray[6] = DSB_6;
    m_DoubleSpinBoxArray[7] = DSB_7;
    m_DoubleSpinBoxArray[8] = DSB_8;
    m_DoubleSpinBoxArray[9] = DSB_9;
    m_DoubleSpinBoxArray[10] = DSB_10;
    m_DoubleSpinBoxArray[11] = DSB_11;
    m_DoubleSpinBoxArray[12] = DSB_12;
    m_DoubleSpinBoxArray[13] = DSB_13;
    m_DoubleSpinBoxArray[14] = DSB_14;
    m_DoubleSpinBoxArray[15] = DSB_15;
    m_DoubleSpinBoxArray[16] = DSB_16;
    m_DoubleSpinBoxArray[17] = DSB_17;
    m_DoubleSpinBoxArray[18] = DSB_18;
    m_DoubleSpinBoxArray[19] = DSB_19;
    m_DoubleSpinBoxArray[20] = DSB_21;


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
    bool success = query.exec("create table materials(id int primary key,name varchar,"
                                      "price float,Ename varchar)");
    if(success)
        cout << "创建成功";
    else
        cout << "创建失败";

    QString nameInit[MCOUNT] = {"雷云结晶","烦惑结晶",
                               "梦幻魂石","南天魂石",
                               "天命镜","雪影镜","金牙镜",
                               "雷神星石","晨晖星石","金雷星石",
                               "天乾灵结晶","雪影矿",
                               "邪花魔女的苞叶","雪峰之铁华","黑月魔女的刑具",
                               "邪花钢","雪峰钢","黑月钢",
                               "神功石","起源之信物","挑战珠碎片"};

    QString EnameInit[MCOUNT] ={"pushButton_LYJJ","pushButton_FHJJ",
                                "pushButton_MHHS","pushButton_NTHS",
                                "pushButton_TMJ","pushButton_XYJ","pushButton_JYJ",
                                "pushButton_LSXS","pushButton_CHXS","pushButton_JLXS",
                                "pushButton_TQLJJ","pushButton_XYK",
                                "pushButton_XHMNDBY","pushButton_XFZTH","pushButton_HYMNDXJ",
                                "pushButton_XHG","pushButton_XFG","pushButton_HYG",
                                "pushButton_SGS","pushButton_QYZXW","pushButton_TZZSP"

    };

    int id[40];
    QString name[40];
    QString Ename[40];
    double price[40];

//    query.exec("DROP TABLE materials");

    for(int i = 0; i < MCOUNT; i++)
    {
        query.prepare("insert into materials values(?,?, ?,?)");
        query.bindValue(0, i);
        query.bindValue(1, nameInit[i]);
        query.bindValue(2, 0);
        query.bindValue(3, EnameInit[i]);
        success=query.exec();
        if(!success)
        {
            query.exec("select name from materials where id = " + QString::number(i));
            query.next();
            if(nameInit[i] != query.value(0).toString())
            {
                query.exec(tr("UPDATE materials SET name = '%1',Ename = '%2' WHERE id= '%3'").arg(nameInit[i]).arg(EnameInit[i]).arg(i));
                cout << "修改成功";
            }
            else
            {
                cout << "插入失败";
            }
        }
    }

    query.exec("select * from materials");
    while(query.next())
    {
        bool ok;
        static int i = 0;
        id[i] = query.value(0).toInt(&ok);
        name[i] = query.value(1).toString();
        price[i] = query.value(2).toFloat(&ok);
        Ename[i] = query.value(3).toString();
        cout << id[i];
        cout << name[i];
        cout << price[i];
        cout << Ename[i];
        i++;
    }

    for(int i = 0; i < MCOUNT; i++)
    {
        //cout << m_DoubleSpinBoxArray[i];
        m_DoubleSpinBoxArray[i]->setValue(price[i]);
    }
}

PriceList::~PriceList()
{
    delete ui;
}

void PriceList::mouseMoveEvent(QMouseEvent  *e)
{
    QPoint pt = e->globalPos()- m_pt;
    move(pt);
}
void PriceList::mousePressEvent(QMouseEvent *e)
{
   if(e->button() == Qt::LeftButton)
   {
       m_pt = e->globalPos() - this->frameGeometry().topLeft();
   }
}

void PriceList::on_pushButton_confirm_clicked()
{
    double price[40];

    for(int i = 0; i < MCOUNT; i++)
    {
        price[i] = m_DoubleSpinBoxArray[i]->value();
    }

    if (!db.open())//打开数据库
    {
        cout << "无法建立数据库连接";
    }
    QSqlQuery query;
    for(int i = 0; i < MCOUNT; i++)
    {
        query.exec(tr("UPDATE materials SET price = '%1'WHERE id= '%2'").arg(price[i]).arg(i));
        cout << tr("UPDATE materials SET price = '%1'WHERE id= '%2'").arg(price[i]).arg(i);
    }
    close();
}

void PriceList::on_pushButton_clear_clicked()
{
    QMessageBox::StandardButton result = QMessageBox::question(this,"提示","是否清除数据？");
    if(result == QMessageBox::Yes)
    {
        QSqlQuery query;
        //query.exec("DROP TABLE materials");
        for(int i = 0; i < MCOUNT; i++)
        {
            query.exec(tr("UPDATE materials SET price = 0 WHERE id= '%1'").arg(i));
            m_DoubleSpinBoxArray[i]->setValue(0);
        }
    }
}

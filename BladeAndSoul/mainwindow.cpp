#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pricelist.h"

#define PB_JJ1 ui->pushButton_LYJJ
#define PB_JJ2 ui->pushButton_FHJJ
#define PB_JJ3 ui->pushButton_TSJJ

#define PB_HS1 ui->pushButton_NTHS
#define PB_HS2 ui->pushButton_MHHS

#define PB_J1 ui->pushButton_XYJ
#define PB_J2 ui->pushButton_JYJ
#define PB_J3 ui->pushButton_YHJ

#define PB_XS1 ui->pushButton_CHXS
#define PB_XS2 ui->pushButton_JLXS
#define PB_XS3 ui->pushButton_YGXS

#define PB_QT1 ui->pushButton_TQLJJ
#define PB_QT2 ui->pushButton_XYK
#define PB_QT3 ui->pushButton_XFZTH
#define PB_QT4 ui->pushButton_HYMNDXJ
#define PB_QT5 ui->pushButton_XFG
#define PB_QT6 ui->pushButton_HYG
#define PB_QT7 ui->pushButton_SGS
#define PB_QT8 ui->pushButton_TZZSP



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("剑灵小工具");
    setWindowIcon(QIcon(":/img/darkness.ico"));

    setWindowFlags(Qt::WindowStaysOnTopHint);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./qtdb1.54");
    db.setHostName("admin");
    db.setUserName("admin");
    db.setPassword("12345");


    if (!db.open())//打开数据库
    {
        cout << "无法建立数据库连接";
    }

    m_PushButtonArray[0] = PB_JJ1;
    m_PushButtonArray[1] = PB_JJ2;
    m_PushButtonArray[2] = PB_JJ3;
    m_PushButtonArray[3] = PB_HS1;
    m_PushButtonArray[4] = PB_HS2;
    m_PushButtonArray[5] = PB_J1;
    m_PushButtonArray[6] = PB_J2;
    m_PushButtonArray[7] = PB_J3;
    m_PushButtonArray[8] = PB_XS1;
    m_PushButtonArray[9] = PB_XS2;
    m_PushButtonArray[10] = PB_XS3;
    m_PushButtonArray[11] = PB_QT1;
    m_PushButtonArray[12] = PB_QT2;
    m_PushButtonArray[13] = PB_QT3;
    m_PushButtonArray[14] = PB_QT4;
    m_PushButtonArray[15] = PB_QT5;
    m_PushButtonArray[16] = PB_QT6;
    m_PushButtonArray[17] = PB_QT7;
    m_PushButtonArray[18] = PB_QT8;

    m_PushButtonArray[0]->setIcon(QIcon(":/img/jpg/LYJJ.jpg"));
    m_PushButtonArray[1]->setIcon(QIcon(":/img/jpg/FHJJ.jpg"));
    m_PushButtonArray[2]->setIcon(QIcon(":/img/jpg/TSJJ.jpg"));

    m_PushButtonArray[3]->setIcon(QIcon(":/img/jpg/NTHS.jpg"));
    m_PushButtonArray[4]->setIcon(QIcon(":/img/jpg/MHHS.jpg"));

    m_PushButtonArray[5]->setIcon(QIcon(":/img/jpg/XYJ.jpg"));
    m_PushButtonArray[6]->setIcon(QIcon(":/img/jpg/JYJ.jpg"));
    m_PushButtonArray[7]->setIcon(QIcon(":/img/jpg/YHJ.jpg"));

    m_PushButtonArray[8]->setIcon(QIcon(":/img/jpg/CHXS.jpg"));
    m_PushButtonArray[9]->setIcon(QIcon(":/img/jpg/JLXS.jpg"));
    m_PushButtonArray[10]->setIcon(QIcon(":/img/jpg/YGXS.jpg"));

    m_PushButtonArray[11]->setIcon(QIcon(":/img/jpg/TQLJJ.jpg"));
    m_PushButtonArray[12]->setIcon(QIcon(":/img/jpg/XYK.jpg"));
    m_PushButtonArray[13]->setIcon(QIcon(":/img/jpg/XFZTH.jpg"));
    m_PushButtonArray[14]->setIcon(QIcon(":/img/jpg/HYMNDXJ.jpg"));
    m_PushButtonArray[15]->setIcon(QIcon(":/img/jpg/XFG.jpg"));
    m_PushButtonArray[16]->setIcon(QIcon(":/img/jpg/HYG.jpg"));
    m_PushButtonArray[17]->setIcon(QIcon(":/img/jpg/SGS.jpg"));
    m_PushButtonArray[18]->setIcon(QIcon(":/img/jpg/TZZSP.jpg"));





    for(int i = 0; i < COUNT; i++)
    {
        m_PushButtonArray[i]->setIconSize(QSize(33,28));
        connect(m_PushButtonArray[i],SIGNAL(clicked(bool)),this,SLOT(MaterialsCalculateButton()));
    }

    connect(ui->pushButton_ZBCX,SIGNAL(clicked(bool)),this,SLOT(EquipmentCalcualteButton()));
    w = new PriceList();
    Ew = new Epricelist();
    Tw = new TakeColor();
    MCw = new MaterialCalculation();
    connect(w,SIGNAL(MainWindowShow()),this,SLOT(MainWindowShow()));
    connect(Ew,SIGNAL(MainWindowShow()),this,SLOT(MainWindowShow()));
    connect(Tw,SIGNAL(MainWindowShow()),this,SLOT(MainWindowShow()));
    connect(MCw,SIGNAL(MainWindowShow()),this,SLOT(MainWindowShow()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    w->setWindowModality(Qt::ApplicationModal);
    w->show();
    hide();
}

void MainWindow::on_action_2_triggered()
{
    Ew->setWindowModality(Qt::ApplicationModal);
    Ew->show();
    hide();
}

void MainWindow::on_action33or24_triggered()
{
    MCw->setWindowModality(Qt::ApplicationModal);
    MCw->show();
    hide();
}


void MainWindow::on_action_4_triggered()
{
    Tw->setWindowModality(Qt::ApplicationModal);
    Tw->show();
    hide();
}

void MainWindow::MaterialsCalculate(QString name,double price)
{
    double MaxPrice[5] = {0};
    //double RecommendPrice[5] = {0};
    double MinPrice[5] = {0};
    double OriginalPrice = price;
    int PeopleNum = 6;
    QString message;

    message = tr("%1\r\n原价：%2\r\n").arg(name).arg(OriginalPrice);
    for(int i = 0; i < 4; i++)
    {
        if(name == m_gang[i].name)
        {
            QSqlQuery query;
            bool ok;
            query.exec("select price from materials where name = '起源之信物'");
            query.next();
            price = price - (m_gang[i].number*query.value(0).toFloat(&ok) + m_gang[i].price);
            message += tr("起源之信物价格：%1\r\n起源之信物数量：%2\r\n封印手续费：%3\r\n实际价格：%4\r\n").arg(query.value(0).toFloat(&ok)).arg(m_gang[i].number).arg(m_gang[i].price).arg(price);
            break;
        }
    }

    message += "---------------------------------------\r\n";

    for(int i = 0; i < 5; i++)
    {

        MaxPrice[i] = (price*0.95/PeopleNum)*(PeopleNum-1);
        //RecommendPrice[i] = (price*0.90/PeopleNum)*(PeopleNum-1);
        MinPrice[i] = (price*0.865/PeopleNum)*(PeopleNum-1);
        message += tr("人数：%1\r\n最高价：%2\r\n最低价：%3 \r\n---------------------------------------\r\n").arg(PeopleNum).arg(MaxPrice[i]).arg(MinPrice[i]);
        PeopleNum--;

    }

    QMessageBox::about(this,"推荐价格",message);
}

void MainWindow::EquipmentCalculate(QString name,double price, int characternum, double characterprice)
{
    cout << price;
    cout << characternum;
    cout << characterprice;
    double ZYMaxPrice = 0, CSMaxPrice = 0;
    double ZYMinPrice = 0, CSMinPrice = 0;
    int PeopleNum = 6;
    QString message;

    message = tr("%1\r\n原价：%2\r\n封印符数量：%3\r\n封印符价格：%4\r\n-------------------------\r\n").arg(name).arg(price).arg(characternum).arg(characterprice);
    for(int i = 0; i < 5; i++)
    {
        ZYMaxPrice = (price/PeopleNum) * (PeopleNum-1);
        ZYMinPrice = ((price - characternum*characterprice)/PeopleNum) * (PeopleNum-1);
        CSMaxPrice = (((price * 0.90) - (characternum*characterprice))/PeopleNum) * (PeopleNum-1);
        CSMinPrice = (((price * 0.81) - (characternum*characterprice))/PeopleNum) * (PeopleNum-1);
        message += tr("竞拍人数:%1\r\n自用最高价:%2\r\n自用最低价:%3\r\n出售最高价:%4\r\n出售最低价:%5\r\n-------------------------\r\n").arg(PeopleNum).arg(ZYMaxPrice).arg(ZYMinPrice).arg(CSMaxPrice).arg(CSMinPrice);
        PeopleNum--;
    }
    QMessageBox::about(this,"推荐价格",message);



}
void MainWindow::MaterialsCalculateButton()
{
    QString name;
    double price;
    QObject* sender = QObject::sender();
    for(int i = 0; i < COUNT; i++)
    {
        if(sender == m_PushButtonArray[i])
        {
            QSqlQuery query;
            cout << m_PushButtonArray[i]->objectName();
            query.exec("select * from materials where Ename = '" + m_PushButtonArray[i]->objectName() + "'");
            while(query.next())
            {
                bool ok;
                name = query.value(1).toString();
                price = query.value(2).toFloat(&ok);
                MaterialsCalculate(name,price);
            }
            break;
        }
    }
}

void MainWindow::EquipmentCalcualteButton()
{
    QString name;
    double price = 0;
    int characternum = 0;
    double characterprice = 0;
    QSqlQuery query;
    query.exec(tr("select * from equipment where name = '%1'").arg(ui->comboBox_ZBCX->currentText()));
    while(query.next())
    {
        bool ok;
        name = query.value(1).toString();
        price = query.value(2).toFloat(&ok);
        characternum = query.value(3).toInt(&ok);
    }
    query.exec(tr("select price from equipment where name = '封印符'"));
    while(query.next())
    {
        bool ok;
        characterprice = query.value(0).toFloat(&ok);
    }

    EquipmentCalculate(name,price,characternum,characterprice);
}

void MainWindow::on_pushButton_clicked()
{
    MaterialsCalculate("",ui->doubleSpinBox_KJCX->value());
}

void MainWindow::MainWindowShow()
{
    show();
}

void MainWindow::on_action_about_triggered()
{
    QMessageBox::about(this,"关于",
                            "v1.54\r\n"
                            "-新增24、33材料计算\r\n"
                            "-添加冥幻魂石、天寿结晶、月光星石、曜火镜\r\n"
                            "-添加冥幻魂、三炎手镯、月光星\r\n\n"

                            "v1.53\r\n"
                            "材料查询使用图标显示\r\n\n"
                            "v1.52\r\n"
                            "-界面置顶（管理员身份运行），查询更方便\t\n"
                            "-添加明神戒指、斗神手套\r\n"
                            "-删除不值钱的装备、材料\r\n\n"

                            "v1.51\r\n"
                            "-添加黑月材料\r\n"
                            "-添加邪花钢、雪峰钢、黑月钢、神功石、起源信物、挑战碎片\r\n"
                            "-删除不值钱的装备、材料\r\n"
                            "-修复装备查询bug\r\n"
                            "-优化UI\r\n");
}



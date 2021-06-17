#include "materialcalculation.h"
#include "ui_materialcalculation.h"

MaterialCalculation::MaterialCalculation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MaterialCalculation)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint|windowFlags()|Qt::WindowStaysOnTopHint);
    connect(ui->pushButton_close,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./qtdb1.54");
    db.setHostName("admin");
    db.setUserName("admin");
    db.setPassword("12345");

    if (!db.open())//打开数据库
    {
        cout << "无法建立数据库连接";
    }

    operatingModeGroup = new QButtonGroup(this);
    operatingModeGroup->addButton(ui->radioButton_two);
    operatingModeGroup->addButton(ui->radioButton_three);
    operatingModeGroup->setId(ui->radioButton_two,2);
    operatingModeGroup->setId(ui->radioButton_three,3);
    ui->radioButton_three->setChecked(true);
    NumberOfPeople = 3;
    connect(operatingModeGroup, SIGNAL(buttonClicked(int)), this, SLOT(operatingModeButtonsClicked(int)));
}


MaterialCalculation::~MaterialCalculation()
{
    delete ui;
}

void MaterialCalculation::mouseMoveEvent(QMouseEvent  *e)
{
    QPoint pt = e->globalPos()- m_pt;
    move(pt);
}
void MaterialCalculation::mousePressEvent(QMouseEvent *e)
{
   if(e->button() == Qt::LeftButton)
   {
       m_pt = e->globalPos() - this->frameGeometry().topLeft();
   }
}

void MaterialCalculation::operatingModeButtonsClicked(int id)
{
    NumberOfPeople = id;
}

void MaterialCalculation::on_pushButton_calculation_clicked()
{
    int id;
    QString name;
    double price = 0;
    QSqlQuery query;
    int index = 0;

    MaterialNum[0] = ui->doubleSpinBox_LYJJ->value();
    MaterialNum[1] = ui->doubleSpinBox_FHJJ->value();
    MaterialNum[2] = ui->doubleSpinBox_TSJJ->value();
    MaterialNum[3] = ui->doubleSpinBox_NTHS->value();
    MaterialNum[4] = ui->doubleSpinBox_MHHS->value();
    MaterialNum[5] = ui->doubleSpinBox_XYJ->value();
    MaterialNum[6] = ui->doubleSpinBox_JYJ->value();
    MaterialNum[7] = ui->doubleSpinBox_YHJ->value();
    MaterialNum[8] = ui->doubleSpinBox_CHXS->value();
    MaterialNum[9] = ui->doubleSpinBox_JLXS->value();
    MaterialNum[10] = ui->doubleSpinBox_YGXS->value();

    query.exec("select * from materials");

    while(query.next())
    {
        bool ok;
        id = query.value(0).toInt(&ok);
        name = query.value(1).toString();
        price = query.value(2).toFloat(&ok);

        switch(id)
        {
        case ID1:index = 0;break;
        case ID2:index = 1;break;
        case ID3:index = 2;break;
        case ID4:index = 3;break;
        case ID5:index = 4;break;
        case ID6:index = 5;break;
        case ID7:index = 6;break;
        case ID8:index = 7;break;
        case ID9:index = 8;break;
        case ID10:index = 9;break;
        case ID11:index = 10;break;
        default:
            index = 100;
            break;
        }
        if(index != 100)
        {
            MaterialPrice[index] = price;
        }
    }

    double MaterialTotalValue = 0;
    double PerCapitaProfitMin = 0;
    double PerCapitaProfitMax = 0;
    double Tax;
    for(int i = 0; i < MCCOUNT; i++)
    {
        MaterialTotalValue += (MaterialPrice[i] * MaterialNum[i]);
        cout << (MaterialPrice[i] * MaterialNum[i]);
    }
    MaterialTotalValue += ui->doubleSpinBox_Other->value();

    if(MaterialTotalValue < 100)
        Tax = 0.95;
    else if(MaterialTotalValue >= 100 && MaterialTotalValue < 1000)
        Tax = 0.94;
    else if(MaterialTotalValue >= 1000 && MaterialTotalValue < 5000)
        Tax = 0.93;
    else if(MaterialTotalValue >= 5000 && MaterialTotalValue < 10000)
        Tax = 0.91;
    else
        Tax = 0.90;
    PerCapitaProfitMax = (MaterialTotalValue * Tax)/NumberOfPeople;
    PerCapitaProfitMin = (MaterialTotalValue * (Tax-0.05))/NumberOfPeople;

    QString message;
    message = tr("材料总价值：%1\r\n人数：%2人\r\n平均利润：%3 ~ %4\r\n").arg(MaterialTotalValue).arg(NumberOfPeople).arg(QString::number(PerCapitaProfitMax, 'f', 2)).arg(QString::number(PerCapitaProfitMin, 'f', 2));
    QMessageBox::about(this,"计算结果",message);
}


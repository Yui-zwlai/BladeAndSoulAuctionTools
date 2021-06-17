#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pricelist.h"
#include "epricelist.h"
#include "takecolor.h"
#include "materialcalculation.h"

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QMessageBox>

#include <QDebug>

#define COUNT 19
#define cout qDebug() << "[" <<__FILE__ <<":"<<__LINE__ <<"]"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void MaterialsCalculate(QString,double);
    void EquipmentCalculate(QString,double,int,double);

private slots:
    void on_action_triggered();
    void on_action_2_triggered();
    void MaterialsCalculateButton();
    void EquipmentCalcualteButton();
    void on_pushButton_clicked();

    void MainWindowShow();



    void on_action_4_triggered();

    void on_action_about_triggered();

    void on_action33or24_triggered();

private:
    Ui::MainWindow *ui;
    PriceList * w;
    Epricelist * Ew;
    TakeColor * Tw;
    MaterialCalculation * MCw;

    QSqlDatabase db;

    QPushButton *m_PushButtonArray[COUNT];

    typedef struct
    {
        QString name;
        float number;
        int price;
    }Gang;

    const Gang XFG = {"雪峰钢",4,25};
    const Gang HYG = {"黑月钢",4,25};
    const Gang SGS = {"神功石",1,10};

    Gang m_gang[3]={XFG,HYG,SGS};
};

#endif // MAINWINDOW_H

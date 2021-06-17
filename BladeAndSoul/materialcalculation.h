#ifndef MATERIALCALCULATION_H
#define MATERIALCALCULATION_H

#include <QWidget>
#include <QButtonGroup>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QMouseEvent>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ <<":"<<__LINE__ <<"]"
#define ID1 0
#define ID2 1
#define ID3 2
#define ID4 3
#define ID5 4
#define ID6 5
#define ID7 6
#define ID8 7
#define ID9 8
#define ID10 9
#define ID11 10

#define MCCOUNT 11
namespace Ui {
class MaterialCalculation;
}

class MaterialCalculation : public QWidget
{
    Q_OBJECT

protected:
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);


public:
    explicit MaterialCalculation(QWidget *parent = nullptr);
    ~MaterialCalculation();

private slots:
    void operatingModeButtonsClicked(int id);
    void on_pushButton_calculation_clicked();

signals:
    void MainWindowShow();

private:
    Ui::MaterialCalculation *ui;

    QSqlDatabase db;

    QButtonGroup *operatingModeGroup ;

    int NumberOfPeople;
    double MaterialPrice[MCCOUNT];
    double MaterialNum[MCCOUNT];

    QPoint m_pt;
};

#endif // MATERIALCALCULATION_H

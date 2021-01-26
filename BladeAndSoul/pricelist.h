#ifndef PRICELIST_H
#define PRICELIST_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QMouseEvent>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ <<":"<<__LINE__ <<"]"

#include <QDoubleSpinBox>
#include <QMessageBox>

#define MCOUNT 22
namespace Ui {
class PriceList;
}

class PriceList : public QWidget
{
    Q_OBJECT

protected:
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);

public:
    explicit PriceList(QWidget *parent = 0);
    ~PriceList();

signals:
    void MainWindowShow();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::PriceList *ui;

    QSqlDatabase db;

    QDoubleSpinBox *m_DoubleSpinBoxArray[MCOUNT];

    QPoint m_pt;
};

#endif // PRICELIST_H

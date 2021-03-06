#ifndef EPRICELIST_H
#define EPRICELIST_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QMouseEvent>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ <<":"<<__LINE__ <<"]"

#include <QDoubleSpinBox>
#include <QMessageBox>
#include <QVector>

#define ECOUNT 10
namespace Ui {
class Epricelist;
}

class Epricelist : public QWidget
{
    Q_OBJECT

public:
    explicit Epricelist(QWidget *parent = 0);
    ~Epricelist();
protected:
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);

signals:
    void MainWindowShow();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::Epricelist *ui;

    QSqlDatabase db;

    //QDoubleSpinBox *m_DoubleSpinBoxArray[ECOUNT];
    QVector<QDoubleSpinBox *> m_DoubleSpinBoxArray;


    QPoint m_pt;
};

#endif // EPRICELIST_H

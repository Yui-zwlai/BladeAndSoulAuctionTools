#ifndef EPRICELIST_H
#define EPRICELIST_H

#define ECOUNT 13

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QMouseEvent>
#include <QDebug>
#define cout qDebug() << "[" <<__FILE__ <<":"<<__LINE__ <<"]"

#include <QDoubleSpinBox>
#include <QMessageBox>
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

    QDoubleSpinBox *m_DoubleSpinBoxArray[ECOUNT];

    QPoint m_pt;
};

#endif // EPRICELIST_H

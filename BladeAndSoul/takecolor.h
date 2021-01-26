#ifndef TAKECOLOR_H
#define TAKECOLOR_H

#include <QWidget>
#include <QScreen>

#include <QKeyEvent>
#include <QMouseEvent>

#include <QDebug>

#define cout qDebug() << "[" <<__FILE__ <<":"<<__LINE__ <<"]"

#include<windows.h>



namespace Ui {
class TakeColor;
}

class TakeColor : public QWidget
{
    Q_OBJECT

protected:
    void keyPressEvent(QKeyEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);

signals:
    void MainWindowShow();

public:
    explicit TakeColor(QWidget *parent = 0);
    ~TakeColor();


private slots:

private:
    Ui::TakeColor *ui;

    QPoint m_pt;
};

#endif // TAKECOLOR_H

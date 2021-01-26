#include "takecolor.h"
#include "ui_takecolor.h"

TakeColor::TakeColor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TakeColor)
{
    ui->setupUi(this);
    connect(ui->pushButton_close,SIGNAL(clicked(bool)),this,SIGNAL(MainWindowShow()));

    setWindowFlags(Qt::FramelessWindowHint|windowFlags()|Qt::WindowStaysOnTopHint);

}

TakeColor::~TakeColor()
{
    delete ui;
}
void TakeColor::mouseMoveEvent(QMouseEvent  *e)
{
    QPoint pt = e->globalPos()- m_pt;
    move(pt);
}
void TakeColor::mousePressEvent(QMouseEvent *e)
{
   if(e->button() == Qt::LeftButton)
   {
       m_pt = e->globalPos() - this->frameGeometry().topLeft();
   }
}

void TakeColor::keyPressEvent(QKeyEvent * e)
{
    if(e->modifiers() == Qt::AltModifier)
    {
        if(e->key() == Qt::Key_1)
        {
            int x = QCursor::pos().x();
            int y = QCursor::pos().y();
            ui->lineEdit_X->setText(QString::number(x,10));
            ui->lineEdit_Y->setText(QString::number(y,10));


              // QPixmap pixmap = QPixmap::grabWindow(QApplication::desktop()->winId(), x, y, 1, 1);

                QList<QScreen *> list_screen =  QGuiApplication::screens(); //可能电脑接了多个屏幕

                QPixmap pixmap = list_screen.at(0)->grabWindow(0,x,y,1,1);
                if (!pixmap.isNull()) //如果像素图不为NULL
                {
                    QImage image = pixmap.toImage();//将像素图转换为QImage
                    if (!image.isNull()) //如果image不为空
                    {
                        if (image.valid(0, 0)) //坐标位置有效
                        {
                            QColor color = image.pixel(0, 0);
                            int mousedPressed_R = color.red();
                            int mousedPressed_G = color.green();
                            int mousedPressed_B = color.blue();
                            ui->lineEdit_Color->setText(QString("%1%2%3").arg(mousedPressed_B,2,16,QLatin1Char('0'))
                                                                         .arg(mousedPressed_G,2,16,QLatin1Char('0'))
                                                                         .arg(mousedPressed_R,2,16,QLatin1Char('0')));
                        }
                    }
                }
        }
    }


}





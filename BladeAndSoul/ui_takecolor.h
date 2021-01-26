/********************************************************************************
** Form generated from reading UI file 'takecolor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKECOLOR_H
#define UI_TAKECOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TakeColor
{
public:
    QLabel *label;
    QPushButton *pushButton_close;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *X;
    QLineEdit *lineEdit_X;
    QLabel *Y;
    QLineEdit *lineEdit_Y;
    QLabel *Color;
    QLineEdit *lineEdit_Color;

    void setupUi(QWidget *TakeColor)
    {
        if (TakeColor->objectName().isEmpty())
            TakeColor->setObjectName(QStringLiteral("TakeColor"));
        TakeColor->resize(190, 150);
        TakeColor->setMinimumSize(QSize(190, 150));
        label = new QLabel(TakeColor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 61, 16));
        pushButton_close = new QPushButton(TakeColor);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(60, 110, 75, 23));
        widget = new QWidget(TakeColor);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 134, 75));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        X = new QLabel(widget);
        X->setObjectName(QStringLiteral("X"));

        gridLayout->addWidget(X, 0, 0, 1, 1);

        lineEdit_X = new QLineEdit(widget);
        lineEdit_X->setObjectName(QStringLiteral("lineEdit_X"));
        lineEdit_X->setReadOnly(true);

        gridLayout->addWidget(lineEdit_X, 0, 1, 1, 1);

        Y = new QLabel(widget);
        Y->setObjectName(QStringLiteral("Y"));

        gridLayout->addWidget(Y, 1, 0, 1, 1);

        lineEdit_Y = new QLineEdit(widget);
        lineEdit_Y->setObjectName(QStringLiteral("lineEdit_Y"));
        lineEdit_Y->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Y, 1, 1, 1, 1);

        Color = new QLabel(widget);
        Color->setObjectName(QStringLiteral("Color"));

        gridLayout->addWidget(Color, 2, 0, 1, 1);

        lineEdit_Color = new QLineEdit(widget);
        lineEdit_Color->setObjectName(QStringLiteral("lineEdit_Color"));
        lineEdit_Color->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Color, 2, 1, 1, 1);


        retranslateUi(TakeColor);
        QObject::connect(pushButton_close, SIGNAL(clicked()), TakeColor, SLOT(close()));

        QMetaObject::connectSlotsByName(TakeColor);
    } // setupUi

    void retranslateUi(QWidget *TakeColor)
    {
        TakeColor->setWindowTitle(QApplication::translate("TakeColor", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TakeColor", "Alt+1 \345\217\226\350\211\262", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("TakeColor", "\350\277\224\345\233\236", Q_NULLPTR));
        X->setText(QApplication::translate("TakeColor", "X\345\235\220\346\240\207", Q_NULLPTR));
        Y->setText(QApplication::translate("TakeColor", "Y\345\235\220\346\240\207", Q_NULLPTR));
        Color->setText(QApplication::translate("TakeColor", "\345\217\226\350\211\262\345\200\274", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TakeColor: public Ui_TakeColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKECOLOR_H

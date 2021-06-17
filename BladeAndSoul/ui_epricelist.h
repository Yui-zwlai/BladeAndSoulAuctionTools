/********************************************************************************
** Form generated from reading UI file 'epricelist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EPRICELIST_H
#define UI_EPRICELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Epricelist
{
public:
    QPushButton *pushButton_close;
    QPushButton *pushButton_confirm;
    QGroupBox *groupBox_TT;
    QGridLayout *gridLayout;
    QLabel *label_JLX;
    QDoubleSpinBox *doubleSpinBox_JLX;
    QLabel *label_HMNTH;
    QDoubleSpinBox *doubleSpinBox_HMNTH;
    QLabel *label_JGYD;
    QDoubleSpinBox *doubleSpinBox_JGYD;
    QLabel *label_MSJZ;
    QDoubleSpinBox *doubleSpinBox_MSJZ;
    QLabel *label_DSST;
    QDoubleSpinBox *doubleSpinBox_DSST;
    QLabel *label_SYSZ;
    QDoubleSpinBox *doubleSpinBox_SYSZ;
    QLabel *label_KTMHH;
    QDoubleSpinBox *doubleSpinBox_KTMHH;
    QLabel *label_HMMHH;
    QDoubleSpinBox *doubleSpinBox_HMMHH;
    QLabel *label_YGX;
    QDoubleSpinBox *doubleSpinBox_YGX;
    QDoubleSpinBox *doubleSpinBox_FYF;
    QLabel *label_FYF;
    QPushButton *pushButton_clear;

    void setupUi(QWidget *Epricelist)
    {
        if (Epricelist->objectName().isEmpty())
            Epricelist->setObjectName(QString::fromUtf8("Epricelist"));
        Epricelist->resize(359, 381);
        Epricelist->setMaximumSize(QSize(359, 381));
        pushButton_close = new QPushButton(Epricelist);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(261, 330, 75, 23));
        pushButton_confirm = new QPushButton(Epricelist);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(180, 330, 75, 23));
        groupBox_TT = new QGroupBox(Epricelist);
        groupBox_TT->setObjectName(QString::fromUtf8("groupBox_TT"));
        groupBox_TT->setGeometry(QRect(0, 10, 342, 281));
        gridLayout = new QGridLayout(groupBox_TT);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_JLX = new QLabel(groupBox_TT);
        label_JLX->setObjectName(QString::fromUtf8("label_JLX"));

        gridLayout->addWidget(label_JLX, 0, 0, 1, 1);

        doubleSpinBox_JLX = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_JLX->setObjectName(QString::fromUtf8("doubleSpinBox_JLX"));
        doubleSpinBox_JLX->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_JLX, 0, 1, 1, 1);

        label_HMNTH = new QLabel(groupBox_TT);
        label_HMNTH->setObjectName(QString::fromUtf8("label_HMNTH"));

        gridLayout->addWidget(label_HMNTH, 1, 0, 1, 1);

        doubleSpinBox_HMNTH = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_HMNTH->setObjectName(QString::fromUtf8("doubleSpinBox_HMNTH"));
        doubleSpinBox_HMNTH->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_HMNTH, 1, 1, 1, 1);

        label_JGYD = new QLabel(groupBox_TT);
        label_JGYD->setObjectName(QString::fromUtf8("label_JGYD"));

        gridLayout->addWidget(label_JGYD, 2, 0, 1, 1);

        doubleSpinBox_JGYD = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_JGYD->setObjectName(QString::fromUtf8("doubleSpinBox_JGYD"));
        doubleSpinBox_JGYD->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_JGYD, 2, 1, 1, 1);

        label_MSJZ = new QLabel(groupBox_TT);
        label_MSJZ->setObjectName(QString::fromUtf8("label_MSJZ"));

        gridLayout->addWidget(label_MSJZ, 3, 0, 1, 1);

        doubleSpinBox_MSJZ = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_MSJZ->setObjectName(QString::fromUtf8("doubleSpinBox_MSJZ"));
        doubleSpinBox_MSJZ->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_MSJZ, 3, 1, 1, 1);

        label_DSST = new QLabel(groupBox_TT);
        label_DSST->setObjectName(QString::fromUtf8("label_DSST"));

        gridLayout->addWidget(label_DSST, 3, 2, 1, 1);

        doubleSpinBox_DSST = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_DSST->setObjectName(QString::fromUtf8("doubleSpinBox_DSST"));
        doubleSpinBox_DSST->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_DSST, 3, 3, 1, 1);

        label_SYSZ = new QLabel(groupBox_TT);
        label_SYSZ->setObjectName(QString::fromUtf8("label_SYSZ"));

        gridLayout->addWidget(label_SYSZ, 4, 0, 1, 1);

        doubleSpinBox_SYSZ = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_SYSZ->setObjectName(QString::fromUtf8("doubleSpinBox_SYSZ"));
        doubleSpinBox_SYSZ->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_SYSZ, 4, 1, 1, 1);

        label_KTMHH = new QLabel(groupBox_TT);
        label_KTMHH->setObjectName(QString::fromUtf8("label_KTMHH"));

        gridLayout->addWidget(label_KTMHH, 5, 0, 1, 1);

        doubleSpinBox_KTMHH = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_KTMHH->setObjectName(QString::fromUtf8("doubleSpinBox_KTMHH"));
        doubleSpinBox_KTMHH->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_KTMHH, 5, 1, 1, 1);

        label_HMMHH = new QLabel(groupBox_TT);
        label_HMMHH->setObjectName(QString::fromUtf8("label_HMMHH"));

        gridLayout->addWidget(label_HMMHH, 5, 2, 1, 1);

        doubleSpinBox_HMMHH = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_HMMHH->setObjectName(QString::fromUtf8("doubleSpinBox_HMMHH"));
        doubleSpinBox_HMMHH->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_HMMHH, 5, 3, 1, 1);

        label_YGX = new QLabel(groupBox_TT);
        label_YGX->setObjectName(QString::fromUtf8("label_YGX"));

        gridLayout->addWidget(label_YGX, 6, 0, 1, 1);

        doubleSpinBox_YGX = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_YGX->setObjectName(QString::fromUtf8("doubleSpinBox_YGX"));
        doubleSpinBox_YGX->setMaximum(10000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_YGX, 6, 1, 1, 1);

        doubleSpinBox_FYF = new QDoubleSpinBox(Epricelist);
        doubleSpinBox_FYF->setObjectName(QString::fromUtf8("doubleSpinBox_FYF"));
        doubleSpinBox_FYF->setGeometry(QRect(90, 300, 78, 20));
        doubleSpinBox_FYF->setMaximum(10000.000000000000000);
        label_FYF = new QLabel(Epricelist);
        label_FYF->setObjectName(QString::fromUtf8("label_FYF"));
        label_FYF->setGeometry(QRect(12, 300, 72, 20));
        pushButton_clear = new QPushButton(Epricelist);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(100, 330, 75, 23));

        retranslateUi(Epricelist);
        QObject::connect(pushButton_close, SIGNAL(clicked()), Epricelist, SLOT(close()));

        QMetaObject::connectSlotsByName(Epricelist);
    } // setupUi

    void retranslateUi(QWidget *Epricelist)
    {
        Epricelist->setWindowTitle(QApplication::translate("Epricelist", "Form", nullptr));
        pushButton_close->setText(QApplication::translate("Epricelist", "\345\205\263\351\227\255", nullptr));
        pushButton_confirm->setText(QApplication::translate("Epricelist", "\344\277\235\345\255\230", nullptr));
        groupBox_TT->setTitle(QApplication::translate("Epricelist", "\345\211\257\346\234\254\346\216\211\350\220\275", nullptr));
        label_JLX->setText(QApplication::translate("Epricelist", "\351\207\221\351\233\267\346\230\237\357\274\232", nullptr));
        label_HMNTH->setText(QApplication::translate("Epricelist", "\346\257\201\347\201\255\345\215\227\345\244\251\351\255\202\357\274\232", nullptr));
        label_JGYD->setText(QApplication::translate("Epricelist", "\351\207\221\345\210\232\350\205\260\345\270\246\357\274\232", nullptr));
        label_MSJZ->setText(QApplication::translate("Epricelist", "\345\206\245\347\245\236\346\210\222\346\214\207\357\274\232", nullptr));
        label_DSST->setText(QApplication::translate("Epricelist", "\346\226\227\347\245\236\346\211\213\345\245\227\357\274\232", nullptr));
        label_SYSZ->setText(QApplication::translate("Epricelist", "\344\270\211\347\202\216\346\211\213\351\225\257\357\274\232", nullptr));
        label_KTMHH->setText(QApplication::translate("Epricelist", "\350\213\246\347\227\233\345\206\245\345\271\273\351\255\202\357\274\232", nullptr));
        label_HMMHH->setText(QApplication::translate("Epricelist", "\346\257\201\347\201\255\345\206\245\345\271\273\351\255\202\357\274\232", nullptr));
        label_YGX->setText(QApplication::translate("Epricelist", "\346\234\210\345\205\211\346\230\237\357\274\232", nullptr));
        label_FYF->setText(QApplication::translate("Epricelist", "\345\260\201\345\215\260\347\254\246\357\274\232", nullptr));
        pushButton_clear->setText(QApplication::translate("Epricelist", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Epricelist: public Ui_Epricelist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EPRICELIST_H

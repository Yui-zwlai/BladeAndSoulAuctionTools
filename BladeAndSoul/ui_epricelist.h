/********************************************************************************
** Form generated from reading UI file 'epricelist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EPRICELIST_H
#define UI_EPRICELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
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
    QDoubleSpinBox *doubleSpinBox_JLX;
    QLabel *label_JGYD;
    QDoubleSpinBox *doubleSpinBox_JGYD;
    QLabel *label_JLX;
    QDoubleSpinBox *doubleSpinBox_SJSZ;
    QLabel *label_SJSZ;
    QDoubleSpinBox *doubleSpinBox_HMNTH;
    QLabel *label_HMNTH;
    QDoubleSpinBox *doubleSpinBox_KTNTH;
    QLabel *label_CHX;
    QLabel *label_KTNTH;
    QDoubleSpinBox *doubleSpinBox_PTJZ;
    QLabel *label_PTJZ;
    QDoubleSpinBox *doubleSpinBox_QTST;
    QLabel *label_QTST;
    QDoubleSpinBox *doubleSpinBox_KTMHH;
    QDoubleSpinBox *doubleSpinBox_CHX;
    QDoubleSpinBox *doubleSpinBox_SSYD;
    QLabel *label_SSYD;
    QDoubleSpinBox *doubleSpinBox_HMMHH;
    QLabel *label_HMMHH;
    QLabel *label_KTMHH;
    QDoubleSpinBox *doubleSpinBox_SGSZ;
    QLabel *label_SGSZ;
    QDoubleSpinBox *doubleSpinBox_FYF;
    QLabel *label_FYF;
    QPushButton *pushButton_clear;

    void setupUi(QWidget *Epricelist)
    {
        if (Epricelist->objectName().isEmpty())
            Epricelist->setObjectName(QStringLiteral("Epricelist"));
        Epricelist->resize(359, 395);
        pushButton_close = new QPushButton(Epricelist);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(261, 360, 75, 23));
        pushButton_confirm = new QPushButton(Epricelist);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(180, 360, 75, 23));
        groupBox_TT = new QGroupBox(Epricelist);
        groupBox_TT->setObjectName(QStringLiteral("groupBox_TT"));
        groupBox_TT->setGeometry(QRect(0, 10, 342, 312));
        gridLayout = new QGridLayout(groupBox_TT);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        doubleSpinBox_JLX = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_JLX->setObjectName(QStringLiteral("doubleSpinBox_JLX"));
        doubleSpinBox_JLX->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_JLX, 6, 3, 1, 1);

        label_JGYD = new QLabel(groupBox_TT);
        label_JGYD->setObjectName(QStringLiteral("label_JGYD"));

        gridLayout->addWidget(label_JGYD, 7, 0, 1, 1);

        doubleSpinBox_JGYD = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_JGYD->setObjectName(QStringLiteral("doubleSpinBox_JGYD"));
        doubleSpinBox_JGYD->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_JGYD, 7, 1, 1, 1);

        label_JLX = new QLabel(groupBox_TT);
        label_JLX->setObjectName(QStringLiteral("label_JLX"));

        gridLayout->addWidget(label_JLX, 6, 2, 1, 1);

        doubleSpinBox_SJSZ = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_SJSZ->setObjectName(QStringLiteral("doubleSpinBox_SJSZ"));
        doubleSpinBox_SJSZ->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_SJSZ, 6, 1, 1, 1);

        label_SJSZ = new QLabel(groupBox_TT);
        label_SJSZ->setObjectName(QStringLiteral("label_SJSZ"));

        gridLayout->addWidget(label_SJSZ, 6, 0, 1, 1);

        doubleSpinBox_HMNTH = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_HMNTH->setObjectName(QStringLiteral("doubleSpinBox_HMNTH"));
        doubleSpinBox_HMNTH->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_HMNTH, 5, 3, 1, 1);

        label_HMNTH = new QLabel(groupBox_TT);
        label_HMNTH->setObjectName(QStringLiteral("label_HMNTH"));

        gridLayout->addWidget(label_HMNTH, 5, 2, 1, 1);

        doubleSpinBox_KTNTH = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_KTNTH->setObjectName(QStringLiteral("doubleSpinBox_KTNTH"));
        doubleSpinBox_KTNTH->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_KTNTH, 5, 1, 1, 1);

        label_CHX = new QLabel(groupBox_TT);
        label_CHX->setObjectName(QStringLiteral("label_CHX"));

        gridLayout->addWidget(label_CHX, 3, 0, 1, 1);

        label_KTNTH = new QLabel(groupBox_TT);
        label_KTNTH->setObjectName(QStringLiteral("label_KTNTH"));

        gridLayout->addWidget(label_KTNTH, 5, 0, 1, 1);

        doubleSpinBox_PTJZ = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_PTJZ->setObjectName(QStringLiteral("doubleSpinBox_PTJZ"));
        doubleSpinBox_PTJZ->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_PTJZ, 4, 3, 1, 1);

        label_PTJZ = new QLabel(groupBox_TT);
        label_PTJZ->setObjectName(QStringLiteral("label_PTJZ"));

        gridLayout->addWidget(label_PTJZ, 4, 2, 1, 1);

        doubleSpinBox_QTST = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_QTST->setObjectName(QStringLiteral("doubleSpinBox_QTST"));
        doubleSpinBox_QTST->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_QTST, 4, 1, 1, 1);

        label_QTST = new QLabel(groupBox_TT);
        label_QTST->setObjectName(QStringLiteral("label_QTST"));

        gridLayout->addWidget(label_QTST, 4, 0, 1, 1);

        doubleSpinBox_KTMHH = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_KTMHH->setObjectName(QStringLiteral("doubleSpinBox_KTMHH"));
        doubleSpinBox_KTMHH->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_KTMHH, 1, 1, 1, 1);

        doubleSpinBox_CHX = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_CHX->setObjectName(QStringLiteral("doubleSpinBox_CHX"));
        doubleSpinBox_CHX->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_CHX, 3, 1, 1, 1);

        doubleSpinBox_SSYD = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_SSYD->setObjectName(QStringLiteral("doubleSpinBox_SSYD"));
        doubleSpinBox_SSYD->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_SSYD, 2, 1, 1, 1);

        label_SSYD = new QLabel(groupBox_TT);
        label_SSYD->setObjectName(QStringLiteral("label_SSYD"));

        gridLayout->addWidget(label_SSYD, 2, 0, 1, 1);

        doubleSpinBox_HMMHH = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_HMMHH->setObjectName(QStringLiteral("doubleSpinBox_HMMHH"));
        doubleSpinBox_HMMHH->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_HMMHH, 1, 3, 1, 1);

        label_HMMHH = new QLabel(groupBox_TT);
        label_HMMHH->setObjectName(QStringLiteral("label_HMMHH"));

        gridLayout->addWidget(label_HMMHH, 1, 2, 1, 1);

        label_KTMHH = new QLabel(groupBox_TT);
        label_KTMHH->setObjectName(QStringLiteral("label_KTMHH"));

        gridLayout->addWidget(label_KTMHH, 1, 0, 1, 1);

        doubleSpinBox_SGSZ = new QDoubleSpinBox(groupBox_TT);
        doubleSpinBox_SGSZ->setObjectName(QStringLiteral("doubleSpinBox_SGSZ"));
        doubleSpinBox_SGSZ->setMaximum(10000);

        gridLayout->addWidget(doubleSpinBox_SGSZ, 0, 1, 1, 1);

        label_SGSZ = new QLabel(groupBox_TT);
        label_SGSZ->setObjectName(QStringLiteral("label_SGSZ"));

        gridLayout->addWidget(label_SGSZ, 0, 0, 1, 1);

        doubleSpinBox_FYF = new QDoubleSpinBox(Epricelist);
        doubleSpinBox_FYF->setObjectName(QStringLiteral("doubleSpinBox_FYF"));
        doubleSpinBox_FYF->setGeometry(QRect(90, 330, 78, 20));
        doubleSpinBox_FYF->setMaximum(10000);
        label_FYF = new QLabel(Epricelist);
        label_FYF->setObjectName(QStringLiteral("label_FYF"));
        label_FYF->setGeometry(QRect(12, 330, 72, 20));
        pushButton_clear = new QPushButton(Epricelist);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(100, 360, 75, 23));

        retranslateUi(Epricelist);
        QObject::connect(pushButton_close, SIGNAL(clicked()), Epricelist, SLOT(close()));

        QMetaObject::connectSlotsByName(Epricelist);
    } // setupUi

    void retranslateUi(QWidget *Epricelist)
    {
        Epricelist->setWindowTitle(QApplication::translate("Epricelist", "Form", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("Epricelist", "\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("Epricelist", "\344\277\235\345\255\230", Q_NULLPTR));
        groupBox_TT->setTitle(QApplication::translate("Epricelist", "\345\211\257\346\234\254\346\216\211\350\220\275", Q_NULLPTR));
        label_JGYD->setText(QApplication::translate("Epricelist", "\351\207\221\345\210\232\350\205\260\345\270\246", Q_NULLPTR));
        label_JLX->setText(QApplication::translate("Epricelist", "\351\207\221\351\233\267\346\230\237\357\274\232", Q_NULLPTR));
        label_SJSZ->setText(QApplication::translate("Epricelist", "\344\270\211\346\236\201\346\211\213\351\225\257\357\274\232", Q_NULLPTR));
        label_HMNTH->setText(QApplication::translate("Epricelist", "\346\257\201\347\201\255\345\215\227\345\244\251\351\255\202\357\274\232", Q_NULLPTR));
        label_CHX->setText(QApplication::translate("Epricelist", "\346\231\250\346\231\226\346\230\237\357\274\232", Q_NULLPTR));
        label_KTNTH->setText(QApplication::translate("Epricelist", "\350\213\246\347\227\233\345\215\227\345\244\251\351\255\202\357\274\232", Q_NULLPTR));
        label_PTJZ->setText(QApplication::translate("Epricelist", "\350\237\240\346\241\203\346\210\222\346\214\207\357\274\232", Q_NULLPTR));
        label_QTST->setText(QApplication::translate("Epricelist", "\351\275\220\345\244\251\346\211\213\345\245\227\357\274\232", Q_NULLPTR));
        label_SSYD->setText(QApplication::translate("Epricelist", "\347\245\236\345\261\261\350\205\260\345\270\246\357\274\232", Q_NULLPTR));
        label_HMMHH->setText(QApplication::translate("Epricelist", "\346\257\201\347\201\255\346\242\246\345\271\273\351\255\202\357\274\232", Q_NULLPTR));
        label_KTMHH->setText(QApplication::translate("Epricelist", "\350\213\246\347\227\233\346\242\246\345\271\273\351\255\202\357\274\232", Q_NULLPTR));
        label_SGSZ->setText(QApplication::translate("Epricelist", "\344\270\211\345\205\211\346\211\213\351\225\257\357\274\232", Q_NULLPTR));
        label_FYF->setText(QApplication::translate("Epricelist", "\345\260\201\345\215\260\347\254\246\357\274\232", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("Epricelist", "\346\270\205\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Epricelist: public Ui_Epricelist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EPRICELIST_H
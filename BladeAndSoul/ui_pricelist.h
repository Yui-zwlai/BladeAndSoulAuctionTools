/********************************************************************************
** Form generated from reading UI file 'pricelist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRICELIST_H
#define UI_PRICELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PriceList
{
public:
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_close;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_LYJJ;
    QDoubleSpinBox *doubleSpinBox_LYJJ;
    QLabel *label_FHJJ;
    QDoubleSpinBox *doubleSpinBox_FHJJ;
    QLabel *label_TSJJ;
    QDoubleSpinBox *doubleSpinBox_TSJJ;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_XYJ;
    QDoubleSpinBox *doubleSpinBox_XYJ;
    QLabel *label_JYJ;
    QDoubleSpinBox *doubleSpinBox_JYJ;
    QLabel *label_YHJ;
    QDoubleSpinBox *doubleSpinBox_YHJ;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_SGS;
    QDoubleSpinBox *doubleSpinBox_HYG;
    QLabel *label_HYG;
    QLabel *label_TQLJJ;
    QDoubleSpinBox *doubleSpinBox_XFG;
    QDoubleSpinBox *doubleSpinBox_XYK;
    QDoubleSpinBox *doubleSpinBox_TZZSP;
    QLabel *label_XYK;
    QLabel *label_TZZSP;
    QLabel *label_QYZXW;
    QDoubleSpinBox *doubleSpinBox_HYMNDXJ;
    QDoubleSpinBox *doubleSpinBox_XFZTH;
    QDoubleSpinBox *doubleSpinBox_TQLJJ;
    QLabel *label_XFZTH;
    QLabel *label_HYMNDXJ;
    QLabel *label_XFG;
    QDoubleSpinBox *doubleSpinBox_SGS;
    QDoubleSpinBox *doubleSpinBox_QYZXW;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_CHXS;
    QDoubleSpinBox *doubleSpinBox_CHXS;
    QLabel *label_JYXS;
    QDoubleSpinBox *doubleSpinBox_JLXS;
    QLabel *label_YGXS;
    QDoubleSpinBox *doubleSpinBox_YGXS;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_NTHS;
    QDoubleSpinBox *doubleSpinBox_NTHS;
    QLabel *label_MHHS;
    QDoubleSpinBox *doubleSpinBox_MHHS;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_clear;

    void setupUi(QWidget *PriceList)
    {
        if (PriceList->objectName().isEmpty())
            PriceList->setObjectName(QString::fromUtf8("PriceList"));
        PriceList->resize(372, 465);
        PriceList->setMinimumSize(QSize(372, 465));
        PriceList->setMaximumSize(QSize(372, 465));
        pushButton_confirm = new QPushButton(PriceList);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(193, 435, 80, 20));
        pushButton_close = new QPushButton(PriceList);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(281, 435, 80, 20));
        groupBox = new QGroupBox(PriceList);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 170, 111));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_LYJJ = new QLabel(groupBox);
        label_LYJJ->setObjectName(QString::fromUtf8("label_LYJJ"));

        gridLayout_2->addWidget(label_LYJJ, 0, 0, 1, 1);

        doubleSpinBox_LYJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_LYJJ->setObjectName(QString::fromUtf8("doubleSpinBox_LYJJ"));
        doubleSpinBox_LYJJ->setMinimumSize(QSize(80, 20));
        doubleSpinBox_LYJJ->setMaximumSize(QSize(80, 20));
        doubleSpinBox_LYJJ->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_LYJJ, 0, 1, 1, 1);

        label_FHJJ = new QLabel(groupBox);
        label_FHJJ->setObjectName(QString::fromUtf8("label_FHJJ"));

        gridLayout_2->addWidget(label_FHJJ, 1, 0, 1, 1);

        doubleSpinBox_FHJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_FHJJ->setObjectName(QString::fromUtf8("doubleSpinBox_FHJJ"));
        doubleSpinBox_FHJJ->setMinimumSize(QSize(80, 20));
        doubleSpinBox_FHJJ->setMaximumSize(QSize(80, 20));
        doubleSpinBox_FHJJ->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_FHJJ, 1, 1, 1, 1);

        label_TSJJ = new QLabel(groupBox);
        label_TSJJ->setObjectName(QString::fromUtf8("label_TSJJ"));

        gridLayout_2->addWidget(label_TSJJ, 2, 0, 1, 1);

        doubleSpinBox_TSJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_TSJJ->setObjectName(QString::fromUtf8("doubleSpinBox_TSJJ"));
        doubleSpinBox_TSJJ->setMinimumSize(QSize(80, 20));
        doubleSpinBox_TSJJ->setMaximumSize(QSize(80, 20));
        doubleSpinBox_TSJJ->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_TSJJ, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(PriceList);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 125, 171, 120));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_XYJ = new QLabel(groupBox_2);
        label_XYJ->setObjectName(QString::fromUtf8("label_XYJ"));

        gridLayout->addWidget(label_XYJ, 0, 0, 1, 1);

        doubleSpinBox_XYJ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_XYJ->setObjectName(QString::fromUtf8("doubleSpinBox_XYJ"));
        doubleSpinBox_XYJ->setMaximum(1000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_XYJ, 0, 1, 1, 1);

        label_JYJ = new QLabel(groupBox_2);
        label_JYJ->setObjectName(QString::fromUtf8("label_JYJ"));

        gridLayout->addWidget(label_JYJ, 1, 0, 1, 1);

        doubleSpinBox_JYJ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_JYJ->setObjectName(QString::fromUtf8("doubleSpinBox_JYJ"));
        doubleSpinBox_JYJ->setMaximum(1000.000000000000000);

        gridLayout->addWidget(doubleSpinBox_JYJ, 1, 1, 1, 1);

        label_YHJ = new QLabel(groupBox_2);
        label_YHJ->setObjectName(QString::fromUtf8("label_YHJ"));

        gridLayout->addWidget(label_YHJ, 2, 0, 1, 1);

        doubleSpinBox_YHJ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_YHJ->setObjectName(QString::fromUtf8("doubleSpinBox_YHJ"));
        doubleSpinBox_YHJ->setMaximum(9999.000000000000000);

        gridLayout->addWidget(doubleSpinBox_YHJ, 2, 1, 1, 1);

        groupBox_3 = new QGroupBox(PriceList);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(9, 249, 354, 178));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_SGS = new QLabel(groupBox_3);
        label_SGS->setObjectName(QString::fromUtf8("label_SGS"));

        gridLayout_5->addWidget(label_SGS, 3, 0, 1, 1);

        doubleSpinBox_HYG = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_HYG->setObjectName(QString::fromUtf8("doubleSpinBox_HYG"));
        doubleSpinBox_HYG->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_HYG, 2, 1, 1, 1);

        label_HYG = new QLabel(groupBox_3);
        label_HYG->setObjectName(QString::fromUtf8("label_HYG"));

        gridLayout_5->addWidget(label_HYG, 2, 0, 1, 1);

        label_TQLJJ = new QLabel(groupBox_3);
        label_TQLJJ->setObjectName(QString::fromUtf8("label_TQLJJ"));

        gridLayout_5->addWidget(label_TQLJJ, 0, 0, 1, 1);

        doubleSpinBox_XFG = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XFG->setObjectName(QString::fromUtf8("doubleSpinBox_XFG"));
        doubleSpinBox_XFG->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_XFG, 1, 1, 1, 1);

        doubleSpinBox_XYK = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XYK->setObjectName(QString::fromUtf8("doubleSpinBox_XYK"));
        doubleSpinBox_XYK->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_XYK, 0, 3, 1, 1);

        doubleSpinBox_TZZSP = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_TZZSP->setObjectName(QString::fromUtf8("doubleSpinBox_TZZSP"));
        doubleSpinBox_TZZSP->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_TZZSP, 4, 3, 1, 1);

        label_XYK = new QLabel(groupBox_3);
        label_XYK->setObjectName(QString::fromUtf8("label_XYK"));

        gridLayout_5->addWidget(label_XYK, 0, 2, 1, 1);

        label_TZZSP = new QLabel(groupBox_3);
        label_TZZSP->setObjectName(QString::fromUtf8("label_TZZSP"));

        gridLayout_5->addWidget(label_TZZSP, 4, 2, 1, 1);

        label_QYZXW = new QLabel(groupBox_3);
        label_QYZXW->setObjectName(QString::fromUtf8("label_QYZXW"));

        gridLayout_5->addWidget(label_QYZXW, 4, 0, 1, 1);

        doubleSpinBox_HYMNDXJ = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_HYMNDXJ->setObjectName(QString::fromUtf8("doubleSpinBox_HYMNDXJ"));
        doubleSpinBox_HYMNDXJ->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_HYMNDXJ, 2, 3, 1, 1);

        doubleSpinBox_XFZTH = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XFZTH->setObjectName(QString::fromUtf8("doubleSpinBox_XFZTH"));
        doubleSpinBox_XFZTH->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_XFZTH, 1, 3, 1, 1);

        doubleSpinBox_TQLJJ = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_TQLJJ->setObjectName(QString::fromUtf8("doubleSpinBox_TQLJJ"));
        doubleSpinBox_TQLJJ->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_TQLJJ, 0, 1, 1, 1);

        label_XFZTH = new QLabel(groupBox_3);
        label_XFZTH->setObjectName(QString::fromUtf8("label_XFZTH"));

        gridLayout_5->addWidget(label_XFZTH, 1, 2, 1, 1);

        label_HYMNDXJ = new QLabel(groupBox_3);
        label_HYMNDXJ->setObjectName(QString::fromUtf8("label_HYMNDXJ"));

        gridLayout_5->addWidget(label_HYMNDXJ, 2, 2, 1, 1);

        label_XFG = new QLabel(groupBox_3);
        label_XFG->setObjectName(QString::fromUtf8("label_XFG"));

        gridLayout_5->addWidget(label_XFG, 1, 0, 1, 1);

        doubleSpinBox_SGS = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_SGS->setObjectName(QString::fromUtf8("doubleSpinBox_SGS"));
        doubleSpinBox_SGS->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_SGS, 3, 1, 1, 1);

        doubleSpinBox_QYZXW = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_QYZXW->setObjectName(QString::fromUtf8("doubleSpinBox_QYZXW"));
        doubleSpinBox_QYZXW->setMaximum(1000.000000000000000);

        gridLayout_5->addWidget(doubleSpinBox_QYZXW, 4, 1, 1, 1);

        groupBox_4 = new QGroupBox(PriceList);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(193, 125, 171, 120));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_CHXS = new QLabel(groupBox_4);
        label_CHXS->setObjectName(QString::fromUtf8("label_CHXS"));

        gridLayout_4->addWidget(label_CHXS, 0, 0, 1, 1);

        doubleSpinBox_CHXS = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_CHXS->setObjectName(QString::fromUtf8("doubleSpinBox_CHXS"));
        doubleSpinBox_CHXS->setMaximum(1000.000000000000000);

        gridLayout_4->addWidget(doubleSpinBox_CHXS, 0, 1, 1, 1);

        label_JYXS = new QLabel(groupBox_4);
        label_JYXS->setObjectName(QString::fromUtf8("label_JYXS"));

        gridLayout_4->addWidget(label_JYXS, 1, 0, 1, 1);

        doubleSpinBox_JLXS = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_JLXS->setObjectName(QString::fromUtf8("doubleSpinBox_JLXS"));
        doubleSpinBox_JLXS->setMaximum(1000.000000000000000);

        gridLayout_4->addWidget(doubleSpinBox_JLXS, 1, 1, 1, 1);

        label_YGXS = new QLabel(groupBox_4);
        label_YGXS->setObjectName(QString::fromUtf8("label_YGXS"));

        gridLayout_4->addWidget(label_YGXS, 2, 0, 1, 1);

        doubleSpinBox_YGXS = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_YGXS->setObjectName(QString::fromUtf8("doubleSpinBox_YGXS"));
        doubleSpinBox_YGXS->setMaximum(1000.000000000000000);

        gridLayout_4->addWidget(doubleSpinBox_YGXS, 2, 1, 1, 1);

        groupBox_5 = new QGroupBox(PriceList);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(193, 9, 170, 111));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_NTHS = new QLabel(groupBox_5);
        label_NTHS->setObjectName(QString::fromUtf8("label_NTHS"));

        gridLayout_3->addWidget(label_NTHS, 0, 0, 1, 1);

        doubleSpinBox_NTHS = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_NTHS->setObjectName(QString::fromUtf8("doubleSpinBox_NTHS"));
        doubleSpinBox_NTHS->setMinimumSize(QSize(80, 20));
        doubleSpinBox_NTHS->setMaximumSize(QSize(80, 20));
        doubleSpinBox_NTHS->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_NTHS, 0, 1, 1, 1);

        label_MHHS = new QLabel(groupBox_5);
        label_MHHS->setObjectName(QString::fromUtf8("label_MHHS"));

        gridLayout_3->addWidget(label_MHHS, 1, 0, 1, 1);

        doubleSpinBox_MHHS = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_MHHS->setObjectName(QString::fromUtf8("doubleSpinBox_MHHS"));
        doubleSpinBox_MHHS->setMinimumSize(QSize(80, 20));
        doubleSpinBox_MHHS->setMaximumSize(QSize(80, 20));
        doubleSpinBox_MHHS->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_MHHS, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 2);

        pushButton_clear = new QPushButton(PriceList);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(107, 435, 80, 20));

        retranslateUi(PriceList);
        QObject::connect(pushButton_close, SIGNAL(clicked()), PriceList, SLOT(close()));

        QMetaObject::connectSlotsByName(PriceList);
    } // setupUi

    void retranslateUi(QWidget *PriceList)
    {
        PriceList->setWindowTitle(QApplication::translate("PriceList", "Form", nullptr));
        pushButton_confirm->setText(QApplication::translate("PriceList", "\344\277\235\345\255\230", nullptr));
        pushButton_close->setText(QApplication::translate("PriceList", "\345\205\263\351\227\255", nullptr));
        groupBox->setTitle(QApplication::translate("PriceList", "\347\273\223\346\231\266", nullptr));
        label_LYJJ->setText(QApplication::translate("PriceList", "\351\233\267\344\272\221\347\273\223\346\231\266\357\274\232", nullptr));
        label_FHJJ->setText(QApplication::translate("PriceList", "\347\203\246\346\203\221\347\273\223\346\231\266\357\274\232", nullptr));
        label_TSJJ->setText(QApplication::translate("PriceList", "\345\244\251\345\257\277\347\273\223\346\231\266\357\274\232", nullptr));
        groupBox_2->setTitle(QApplication::translate("PriceList", "\351\225\234", nullptr));
        label_XYJ->setText(QApplication::translate("PriceList", "\351\233\252\345\275\261\351\225\234\357\274\232", nullptr));
        label_JYJ->setText(QApplication::translate("PriceList", "\351\207\221\347\211\231\351\225\234\357\274\232", nullptr));
        label_YHJ->setText(QApplication::translate("PriceList", "\346\233\234\347\201\253\351\225\234\357\274\232", nullptr));
        groupBox_3->setTitle(QApplication::translate("PriceList", "\345\205\266\344\273\226", nullptr));
        label_SGS->setText(QApplication::translate("PriceList", "\347\245\236\345\212\237\347\237\263\357\274\232", nullptr));
        label_HYG->setText(QApplication::translate("PriceList", "\351\273\221\346\234\210\351\222\242\357\274\232", nullptr));
        label_TQLJJ->setText(QApplication::translate("PriceList", "\345\244\251\344\271\276\347\201\265\347\273\223\346\231\266\357\274\232", nullptr));
        label_XYK->setText(QApplication::translate("PriceList", "\351\233\252\345\275\261\347\237\277\357\274\232", nullptr));
        label_TZZSP->setText(QApplication::translate("PriceList", "\346\214\221\346\210\230\347\217\240\347\242\216\347\211\207\357\274\232", nullptr));
        label_QYZXW->setText(QApplication::translate("PriceList", "\350\265\267\346\272\220\344\277\241\347\211\251\357\274\232", nullptr));
        label_XFZTH->setText(QApplication::translate("PriceList", "\351\233\252\345\263\260\344\271\213\351\223\201\345\215\216\357\274\232", nullptr));
        label_HYMNDXJ->setText(QApplication::translate("PriceList", "\351\273\221\346\234\210\351\255\224\345\245\263\347\232\204\345\210\221\345\205\267\357\274\232", nullptr));
        label_XFG->setText(QApplication::translate("PriceList", "\351\233\252\345\263\260\351\222\242\357\274\232", nullptr));
        groupBox_4->setTitle(QApplication::translate("PriceList", "\346\230\237\347\237\263", nullptr));
        label_CHXS->setText(QApplication::translate("PriceList", "\346\231\250\346\231\226\346\230\237\347\237\263\357\274\232", nullptr));
        label_JYXS->setText(QApplication::translate("PriceList", "\351\207\221\351\233\267\346\230\237\347\237\263\357\274\232", nullptr));
        label_YGXS->setText(QApplication::translate("PriceList", "\346\234\210\345\205\211\346\230\237\347\237\263\357\274\232", nullptr));
        groupBox_5->setTitle(QApplication::translate("PriceList", "\351\255\202\347\237\263", nullptr));
        label_NTHS->setText(QApplication::translate("PriceList", "\345\215\227\345\244\251\351\255\202\347\237\263\357\274\232", nullptr));
        label_MHHS->setText(QApplication::translate("PriceList", "\345\206\245\345\271\273\351\255\202\347\237\263\357\274\232", nullptr));
        pushButton_clear->setText(QApplication::translate("PriceList", "\346\270\205\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PriceList: public Ui_PriceList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRICELIST_H

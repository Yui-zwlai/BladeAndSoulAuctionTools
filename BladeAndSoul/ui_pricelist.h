/********************************************************************************
** Form generated from reading UI file 'pricelist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRICELIST_H
#define UI_PRICELIST_H

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
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_TMJ;
    QDoubleSpinBox *doubleSpinBox_TMJ;
    QLabel *label_XYJ;
    QDoubleSpinBox *doubleSpinBox_XYJ;
    QLabel *label_JYJ;
    QDoubleSpinBox *doubleSpinBox_JYJ;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *doubleSpinBox_XYK;
    QLabel *label_QYZXW;
    QDoubleSpinBox *doubleSpinBox_QYZXW;
    QLabel *label_XYK;
    QDoubleSpinBox *doubleSpinBox_HDDJ;
    QLabel *label_XHMNDBY;
    QLabel *label_XFZTH;
    QDoubleSpinBox *doubleSpinBox_XFZTH;
    QDoubleSpinBox *doubleSpinBox_XFG;
    QLabel *label_XFG;
    QLabel *label_HDDJ;
    QDoubleSpinBox *doubleSpinBox_SGS;
    QDoubleSpinBox *doubleSpinBox_XHMNDBY;
    QLabel *label_SGS;
    QDoubleSpinBox *doubleSpinBox_XHG;
    QDoubleSpinBox *doubleSpinBox_HYMNDXJ;
    QLabel *label_HYMNDXJ;
    QDoubleSpinBox *doubleSpinBox_HYG;
    QLabel *label_HYG;
    QDoubleSpinBox *doubleSpinBox_BTS;
    QLabel *label_BTS;
    QLabel *label_XHG;
    QLabel *label_TZZSP;
    QDoubleSpinBox *doubleSpinBox_TZZSP;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_LSXS;
    QDoubleSpinBox *doubleSpinBox_LSXS;
    QLabel *label_CHXS;
    QDoubleSpinBox *doubleSpinBox_CHXS;
    QLabel *label_JYXS;
    QDoubleSpinBox *doubleSpinBox_JLXS;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_MHHS;
    QDoubleSpinBox *doubleSpinBox_MHHS;
    QLabel *label_NTHS;
    QDoubleSpinBox *doubleSpinBox_NTHS;
    QPushButton *pushButton_clear;

    void setupUi(QWidget *PriceList)
    {
        if (PriceList->objectName().isEmpty())
            PriceList->setObjectName(QStringLiteral("PriceList"));
        PriceList->resize(372, 457);
        PriceList->setMinimumSize(QSize(372, 457));
        pushButton_confirm = new QPushButton(PriceList);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(190, 420, 75, 23));
        pushButton_close = new QPushButton(PriceList);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(270, 420, 75, 23));
        groupBox = new QGroupBox(PriceList);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 166, 78));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_LYJJ = new QLabel(groupBox);
        label_LYJJ->setObjectName(QStringLiteral("label_LYJJ"));

        gridLayout_2->addWidget(label_LYJJ, 0, 0, 1, 1);

        doubleSpinBox_LYJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_LYJJ->setObjectName(QStringLiteral("doubleSpinBox_LYJJ"));
        doubleSpinBox_LYJJ->setMinimumSize(QSize(80, 20));
        doubleSpinBox_LYJJ->setMaximumSize(QSize(80, 20));
        doubleSpinBox_LYJJ->setMaximum(1000);

        gridLayout_2->addWidget(doubleSpinBox_LYJJ, 0, 1, 1, 1);

        label_FHJJ = new QLabel(groupBox);
        label_FHJJ->setObjectName(QStringLiteral("label_FHJJ"));

        gridLayout_2->addWidget(label_FHJJ, 1, 0, 1, 1);

        doubleSpinBox_FHJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_FHJJ->setObjectName(QStringLiteral("doubleSpinBox_FHJJ"));
        doubleSpinBox_FHJJ->setMinimumSize(QSize(80, 20));
        doubleSpinBox_FHJJ->setMaximumSize(QSize(80, 20));
        doubleSpinBox_FHJJ->setMaximum(1000);

        gridLayout_2->addWidget(doubleSpinBox_FHJJ, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(PriceList);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(11, 100, 161, 104));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_TMJ = new QLabel(groupBox_2);
        label_TMJ->setObjectName(QStringLiteral("label_TMJ"));

        gridLayout->addWidget(label_TMJ, 0, 0, 1, 1);

        doubleSpinBox_TMJ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_TMJ->setObjectName(QStringLiteral("doubleSpinBox_TMJ"));
        doubleSpinBox_TMJ->setMaximum(1000);

        gridLayout->addWidget(doubleSpinBox_TMJ, 0, 1, 1, 1);

        label_XYJ = new QLabel(groupBox_2);
        label_XYJ->setObjectName(QStringLiteral("label_XYJ"));

        gridLayout->addWidget(label_XYJ, 1, 0, 1, 1);

        doubleSpinBox_XYJ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_XYJ->setObjectName(QStringLiteral("doubleSpinBox_XYJ"));
        doubleSpinBox_XYJ->setMaximum(1000);

        gridLayout->addWidget(doubleSpinBox_XYJ, 1, 1, 1, 1);

        label_JYJ = new QLabel(groupBox_2);
        label_JYJ->setObjectName(QStringLiteral("label_JYJ"));

        gridLayout->addWidget(label_JYJ, 2, 0, 1, 1);

        doubleSpinBox_JYJ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_JYJ->setObjectName(QStringLiteral("doubleSpinBox_JYJ"));
        doubleSpinBox_JYJ->setMaximum(1000);

        gridLayout->addWidget(doubleSpinBox_JYJ, 2, 1, 1, 1);

        groupBox_3 = new QGroupBox(PriceList);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 220, 341, 191));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        doubleSpinBox_XYK = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XYK->setObjectName(QStringLiteral("doubleSpinBox_XYK"));
        doubleSpinBox_XYK->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_XYK, 0, 6, 1, 1);

        label_QYZXW = new QLabel(groupBox_3);
        label_QYZXW->setObjectName(QStringLiteral("label_QYZXW"));

        gridLayout_5->addWidget(label_QYZXW, 5, 0, 1, 2);

        doubleSpinBox_QYZXW = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_QYZXW->setObjectName(QStringLiteral("doubleSpinBox_QYZXW"));
        doubleSpinBox_QYZXW->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_QYZXW, 5, 2, 1, 1);

        label_XYK = new QLabel(groupBox_3);
        label_XYK->setObjectName(QStringLiteral("label_XYK"));

        gridLayout_5->addWidget(label_XYK, 0, 3, 1, 3);

        doubleSpinBox_HDDJ = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_HDDJ->setObjectName(QStringLiteral("doubleSpinBox_HDDJ"));
        doubleSpinBox_HDDJ->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_HDDJ, 4, 6, 1, 1);

        label_XHMNDBY = new QLabel(groupBox_3);
        label_XHMNDBY->setObjectName(QStringLiteral("label_XHMNDBY"));

        gridLayout_5->addWidget(label_XHMNDBY, 1, 3, 1, 2);

        label_XFZTH = new QLabel(groupBox_3);
        label_XFZTH->setObjectName(QStringLiteral("label_XFZTH"));

        gridLayout_5->addWidget(label_XFZTH, 2, 3, 1, 3);

        doubleSpinBox_XFZTH = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XFZTH->setObjectName(QStringLiteral("doubleSpinBox_XFZTH"));
        doubleSpinBox_XFZTH->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_XFZTH, 2, 6, 1, 1);

        doubleSpinBox_XFG = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XFG->setObjectName(QStringLiteral("doubleSpinBox_XFG"));
        doubleSpinBox_XFG->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_XFG, 2, 1, 1, 2);

        label_XFG = new QLabel(groupBox_3);
        label_XFG->setObjectName(QStringLiteral("label_XFG"));

        gridLayout_5->addWidget(label_XFG, 2, 0, 1, 1);

        label_HDDJ = new QLabel(groupBox_3);
        label_HDDJ->setObjectName(QStringLiteral("label_HDDJ"));

        gridLayout_5->addWidget(label_HDDJ, 4, 3, 1, 2);

        doubleSpinBox_SGS = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_SGS->setObjectName(QStringLiteral("doubleSpinBox_SGS"));
        doubleSpinBox_SGS->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_SGS, 4, 1, 1, 2);

        doubleSpinBox_XHMNDBY = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XHMNDBY->setObjectName(QStringLiteral("doubleSpinBox_XHMNDBY"));
        doubleSpinBox_XHMNDBY->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_XHMNDBY, 1, 6, 1, 1);

        label_SGS = new QLabel(groupBox_3);
        label_SGS->setObjectName(QStringLiteral("label_SGS"));

        gridLayout_5->addWidget(label_SGS, 4, 0, 1, 1);

        doubleSpinBox_XHG = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_XHG->setObjectName(QStringLiteral("doubleSpinBox_XHG"));
        doubleSpinBox_XHG->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_XHG, 1, 1, 1, 2);

        doubleSpinBox_HYMNDXJ = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_HYMNDXJ->setObjectName(QStringLiteral("doubleSpinBox_HYMNDXJ"));
        doubleSpinBox_HYMNDXJ->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_HYMNDXJ, 3, 6, 1, 1);

        label_HYMNDXJ = new QLabel(groupBox_3);
        label_HYMNDXJ->setObjectName(QStringLiteral("label_HYMNDXJ"));

        gridLayout_5->addWidget(label_HYMNDXJ, 3, 3, 1, 2);

        doubleSpinBox_HYG = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_HYG->setObjectName(QStringLiteral("doubleSpinBox_HYG"));
        doubleSpinBox_HYG->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_HYG, 3, 1, 1, 2);

        label_HYG = new QLabel(groupBox_3);
        label_HYG->setObjectName(QStringLiteral("label_HYG"));

        gridLayout_5->addWidget(label_HYG, 3, 0, 1, 1);

        doubleSpinBox_BTS = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_BTS->setObjectName(QStringLiteral("doubleSpinBox_BTS"));
        doubleSpinBox_BTS->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_BTS, 0, 1, 1, 2);

        label_BTS = new QLabel(groupBox_3);
        label_BTS->setObjectName(QStringLiteral("label_BTS"));

        gridLayout_5->addWidget(label_BTS, 0, 0, 1, 1);

        label_XHG = new QLabel(groupBox_3);
        label_XHG->setObjectName(QStringLiteral("label_XHG"));

        gridLayout_5->addWidget(label_XHG, 1, 0, 1, 1);

        label_TZZSP = new QLabel(groupBox_3);
        label_TZZSP->setObjectName(QStringLiteral("label_TZZSP"));

        gridLayout_5->addWidget(label_TZZSP, 5, 3, 1, 1);

        doubleSpinBox_TZZSP = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_TZZSP->setObjectName(QStringLiteral("doubleSpinBox_TZZSP"));
        doubleSpinBox_TZZSP->setMaximum(1000);

        gridLayout_5->addWidget(doubleSpinBox_TZZSP, 5, 6, 1, 1);

        groupBox_4 = new QGroupBox(PriceList);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(190, 100, 166, 104));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_LSXS = new QLabel(groupBox_4);
        label_LSXS->setObjectName(QStringLiteral("label_LSXS"));

        gridLayout_4->addWidget(label_LSXS, 0, 0, 1, 1);

        doubleSpinBox_LSXS = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_LSXS->setObjectName(QStringLiteral("doubleSpinBox_LSXS"));
        doubleSpinBox_LSXS->setMinimumSize(QSize(80, 0));
        doubleSpinBox_LSXS->setMaximumSize(QSize(80, 16777215));
        doubleSpinBox_LSXS->setMaximum(1000);

        gridLayout_4->addWidget(doubleSpinBox_LSXS, 0, 1, 1, 1);

        label_CHXS = new QLabel(groupBox_4);
        label_CHXS->setObjectName(QStringLiteral("label_CHXS"));

        gridLayout_4->addWidget(label_CHXS, 1, 0, 1, 1);

        doubleSpinBox_CHXS = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_CHXS->setObjectName(QStringLiteral("doubleSpinBox_CHXS"));
        doubleSpinBox_CHXS->setMaximum(1000);

        gridLayout_4->addWidget(doubleSpinBox_CHXS, 1, 1, 1, 1);

        label_JYXS = new QLabel(groupBox_4);
        label_JYXS->setObjectName(QStringLiteral("label_JYXS"));

        gridLayout_4->addWidget(label_JYXS, 2, 0, 1, 1);

        doubleSpinBox_JLXS = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox_JLXS->setObjectName(QStringLiteral("doubleSpinBox_JLXS"));
        doubleSpinBox_JLXS->setMaximum(1000);

        gridLayout_4->addWidget(doubleSpinBox_JLXS, 2, 1, 1, 1);

        groupBox_5 = new QGroupBox(PriceList);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(190, 10, 166, 78));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_MHHS = new QLabel(groupBox_5);
        label_MHHS->setObjectName(QStringLiteral("label_MHHS"));

        gridLayout_3->addWidget(label_MHHS, 0, 0, 1, 1);

        doubleSpinBox_MHHS = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_MHHS->setObjectName(QStringLiteral("doubleSpinBox_MHHS"));
        doubleSpinBox_MHHS->setMinimumSize(QSize(80, 20));
        doubleSpinBox_MHHS->setMaximumSize(QSize(80, 20));
        doubleSpinBox_MHHS->setMaximum(1000);

        gridLayout_3->addWidget(doubleSpinBox_MHHS, 0, 1, 1, 1);

        label_NTHS = new QLabel(groupBox_5);
        label_NTHS->setObjectName(QStringLiteral("label_NTHS"));

        gridLayout_3->addWidget(label_NTHS, 1, 0, 1, 1);

        doubleSpinBox_NTHS = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_NTHS->setObjectName(QStringLiteral("doubleSpinBox_NTHS"));
        doubleSpinBox_NTHS->setMinimumSize(QSize(80, 20));
        doubleSpinBox_NTHS->setMaximumSize(QSize(80, 20));
        doubleSpinBox_NTHS->setMaximum(1000);

        gridLayout_3->addWidget(doubleSpinBox_NTHS, 1, 1, 1, 1);

        pushButton_clear = new QPushButton(PriceList);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(110, 420, 75, 23));

        retranslateUi(PriceList);
        QObject::connect(pushButton_close, SIGNAL(clicked()), PriceList, SLOT(close()));

        QMetaObject::connectSlotsByName(PriceList);
    } // setupUi

    void retranslateUi(QWidget *PriceList)
    {
        PriceList->setWindowTitle(QApplication::translate("PriceList", "Form", Q_NULLPTR));
        pushButton_confirm->setText(QApplication::translate("PriceList", "\344\277\235\345\255\230", Q_NULLPTR));
        pushButton_close->setText(QApplication::translate("PriceList", "\345\205\263\351\227\255", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PriceList", "\347\273\223\346\231\266", Q_NULLPTR));
        label_LYJJ->setText(QApplication::translate("PriceList", "\351\233\267\344\272\221\347\273\223\346\231\266\357\274\232", Q_NULLPTR));
        label_FHJJ->setText(QApplication::translate("PriceList", "\347\203\246\346\203\221\347\273\223\346\231\266\357\274\232", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("PriceList", "\351\225\234", Q_NULLPTR));
        label_TMJ->setText(QApplication::translate("PriceList", "\345\244\251\345\221\275\351\225\234\357\274\232", Q_NULLPTR));
        label_XYJ->setText(QApplication::translate("PriceList", "\351\233\252\345\275\261\351\225\234\357\274\232", Q_NULLPTR));
        label_JYJ->setText(QApplication::translate("PriceList", "\351\207\221\347\211\231\351\225\234\357\274\232", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("PriceList", "\345\205\266\344\273\226", Q_NULLPTR));
        label_QYZXW->setText(QApplication::translate("PriceList", "\350\265\267\346\272\220\344\277\241\347\211\251\357\274\232", Q_NULLPTR));
        label_XYK->setText(QApplication::translate("PriceList", "\351\233\252\345\275\261\347\237\277\357\274\232", Q_NULLPTR));
        label_XHMNDBY->setText(QApplication::translate("PriceList", "\351\202\252\350\212\261\351\255\224\345\245\263\347\232\204\350\213\236\345\217\266\357\274\232", Q_NULLPTR));
        label_XFZTH->setText(QApplication::translate("PriceList", "\351\233\252\345\263\260\344\271\213\351\223\201\345\215\216\357\274\232", Q_NULLPTR));
        label_XFG->setText(QApplication::translate("PriceList", "\351\233\252\345\263\260\351\222\242\357\274\232", Q_NULLPTR));
        label_HDDJ->setText(QApplication::translate("PriceList", "\346\264\273\345\212\250\351\201\223\345\205\267\357\274\232", Q_NULLPTR));
        label_SGS->setText(QApplication::translate("PriceList", "\347\245\236\345\212\237\347\237\263\357\274\232", Q_NULLPTR));
        label_HYMNDXJ->setText(QApplication::translate("PriceList", "\351\273\221\346\234\210\351\255\224\345\245\263\347\232\204\345\210\221\345\205\267\357\274\232", Q_NULLPTR));
        label_HYG->setText(QApplication::translate("PriceList", "\351\273\221\346\234\210\351\222\242\357\274\232", Q_NULLPTR));
        label_BTS->setText(QApplication::translate("PriceList", "\350\241\245\345\244\251\347\237\263\357\274\232", Q_NULLPTR));
        label_XHG->setText(QApplication::translate("PriceList", "\351\202\252\350\212\261\351\222\242\357\274\232", Q_NULLPTR));
        label_TZZSP->setText(QApplication::translate("PriceList", "\346\214\221\346\210\230\347\217\240\347\242\216\347\211\207\357\274\232", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("PriceList", "\346\230\237\347\237\263", Q_NULLPTR));
        label_LSXS->setText(QApplication::translate("PriceList", "\351\233\267\347\245\236\346\230\237\347\237\263\357\274\232", Q_NULLPTR));
        label_CHXS->setText(QApplication::translate("PriceList", "\346\231\250\346\231\226\346\230\237\347\237\263\357\274\232", Q_NULLPTR));
        label_JYXS->setText(QApplication::translate("PriceList", "\351\207\221\351\233\267\346\230\237\347\237\263\357\274\232", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("PriceList", "\351\255\202\347\237\263", Q_NULLPTR));
        label_MHHS->setText(QApplication::translate("PriceList", "\346\242\246\345\271\273\351\255\202\347\237\263\357\274\232", Q_NULLPTR));
        label_NTHS->setText(QApplication::translate("PriceList", "\345\215\227\345\244\251\351\255\202\347\237\263\357\274\232", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("PriceList", "\346\270\205\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PriceList: public Ui_PriceList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRICELIST_H

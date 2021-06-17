/********************************************************************************
** Form generated from reading UI file 'materialcalculation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALCALCULATION_H
#define UI_MATERIALCALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaterialCalculation
{
public:
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_13;
    QRadioButton *radioButton_three;
    QRadioButton *radioButton_two;
    QPushButton *pushButton_calculation;
    QPushButton *pushButton_close;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout;
    QLabel *label_LYJJ;
    QDoubleSpinBox *doubleSpinBox_LYJJ;
    QGridLayout *gridLayout_2;
    QLabel *label_FHJJ;
    QDoubleSpinBox *doubleSpinBox_FHJJ;
    QGridLayout *gridLayout_14;
    QLabel *label_FHJJ_3;
    QDoubleSpinBox *doubleSpinBox_TSJJ;
    QGridLayout *gridLayout_3;
    QLabel *label_LYJJ_2;
    QDoubleSpinBox *doubleSpinBox_NTHS;
    QGridLayout *gridLayout_4;
    QLabel *label_LYJJ_3;
    QDoubleSpinBox *doubleSpinBox_MHHS;
    QGridLayout *gridLayout_5;
    QLabel *label_LYJJ_4;
    QDoubleSpinBox *doubleSpinBox_XYJ;
    QGridLayout *gridLayout_6;
    QLabel *label_LYJJ_5;
    QDoubleSpinBox *doubleSpinBox_JYJ;
    QGridLayout *gridLayout_9;
    QLabel *label_LYJJ_8;
    QDoubleSpinBox *doubleSpinBox_YHJ;
    QGridLayout *gridLayout_7;
    QLabel *label_LYJJ_6;
    QDoubleSpinBox *doubleSpinBox_CHXS;
    QGridLayout *gridLayout_8;
    QLabel *label_LYJJ_7;
    QDoubleSpinBox *doubleSpinBox_JLXS;
    QGridLayout *gridLayout_10;
    QDoubleSpinBox *doubleSpinBox_YGXS;
    QLabel *label_LYJJ_9;
    QGridLayout *gridLayout_11;
    QLabel *label;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_12;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_Other;

    void setupUi(QWidget *MaterialCalculation)
    {
        if (MaterialCalculation->objectName().isEmpty())
            MaterialCalculation->setObjectName(QString::fromUtf8("MaterialCalculation"));
        MaterialCalculation->resize(240, 492);
        MaterialCalculation->setMinimumSize(QSize(201, 450));
        groupBox_2 = new QGroupBox(MaterialCalculation);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 404, 183, 50));
        groupBox_2->setMaximumSize(QSize(183, 50));
        gridLayout_13 = new QGridLayout(groupBox_2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        radioButton_three = new QRadioButton(groupBox_2);
        radioButton_three->setObjectName(QString::fromUtf8("radioButton_three"));
        radioButton_three->setToolTipDuration(3);

        gridLayout_13->addWidget(radioButton_three, 0, 1, 1, 1);

        radioButton_two = new QRadioButton(groupBox_2);
        radioButton_two->setObjectName(QString::fromUtf8("radioButton_two"));
        radioButton_two->setToolTipDuration(2);

        gridLayout_13->addWidget(radioButton_two, 0, 0, 1, 1);

        pushButton_calculation = new QPushButton(MaterialCalculation);
        pushButton_calculation->setObjectName(QString::fromUtf8("pushButton_calculation"));
        pushButton_calculation->setGeometry(QRect(9, 460, 80, 20));
        pushButton_close = new QPushButton(MaterialCalculation);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(104, 460, 80, 20));
        groupBox = new QGroupBox(MaterialCalculation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 191, 391));
        gridLayout_15 = new QGridLayout(groupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_LYJJ = new QLabel(groupBox);
        label_LYJJ->setObjectName(QString::fromUtf8("label_LYJJ"));

        gridLayout->addWidget(label_LYJJ, 0, 0, 1, 1);

        doubleSpinBox_LYJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_LYJJ->setObjectName(QString::fromUtf8("doubleSpinBox_LYJJ"));

        gridLayout->addWidget(doubleSpinBox_LYJJ, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_FHJJ = new QLabel(groupBox);
        label_FHJJ->setObjectName(QString::fromUtf8("label_FHJJ"));

        gridLayout_2->addWidget(label_FHJJ, 0, 0, 1, 1);

        doubleSpinBox_FHJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_FHJJ->setObjectName(QString::fromUtf8("doubleSpinBox_FHJJ"));

        gridLayout_2->addWidget(doubleSpinBox_FHJJ, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_FHJJ_3 = new QLabel(groupBox);
        label_FHJJ_3->setObjectName(QString::fromUtf8("label_FHJJ_3"));

        gridLayout_14->addWidget(label_FHJJ_3, 0, 0, 1, 1);

        doubleSpinBox_TSJJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_TSJJ->setObjectName(QString::fromUtf8("doubleSpinBox_TSJJ"));

        gridLayout_14->addWidget(doubleSpinBox_TSJJ, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_14, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_LYJJ_2 = new QLabel(groupBox);
        label_LYJJ_2->setObjectName(QString::fromUtf8("label_LYJJ_2"));

        gridLayout_3->addWidget(label_LYJJ_2, 0, 0, 1, 1);

        doubleSpinBox_NTHS = new QDoubleSpinBox(groupBox);
        doubleSpinBox_NTHS->setObjectName(QString::fromUtf8("doubleSpinBox_NTHS"));

        gridLayout_3->addWidget(doubleSpinBox_NTHS, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_3, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_LYJJ_3 = new QLabel(groupBox);
        label_LYJJ_3->setObjectName(QString::fromUtf8("label_LYJJ_3"));

        gridLayout_4->addWidget(label_LYJJ_3, 0, 0, 1, 1);

        doubleSpinBox_MHHS = new QDoubleSpinBox(groupBox);
        doubleSpinBox_MHHS->setObjectName(QString::fromUtf8("doubleSpinBox_MHHS"));

        gridLayout_4->addWidget(doubleSpinBox_MHHS, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_4, 4, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_LYJJ_4 = new QLabel(groupBox);
        label_LYJJ_4->setObjectName(QString::fromUtf8("label_LYJJ_4"));

        gridLayout_5->addWidget(label_LYJJ_4, 0, 0, 1, 1);

        doubleSpinBox_XYJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_XYJ->setObjectName(QString::fromUtf8("doubleSpinBox_XYJ"));

        gridLayout_5->addWidget(doubleSpinBox_XYJ, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_5, 5, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_LYJJ_5 = new QLabel(groupBox);
        label_LYJJ_5->setObjectName(QString::fromUtf8("label_LYJJ_5"));

        gridLayout_6->addWidget(label_LYJJ_5, 0, 0, 1, 1);

        doubleSpinBox_JYJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_JYJ->setObjectName(QString::fromUtf8("doubleSpinBox_JYJ"));

        gridLayout_6->addWidget(doubleSpinBox_JYJ, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_6, 6, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_LYJJ_8 = new QLabel(groupBox);
        label_LYJJ_8->setObjectName(QString::fromUtf8("label_LYJJ_8"));

        gridLayout_9->addWidget(label_LYJJ_8, 0, 0, 1, 1);

        doubleSpinBox_YHJ = new QDoubleSpinBox(groupBox);
        doubleSpinBox_YHJ->setObjectName(QString::fromUtf8("doubleSpinBox_YHJ"));

        gridLayout_9->addWidget(doubleSpinBox_YHJ, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_9, 7, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_LYJJ_6 = new QLabel(groupBox);
        label_LYJJ_6->setObjectName(QString::fromUtf8("label_LYJJ_6"));

        gridLayout_7->addWidget(label_LYJJ_6, 0, 0, 1, 1);

        doubleSpinBox_CHXS = new QDoubleSpinBox(groupBox);
        doubleSpinBox_CHXS->setObjectName(QString::fromUtf8("doubleSpinBox_CHXS"));

        gridLayout_7->addWidget(doubleSpinBox_CHXS, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_7, 8, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_LYJJ_7 = new QLabel(groupBox);
        label_LYJJ_7->setObjectName(QString::fromUtf8("label_LYJJ_7"));

        gridLayout_8->addWidget(label_LYJJ_7, 0, 0, 1, 1);

        doubleSpinBox_JLXS = new QDoubleSpinBox(groupBox);
        doubleSpinBox_JLXS->setObjectName(QString::fromUtf8("doubleSpinBox_JLXS"));

        gridLayout_8->addWidget(doubleSpinBox_JLXS, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_8, 9, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        doubleSpinBox_YGXS = new QDoubleSpinBox(groupBox);
        doubleSpinBox_YGXS->setObjectName(QString::fromUtf8("doubleSpinBox_YGXS"));

        gridLayout_10->addWidget(doubleSpinBox_YGXS, 0, 1, 1, 1);

        label_LYJJ_9 = new QLabel(groupBox);
        label_LYJJ_9->setObjectName(QString::fromUtf8("label_LYJJ_9"));

        gridLayout_10->addWidget(label_LYJJ_9, 0, 0, 1, 1);


        gridLayout_15->addLayout(gridLayout_10, 10, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_11->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_11->addWidget(lineEdit, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_11, 11, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_12->addWidget(label_2, 0, 0, 1, 1);

        doubleSpinBox_Other = new QDoubleSpinBox(groupBox);
        doubleSpinBox_Other->setObjectName(QString::fromUtf8("doubleSpinBox_Other"));
        doubleSpinBox_Other->setMaximum(1000.000000000000000);

        gridLayout_12->addWidget(doubleSpinBox_Other, 0, 1, 1, 1);


        gridLayout_15->addLayout(gridLayout_12, 12, 0, 1, 1);


        retranslateUi(MaterialCalculation);
        QObject::connect(pushButton_close, SIGNAL(clicked()), MaterialCalculation, SLOT(close()));

        QMetaObject::connectSlotsByName(MaterialCalculation);
    } // setupUi

    void retranslateUi(QWidget *MaterialCalculation)
    {
        MaterialCalculation->setWindowTitle(QApplication::translate("MaterialCalculation", "33\343\200\20124\346\235\220\346\226\231\350\256\241\347\256\227", nullptr));
        groupBox_2->setTitle(QApplication::translate("MaterialCalculation", "\344\272\272\346\225\260", nullptr));
        radioButton_three->setText(QApplication::translate("MaterialCalculation", "3\344\272\272", nullptr));
        radioButton_two->setText(QApplication::translate("MaterialCalculation", "2\344\272\272", nullptr));
        pushButton_calculation->setText(QApplication::translate("MaterialCalculation", "\350\256\241\347\256\227", nullptr));
        pushButton_close->setText(QApplication::translate("MaterialCalculation", "\345\205\263\351\227\255", nullptr));
        groupBox->setTitle(QApplication::translate("MaterialCalculation", "\346\235\220\346\226\231\346\225\260\351\207\217", nullptr));
        label_LYJJ->setText(QApplication::translate("MaterialCalculation", "\351\233\267\344\272\221\347\273\223\346\231\266\357\274\232", nullptr));
        label_FHJJ->setText(QApplication::translate("MaterialCalculation", "\347\203\246\346\203\221\347\273\223\346\231\266\357\274\232", nullptr));
        label_FHJJ_3->setText(QApplication::translate("MaterialCalculation", "\345\244\251\345\257\277\347\273\223\346\231\266\357\274\232", nullptr));
        label_LYJJ_2->setText(QApplication::translate("MaterialCalculation", "\345\215\227\345\244\251\351\255\202\347\237\263\357\274\232", nullptr));
        label_LYJJ_3->setText(QApplication::translate("MaterialCalculation", "\345\206\245\345\271\273\351\255\202\347\237\263\357\274\232", nullptr));
        label_LYJJ_4->setText(QApplication::translate("MaterialCalculation", "\351\233\252\345\275\261\351\225\234\357\274\232", nullptr));
        label_LYJJ_5->setText(QApplication::translate("MaterialCalculation", "\351\207\221\347\211\231\351\225\234\357\274\232", nullptr));
        label_LYJJ_8->setText(QApplication::translate("MaterialCalculation", "\346\233\234\347\201\253\351\225\234\357\274\232", nullptr));
        label_LYJJ_6->setText(QApplication::translate("MaterialCalculation", "\346\231\250\346\231\226\346\230\237\347\237\263\357\274\232", nullptr));
        label_LYJJ_7->setText(QApplication::translate("MaterialCalculation", "\351\207\221\351\233\267\346\230\237\347\237\263\357\274\232", nullptr));
        label_LYJJ_9->setText(QApplication::translate("MaterialCalculation", "\346\234\210\345\205\211\346\230\237\347\237\263\357\274\232", nullptr));
        label->setText(QApplication::translate("MaterialCalculation", "\345\205\266\344\273\226\345\244\207\346\263\250\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MaterialCalculation", "\345\205\266\344\273\226\346\200\273\344\273\267\346\240\274\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MaterialCalculation: public Ui_MaterialCalculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIALCALCULATION_H

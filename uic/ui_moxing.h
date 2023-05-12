/********************************************************************************
** Form generated from reading UI file 'moxing.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOXING_H
#define UI_MOXING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moxingClass
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *p1;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QSpacerItem *RR;
    QSpacerItem *TT;
    QSpacerItem *LL;
    QPushButton *B1;
    QSpacerItem *BB;
    QWidget *p2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_2;
    QSpacerItem *RR_2;
    QSpacerItem *TT_2;
    QSpacerItem *LL_2;
    QPushButton *B2;
    QSpacerItem *BB_2;

    void setupUi(QWidget *moxingClass)
    {
        if (moxingClass->objectName().isEmpty())
            moxingClass->setObjectName(QString::fromUtf8("moxingClass"));
        moxingClass->resize(1360, 849);
        moxingClass->setMinimumSize(QSize(1000, 700));
        verticalLayout = new QVBoxLayout(moxingClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(moxingClass);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        p1 = new QWidget();
        p1->setObjectName(QString::fromUtf8("p1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(p1->sizePolicy().hasHeightForWidth());
        p1->setSizePolicy(sizePolicy);
        p1->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(p1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(p1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    \n"
"	\n"
"	\n"
"	border-image: url(:/moxing/\350\203\214\346\231\257.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        RR = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(RR, 1, 2, 1, 1);

        TT = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(TT, 0, 1, 1, 1);

        LL = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(LL, 1, 0, 1, 1);

        B1 = new QPushButton(frame);
        B1->setObjectName(QString::fromUtf8("B1"));
        B1->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(B1->sizePolicy().hasHeightForWidth());
        B1->setSizePolicy(sizePolicy1);
        B1->setMinimumSize(QSize(300, 130));
        B1->setMaximumSize(QSize(434, 187));
        B1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"	image: url(:/moxing/\345\274\200\345\247\213\345\255\246\344\271\240.png);\n"
"	\n"
"	\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    /* \346\240\271\346\215\256\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\346\202\254\345\201\234\346\225\210\346\236\234\357\274\214\344\276\213\345\246\202\346\233\264\346\224\271\345\233\276\347\211\207 */\n"
"   \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    /* \346\240\271\346\215\256\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\346\214\211\344\270\213\346\225\210\346\236\234\357\274\214\344\276\213\345\246\202\346\233\264\346\224\271\345\233\276\347\211\207 */\n"
"   \n"
"}\n"
""));

        gridLayout->addWidget(B1, 1, 1, 1, 1);

        BB = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(BB, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 872);
        gridLayout->setRowStretch(2, 51);
        gridLayout->setColumnStretch(0, 1458);
        gridLayout->setColumnStretch(2, 58);

        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(frame);

        stackedWidget->addWidget(p1);
        p2 = new QWidget();
        p2->setObjectName(QString::fromUtf8("p2"));
        verticalLayout_3 = new QVBoxLayout(p2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(p2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_2);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        RR_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(RR_2, 1, 2, 1, 1);

        TT_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(TT_2, 0, 1, 1, 1);

        LL_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(LL_2, 1, 0, 1, 1);

        B2 = new QPushButton(frame_2);
        B2->setObjectName(QString::fromUtf8("B2"));
        B2->setEnabled(true);
        sizePolicy1.setHeightForWidth(B2->sizePolicy().hasHeightForWidth());
        B2->setSizePolicy(sizePolicy1);
        B2->setMinimumSize(QSize(300, 130));
        B2->setMaximumSize(QSize(434, 187));
        B2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"	\n"
"	image: url(:/moxing/\347\273\223\346\235\237.png);\n"
"	\n"
"	\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    /* \346\240\271\346\215\256\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\346\202\254\345\201\234\346\225\210\346\236\234\357\274\214\344\276\213\345\246\202\346\233\264\346\224\271\345\233\276\347\211\207 */\n"
"   \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    /* \346\240\271\346\215\256\351\234\200\350\246\201\350\207\252\345\256\232\344\271\211\346\214\211\344\270\213\346\225\210\346\236\234\357\274\214\344\276\213\345\246\202\346\233\264\346\224\271\345\233\276\347\211\207 */\n"
"   \n"
"}\n"
""));

        gridLayout_2->addWidget(B2, 1, 1, 1, 1);

        BB_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(BB_2, 2, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 2);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_5->addLayout(gridLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame_2);

        stackedWidget->addWidget(p2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(moxingClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(moxingClass);
    } // setupUi

    void retranslateUi(QWidget *moxingClass)
    {
        moxingClass->setWindowTitle(QCoreApplication::translate("moxingClass", "moxing", nullptr));
        B1->setText(QString());
        B2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class moxingClass: public Ui_moxingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOXING_H

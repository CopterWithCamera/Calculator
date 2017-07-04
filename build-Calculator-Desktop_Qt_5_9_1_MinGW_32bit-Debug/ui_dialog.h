/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *RadiusLabel;
    QLabel *areaLabel_2;
    QLabel *areaLabel_1;
    QLineEdit *lineEdit;
    QPushButton *countBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(611, 248);
        RadiusLabel = new QLabel(Dialog);
        RadiusLabel->setObjectName(QStringLiteral("RadiusLabel"));
        RadiusLabel->setGeometry(QRect(70, 70, 72, 15));
        areaLabel_2 = new QLabel(Dialog);
        areaLabel_2->setObjectName(QStringLiteral("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(400, 71, 111, 21));
        areaLabel_2->setFrameShape(QFrame::Panel);
        areaLabel_2->setFrameShadow(QFrame::Sunken);
        areaLabel_1 = new QLabel(Dialog);
        areaLabel_1->setObjectName(QStringLiteral("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(330, 70, 61, 16));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 70, 121, 21));
        countBtn = new QPushButton(Dialog);
        countBtn->setObjectName(QStringLiteral("countBtn"));
        countBtn->setGeometry(QRect(410, 150, 93, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        RadiusLabel->setText(QApplication::translate("Dialog", "Radius :", Q_NULLPTR));
        areaLabel_2->setText(QString());
        areaLabel_1->setText(QApplication::translate("Dialog", "Area :", Q_NULLPTR));
        countBtn->setText(QApplication::translate("Dialog", "Calculate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

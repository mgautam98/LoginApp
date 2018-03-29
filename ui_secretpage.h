/********************************************************************************
** Form generated from reading UI file 'secretpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECRETPAGE_H
#define UI_SECRETPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecretPage
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *SecretPage)
    {
        if (SecretPage->objectName().isEmpty())
            SecretPage->setObjectName(QStringLiteral("SecretPage"));
        SecretPage->resize(400, 300);
        label = new QLabel(SecretPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 351, 20));
        label_2 = new QLabel(SecretPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 231, 151));

        retranslateUi(SecretPage);

        QMetaObject::connectSlotsByName(SecretPage);
    } // setupUi

    void retranslateUi(QDialog *SecretPage)
    {
        SecretPage->setWindowTitle(QApplication::translate("SecretPage", "Dialog", nullptr));
        label->setText(QApplication::translate("SecretPage", "Hello Welcome to the Secrect page of this app", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecretPage: public Ui_SecretPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECRETPAGE_H

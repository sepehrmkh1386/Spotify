/********************************************************************************
** Form generated from reading UI file 'selectsongdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSONGDIALOG_H
#define UI_SELECTSONGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SelectSongDialog
{
public:
    QLabel *titleLabel;
    QListWidget *songsList;
    QPushButton *addButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *SelectSongDialog)
    {
        if (SelectSongDialog->objectName().isEmpty())
            SelectSongDialog->setObjectName("SelectSongDialog");
        SelectSongDialog->resize(700, 500);
        SelectSongDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"background-color:#121212;\n"
"}"));
        titleLabel = new QLabel(SelectSongDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(200, 20, 321, 41));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color :#1DB954;\n"
"font-size:32px;\n"
"font-weight:bold;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        songsList = new QListWidget(SelectSongDialog);
        songsList->setObjectName("songsList");
        songsList->setGeometry(QRect(100, 90, 491, 311));
        songsList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background:#181818;\n"
"color:white;\n"
"border:2px solid #333333;\n"
"border-radius:12px;\n"
"font-size:14px;\n"
"}\n"
"QListWIdget::item\n"
"{\n"
"padding:10px;\n"
"}\n"
"QListWIdget::item:selected\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"}"));
        addButton = new QPushButton(SelectSongDialog);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(160, 420, 141, 45));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"border-radius:10px;\n"
"font-size:13px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background:#24cf5f;\n"
"}"));
        cancelButton = new QPushButton(SelectSongDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(400, 420, 141, 51));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#333333;\n"
"color:white;\n"
"border-radius:10px;\n"
"font-size:13px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#444444;\n"
"}"));

        retranslateUi(SelectSongDialog);

        QMetaObject::connectSlotsByName(SelectSongDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectSongDialog)
    {
        SelectSongDialog->setWindowTitle(QCoreApplication::translate("SelectSongDialog", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("SelectSongDialog", "Add Song to Album", nullptr));
        addButton->setText(QCoreApplication::translate("SelectSongDialog", "Add Song", nullptr));
        cancelButton->setText(QCoreApplication::translate("SelectSongDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectSongDialog: public Ui_SelectSongDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSONGDIALOG_H

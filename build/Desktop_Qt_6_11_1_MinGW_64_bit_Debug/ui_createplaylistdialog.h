/********************************************************************************
** Form generated from reading UI file 'createplaylistdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPLAYLISTDIALOG_H
#define UI_CREATEPLAYLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreatePlaylistDialog
{
public:
    QLabel *titleLabel;
    QLabel *playlistLabel;
    QLineEdit *playlistNameEdit;
    QPushButton *createButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CreatePlaylistDialog)
    {
        if (CreatePlaylistDialog->objectName().isEmpty())
            CreatePlaylistDialog->setObjectName("CreatePlaylistDialog");
        CreatePlaylistDialog->resize(700, 387);
        CreatePlaylistDialog->setStyleSheet(QString::fromUtf8("background-color:rgb(32,32,32);"));
        titleLabel = new QLabel(CreatePlaylistDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(240, 30, 211, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("color:#1DB954\n"
""));
        playlistLabel = new QLabel(CreatePlaylistDialog);
        playlistLabel->setObjectName("playlistLabel");
        playlistLabel->setGeometry(QRect(90, 140, 111, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        playlistLabel->setFont(font1);
        playlistLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        playlistNameEdit = new QLineEdit(CreatePlaylistDialog);
        playlistNameEdit->setObjectName("playlistNameEdit");
        playlistNameEdit->setGeometry(QRect(220, 120, 261, 51));
        playlistNameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color:rgb(50,50,50);\n"
"color:white;\n"
"border:1px solid rgb(90,90,90);\n"
"border-radius:8px;\n"
"padding-left:10px;\n"
"}\n"
"\n"
"QLineEdit::focus\n"
"{\n"
"border:2px solid rgb(30,215,96);\n"
"}"));
        createButton = new QPushButton(CreatePlaylistDialog);
        createButton->setObjectName("createButton");
        createButton->setGeometry(QRect(230, 250, 93, 31));
        createButton->setFont(font1);
        createButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"border-radius:10px;\n"
"padding:8px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#22d163;\n"
"}"));
        cancelButton = new QPushButton(CreatePlaylistDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(380, 250, 93, 31));
        cancelButton->setFont(font1);
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#333333;\n"
"color:white;\n"
"border-radius:10px;\n"
"padding:8px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#444444;\n"
"}"));

        retranslateUi(CreatePlaylistDialog);

        QMetaObject::connectSlotsByName(CreatePlaylistDialog);
    } // setupUi

    void retranslateUi(QDialog *CreatePlaylistDialog)
    {
        CreatePlaylistDialog->setWindowTitle(QCoreApplication::translate("CreatePlaylistDialog", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("CreatePlaylistDialog", "Create Playlist", nullptr));
        playlistLabel->setText(QCoreApplication::translate("CreatePlaylistDialog", "Playlist Name", nullptr));
        createButton->setText(QCoreApplication::translate("CreatePlaylistDialog", "Create", nullptr));
        cancelButton->setText(QCoreApplication::translate("CreatePlaylistDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreatePlaylistDialog: public Ui_CreatePlaylistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPLAYLISTDIALOG_H

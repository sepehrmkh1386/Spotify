/********************************************************************************
** Form generated from reading UI file 'albumdetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMDETAILSDIALOG_H
#define UI_ALBUMDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AlbumDetailsDialog
{
public:
    QLabel *albumNameLabel;
    QListWidget *songsList;
    QPushButton *addSongButton;
    QPushButton *removeSongButton;
    QPushButton *closeButton;

    void setupUi(QDialog *AlbumDetailsDialog)
    {
        if (AlbumDetailsDialog->objectName().isEmpty())
            AlbumDetailsDialog->setObjectName("AlbumDetailsDialog");
        AlbumDetailsDialog->resize(800, 600);
        AlbumDetailsDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"background:#121212;\n"
"}"));
        albumNameLabel = new QLabel(AlbumDetailsDialog);
        albumNameLabel->setObjectName("albumNameLabel");
        albumNameLabel->setGeometry(QRect(270, 30, 211, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        albumNameLabel->setFont(font);
        albumNameLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:white;\n"
"background:transparent;\n"
"}"));
        albumNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        songsList = new QListWidget(AlbumDetailsDialog);
        songsList->setObjectName("songsList");
        songsList->setGeometry(QRect(40, 100, 700, 300));
        songsList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background-color:#181818;\n"
"color:white;\n"
"\n"
"border:2px solid #333333;\n"
"\n"
"border-radius:12px;\n"
"font-size:14px;\n"
"}\n"
"QListWidget::item\n"
"{\n"
"padding:10px;\n"
"}\n"
"QListWidget::item:selected\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"}\n"
""));
        songsList->setAlternatingRowColors(true);
        addSongButton = new QPushButton(AlbumDetailsDialog);
        addSongButton->setObjectName("addSongButton");
        addSongButton->setGeometry(QRect(240, 440, 111, 41));
        addSongButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        removeSongButton = new QPushButton(AlbumDetailsDialog);
        removeSongButton->setObjectName("removeSongButton");
        removeSongButton->setGeometry(QRect(420, 440, 111, 41));
        removeSongButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:#D32F2F;\n"
"color:white;\n"
"\n"
"border-radius:10px;\n"
"padding:8px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#F44336;\n"
"}"));
        closeButton = new QPushButton(AlbumDetailsDialog);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(340, 510, 93, 29));
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        retranslateUi(AlbumDetailsDialog);

        QMetaObject::connectSlotsByName(AlbumDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *AlbumDetailsDialog)
    {
        AlbumDetailsDialog->setWindowTitle(QCoreApplication::translate("AlbumDetailsDialog", "Dialog", nullptr));
        albumNameLabel->setText(QCoreApplication::translate("AlbumDetailsDialog", "Text", nullptr));
        addSongButton->setText(QCoreApplication::translate("AlbumDetailsDialog", "Add Song", nullptr));
        removeSongButton->setText(QCoreApplication::translate("AlbumDetailsDialog", "Remove Song", nullptr));
        closeButton->setText(QCoreApplication::translate("AlbumDetailsDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlbumDetailsDialog: public Ui_AlbumDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMDETAILSDIALOG_H

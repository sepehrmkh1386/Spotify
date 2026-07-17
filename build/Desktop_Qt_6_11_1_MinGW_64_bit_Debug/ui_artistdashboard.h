/********************************************************************************
** Form generated from reading UI file 'artistdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTISTDASHBOARD_H
#define UI_ARTISTDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ArtistDashboard
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QGroupBox *groupBox;
    QListWidget *AlbumList;
    QPushButton *addAlbumButton_2;
    QGroupBox *groupBox_2;
    QListWidget *SongsList;
    QPushButton *addSongButton;
    QPushButton *deleteSongButton;
    QPushButton *logoutButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ArtistDashboard)
    {
        if (ArtistDashboard->objectName().isEmpty())
            ArtistDashboard->setObjectName("ArtistDashboard");
        ArtistDashboard->resize(800, 600);
        ArtistDashboard->setStyleSheet(QString::fromUtf8("background-color : #181818"));
        centralwidget = new QWidget(ArtistDashboard);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(220, 10, 381, 51));
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("color:#1DB954;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 110, 321, 361));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"color:white;\n"
"font-size:16px;\n"
"font-weight:bold;\n"
"\n"
"border:2px solid #2A2A2A;\n"
"border-radius:15px;\n"
"\n"
"margin-top:15px;\n"
"}\n"
"QGroupBox::title\n"
"{\n"
"subcontrol-origin:margin;\n"
"left:12px;\n"
"padding:0 5px;\n"
"}"));
        AlbumList = new QListWidget(groupBox);
        AlbumList->setObjectName("AlbumList");
        AlbumList->setGeometry(QRect(30, 30, 256, 261));
        AlbumList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{background-color:#202020;\n"
"border:none;\n"
"border-radius:10px;\n"
"color:white;\n"
"padding:6px;\n"
"}"));
        addAlbumButton_2 = new QPushButton(groupBox);
        addAlbumButton_2->setObjectName("addAlbumButton_2");
        addAlbumButton_2->setGeometry(QRect(92, 300, 141, 31));
        addAlbumButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color :#1DB954;\n"
"color:white;\n"
"border:none;\n"
"border-radius:10px;\n"
"padding:8px;\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #1ED760;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #169C46;\n"
"}\n"
""));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(430, 110, 321, 361));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"color:white;\n"
"font-size:16px;\n"
"font-weight:bold;\n"
"\n"
"border:2px solid #2A2A2A;\n"
"border-radius:15px;\n"
"\n"
"margin-top:15px;\n"
"}\n"
"QGroupBox::title\n"
"{\n"
"subcontrol-origin:margin;\n"
"left:12px;\n"
"padding:0 5px;\n"
"}"));
        SongsList = new QListWidget(groupBox_2);
        SongsList->setObjectName("SongsList");
        SongsList->setGeometry(QRect(30, 30, 256, 261));
        SongsList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{background-color:#202020;\n"
"border:none;\n"
"border-radius:10px;\n"
"color:white;\n"
"padding:6px;\n"
"}"));
        addSongButton = new QPushButton(groupBox_2);
        addSongButton->setObjectName("addSongButton");
        addSongButton->setGeometry(QRect(100, 300, 141, 31));
        addSongButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color :#1DB954;\n"
"color:white;\n"
"border:none;\n"
"border-radius:10px;\n"
"padding:8px;\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #1ED760;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #169C46;\n"
"}\n"
""));
        deleteSongButton = new QPushButton(groupBox_2);
        deleteSongButton->setObjectName("deleteSongButton");
        deleteSongButton->setGeometry(QRect(120, 330, 93, 29));
        deleteSongButton->setStyleSheet(QString::fromUtf8("color :#E53935;"));
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(690, 0, 93, 41));
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color :#E53935;\n"
"color:white;\n"
"border:none;\n"
"border-radius:10px;\n"
"padding:8px;\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #EF5350;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #C62828;\n"
"}"));
        ArtistDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ArtistDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ArtistDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(ArtistDashboard);
        statusbar->setObjectName("statusbar");
        ArtistDashboard->setStatusBar(statusbar);

        retranslateUi(ArtistDashboard);

        QMetaObject::connectSlotsByName(ArtistDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *ArtistDashboard)
    {
        ArtistDashboard->setWindowTitle(QCoreApplication::translate("ArtistDashboard", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("ArtistDashboard", "Artist Dashboard", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ArtistDashboard", "Your Albums", nullptr));
        addAlbumButton_2->setText(QCoreApplication::translate("ArtistDashboard", "Create Album", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ArtistDashboard", "Your Songs", nullptr));
        addSongButton->setText(QCoreApplication::translate("ArtistDashboard", "Create Songs", nullptr));
        deleteSongButton->setText(QCoreApplication::translate("ArtistDashboard", "Delete Song", nullptr));
        logoutButton->setText(QCoreApplication::translate("ArtistDashboard", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArtistDashboard: public Ui_ArtistDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTISTDASHBOARD_H

/********************************************************************************
** Form generated from reading UI file 'listenerdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTENERDASHBOARD_H
#define UI_LISTENERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListenerDashboard
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QLabel *songLabel;
    QLabel *albumsLabel;
    QLabel *playlistsLabel;
    QListWidget *songsList;
    QListWidget *albumsList;
    QListWidget *playlistsList;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ListenerDashboard)
    {
        if (ListenerDashboard->objectName().isEmpty())
            ListenerDashboard->setObjectName("ListenerDashboard");
        ListenerDashboard->resize(800, 600);
        ListenerDashboard->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color:#121212;\n"
"}\n"
""));
        centralwidget = new QWidget(ListenerDashboard);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 10, 131, 51));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#1DB954"));
        searchEdit = new QLineEdit(centralwidget);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(142, 70, 491, 31));
        searchEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:#181818;\n"
"color:white;\n"
"border:2px solid #333333;\n"
"border-radius:10px;\n"
"padding-left:10px;\n"
"font-size:14px;\n"
"}\n"
""));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(20, 70, 93, 29));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#26d665;\n"
"}"));
        songLabel = new QLabel(centralwidget);
        songLabel->setObjectName("songLabel");
        songLabel->setGeometry(QRect(140, 130, 81, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        songLabel->setFont(font1);
        songLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        albumsLabel = new QLabel(centralwidget);
        albumsLabel->setObjectName("albumsLabel");
        albumsLabel->setGeometry(QRect(560, 130, 101, 41));
        albumsLabel->setFont(font1);
        albumsLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        playlistsLabel = new QLabel(centralwidget);
        playlistsLabel->setObjectName("playlistsLabel");
        playlistsLabel->setGeometry(QRect(340, 340, 111, 41));
        playlistsLabel->setFont(font1);
        playlistsLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        songsList = new QListWidget(centralwidget);
        songsList->setObjectName("songsList");
        songsList->setGeometry(QRect(60, 180, 256, 141));
        songsList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background:#181818;\n"
"color:white;\n"
"border:2px solid #333333;\n"
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
"}"));
        albumsList = new QListWidget(centralwidget);
        albumsList->setObjectName("albumsList");
        albumsList->setGeometry(QRect(480, 180, 256, 141));
        albumsList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background:#181818;\n"
"color:white;\n"
"border:2px solid #333333;\n"
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
"}"));
        playlistsList = new QListWidget(centralwidget);
        playlistsList->setObjectName("playlistsList");
        playlistsList->setGeometry(QRect(270, 390, 256, 141));
        playlistsList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background:#181818;\n"
"color:white;\n"
"border:2px solid #333333;\n"
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
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(690, 10, 93, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#D32F2F;\n"
"color:white;\n"
"border-radius:10px;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#F44336;\n"
"}"));
        ListenerDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ListenerDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ListenerDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(ListenerDashboard);
        statusbar->setObjectName("statusbar");
        ListenerDashboard->setStatusBar(statusbar);

        retranslateUi(ListenerDashboard);

        QMetaObject::connectSlotsByName(ListenerDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *ListenerDashboard)
    {
        ListenerDashboard->setWindowTitle(QCoreApplication::translate("ListenerDashboard", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ListenerDashboard", "Spotify", nullptr));
        searchEdit->setText(QCoreApplication::translate("ListenerDashboard", "Search songs or albums...", nullptr));
        searchButton->setText(QCoreApplication::translate("ListenerDashboard", "Search", nullptr));
        songLabel->setText(QCoreApplication::translate("ListenerDashboard", "Songs", nullptr));
        albumsLabel->setText(QCoreApplication::translate("ListenerDashboard", "Albums", nullptr));
        playlistsLabel->setText(QCoreApplication::translate("ListenerDashboard", "Playlists", nullptr));
        pushButton->setText(QCoreApplication::translate("ListenerDashboard", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListenerDashboard: public Ui_ListenerDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTENERDASHBOARD_H

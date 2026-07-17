/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *label_6;
    QGroupBox *loginBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *fullNameEdit;
    QLabel *label_2;
    QLineEdit *userNameEdit;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QLabel *label_4;
    QComboBox *roleComboBox;
    QPushButton *signUpButton;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(795, 592);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(300, 20, 161, 61));
        QFont font;
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color : #1DB954;\n"
"font-size : 32px;\n"
"font-weight : bold;\n"
"abckground : transparent;"));
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 100, 311, 51));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color : white;\n"
"background:transparent;"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        loginBox = new QGroupBox(centralwidget);
        loginBox->setObjectName("loginBox");
        loginBox->setGeometry(QRect(270, 150, 221, 391));
        loginBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"color:white;\n"
"border:2px solid #1DB954;\n"
"border-radius:10px;\n"
"margin-top:12px;\n"
"font-weight:bold;\n"
"}\n"
"QGroupBox::title\n"
"{subcontrol-origin:margin;\n"
"left:10px;\n"
"padding:0 5px;\n"
"}"));
        loginBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(loginBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 181, 340));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color : white;\n"
"background:transparent;\n"
""));

        verticalLayout->addWidget(label);

        fullNameEdit = new QLineEdit(layoutWidget);
        fullNameEdit->setObjectName("fullNameEdit");
        fullNameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    background-color: #202020;\n"
"    color: white;\n"
"    border: 2px solid #303030;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    selection-background-color: #1DB954;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 2px solid #1DB954;\n"
"}"));

        verticalLayout->addWidget(fullNameEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color : white;\n"
"background:transparent;"));

        verticalLayout->addWidget(label_2);

        userNameEdit = new QLineEdit(layoutWidget);
        userNameEdit->setObjectName("userNameEdit");
        userNameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    background-color: #202020;\n"
"    color: white;\n"
"    border: 2px solid #303030;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    selection-background-color: #1DB954;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 2px solid #1DB954;\n"
"}"));

        verticalLayout->addWidget(userNameEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color : white;\n"
"background:transparent;\n"
""));

        verticalLayout->addWidget(label_3);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    background-color: #202020;\n"
"    color: white;\n"
"    border: 2px solid #303030;\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"    selection-background-color: #1DB954;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 2px solid #1DB954;\n"
"}"));
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(passwordEdit);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color : white;\n"
"background:transparent;"));

        verticalLayout->addWidget(label_4);

        roleComboBox = new QComboBox(layoutWidget);
        roleComboBox->addItem(QString());
        roleComboBox->addItem(QString());
        roleComboBox->setObjectName("roleComboBox");
        roleComboBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"background-color : #2A2A2A;\n"
"color :white;\n"
"border-radius :8px;\n"
"padding:6px;\n"
"}"));

        verticalLayout->addWidget(roleComboBox);

        signUpButton = new QPushButton(layoutWidget);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setEnabled(true);
        signUpButton->setMinimumSize(QSize(120, 20));
        signUpButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color :#1DB954;\n"
"color : white;\n"
"border-radius: 10px;\n"
"font-weight:bold;\n"
"border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #1ED760\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #169C46;\n"
"}"));

        verticalLayout->addWidget(signUpButton);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName("loginButton");
        loginButton->setMinimumSize(QSize(120, 20));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color :#1DB954;\n"
"color : white;\n"
"border-radius: 10px;\n"
"font-weight:bold;\n"
"border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #1ED760\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color: #169C46;\n"
"}"));

        verticalLayout->addWidget(loginButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 795, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Spotify", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Offer: Sad ta account Sepotify \n"
"(PO,PO,PO)", nullptr));
        loginBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        roleComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Artist", nullptr));
        roleComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Listener", nullptr));

        signUpButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

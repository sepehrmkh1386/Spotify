/********************************************************************************
** Form generated from reading UI file 'addalbumdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDALBUMDIALOG_H
#define UI_ADDALBUMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddAlbumDialog
{
public:
    QLabel *newAlbumLabel;
    QPushButton *saveButton;
    QGroupBox *groupBox;
    QLabel *albumNameLabel;
    QLineEdit *albumNameEdit;
    QLabel *releaseYearLabel;
    QSpinBox *releaseYearSpinBox;
    QGroupBox *groupBox_2;
    QLabel *coverLabel;
    QPushButton *chooseCoverButton;

    void setupUi(QDialog *AddAlbumDialog)
    {
        if (AddAlbumDialog->objectName().isEmpty())
            AddAlbumDialog->setObjectName("AddAlbumDialog");
        AddAlbumDialog->resize(722, 582);
        AddAlbumDialog->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background:#121212;\n"
"color:white;\n"
"}\n"
""));
        newAlbumLabel = new QLabel(AddAlbumDialog);
        newAlbumLabel->setObjectName("newAlbumLabel");
        newAlbumLabel->setGeometry(QRect(230, 20, 271, 51));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        newAlbumLabel->setFont(font);
        newAlbumLabel->setStyleSheet(QString::fromUtf8("color:#1DB954\n"
"\n"
""));
        saveButton = new QPushButton(AddAlbumDialog);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(312, 490, 101, 48));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"border:none;\n"
"border-radius:15px;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#1ED760;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background:#169C46;\n"
"}"));
        groupBox = new QGroupBox(AddAlbumDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 100, 231, 371));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"color:white;\n"
"font-weight:bold;\n"
"border:2px solid #303030;\n"
"border-radius:12px;\n"
"margin-top:12px;\n"
"}\n"
"\n"
"QGroupBox::title\n"
"{\n"
"subcontrol-origin:margin;\n"
"left:10px;\n"
"padding:0 5px;\n"
"}\n"
""));
        albumNameLabel = new QLabel(groupBox);
        albumNameLabel->setObjectName("albumNameLabel");
        albumNameLabel->setGeometry(QRect(30, 60, 171, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        albumNameLabel->setFont(font1);
        albumNameEdit = new QLineEdit(groupBox);
        albumNameEdit->setObjectName("albumNameEdit");
        albumNameEdit->setGeometry(QRect(50, 130, 121, 40));
        albumNameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:#202020;\n"
"color:white;\n"
"border:2px solid #303030;\n"
"border-radius:10px;\n"
"padding-left:10px;\n"
"font-size:14px;\n"
"}\n"
"QLineEDit:focus\n"
"{\n"
"border:2px solid #1DB954;\n"
"}"));
        releaseYearLabel = new QLabel(groupBox);
        releaseYearLabel->setObjectName("releaseYearLabel");
        releaseYearLabel->setGeometry(QRect(50, 200, 131, 31));
        releaseYearLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:13pt;\n"
"font-weight:bold;\n"
"\n"
""));
        releaseYearSpinBox = new QSpinBox(groupBox);
        releaseYearSpinBox->setObjectName("releaseYearSpinBox");
        releaseYearSpinBox->setGeometry(QRect(70, 270, 81, 40));
        releaseYearSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox\n"
"{\n"
"background:#202020;\n"
"color:white;\n"
"border:2px solid #303030;\n"
"border-radius:10px;\n"
"padding-left: 10px;\n"
"}\n"
"QSpinBox:focus\n"
"{\n"
"border:2px solid #1DB954;\n"
"}"));
        releaseYearSpinBox->setMinimum(1900);
        releaseYearSpinBox->setMaximum(2100);
        groupBox_2 = new QGroupBox(AddAlbumDialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(410, 100, 231, 371));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"color:white;\n"
"font-weight:bold;\n"
"border:2px solid #303030;\n"
"border-radius:12px;\n"
"margin-top:12px;\n"
"}\n"
"\n"
"QGroupBox::title\n"
"{\n"
"subcontrol-origin:margin;\n"
"left:10px;\n"
"padding:0 5px;\n"
"}\n"
""));
        coverLabel = new QLabel(groupBox_2);
        coverLabel->setObjectName("coverLabel");
        coverLabel->setGeometry(QRect(29, 40, 181, 191));
        coverLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border:2px dashed #555555;\n"
"border-radius:12px;\n"
"color:#888888;\n"
"}"));
        coverLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        chooseCoverButton = new QPushButton(groupBox_2);
        chooseCoverButton->setObjectName("chooseCoverButton");
        chooseCoverButton->setGeometry(QRect(50, 270, 121, 41));
        chooseCoverButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#1DB954;\n"
"collor:white;\n"
"border:none;\n"
"border-radius:12px;\n"
"padding:10px;\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{background:#1ED760;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background:#169C46;\n"
"}\n"
""));

        retranslateUi(AddAlbumDialog);

        QMetaObject::connectSlotsByName(AddAlbumDialog);
    } // setupUi

    void retranslateUi(QDialog *AddAlbumDialog)
    {
        AddAlbumDialog->setWindowTitle(QCoreApplication::translate("AddAlbumDialog", "Dialog", nullptr));
        newAlbumLabel->setText(QCoreApplication::translate("AddAlbumDialog", "Create Album", nullptr));
        saveButton->setText(QCoreApplication::translate("AddAlbumDialog", "Save Album", nullptr));
        groupBox->setTitle(QString());
        albumNameLabel->setText(QCoreApplication::translate("AddAlbumDialog", "Album Name", nullptr));
        releaseYearLabel->setText(QCoreApplication::translate("AddAlbumDialog", "Release Year", nullptr));
        groupBox_2->setTitle(QString());
        coverLabel->setText(QCoreApplication::translate("AddAlbumDialog", "Album Cover", nullptr));
        chooseCoverButton->setText(QCoreApplication::translate("AddAlbumDialog", "Choose Cover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAlbumDialog: public Ui_AddAlbumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDALBUMDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'addsongdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSONGDIALOG_H
#define UI_ADDSONGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddSongDialog
{
public:
    QPushButton *saveButton;
    QLabel *title;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *chooseCoverButton;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *chooseSongButton;
    QComboBox *albumComboBox;
    QLabel *label_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *releaseYearSpinBox;
    QComboBox *GenreComboBox;
    QLabel *Genre;
    QLabel *label;
    QLabel *songName;
    QLineEdit *SongNameEdit;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddSongDialog)
    {
        if (AddSongDialog->objectName().isEmpty())
            AddSongDialog->setObjectName("AddSongDialog");
        AddSongDialog->resize(722, 582);
        AddSongDialog->setStyleSheet(QString::fromUtf8("background-color:#181818;"));
        saveButton = new QPushButton(AddSongDialog);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(230, 470, 93, 29));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"font-weight:bold;\n"
"border:none;\n"
"border-radius:10px;\n"
"padding:8px;\n"
"}\n"
"QPushButton\n"
"{\n"
"background:#1ED760;\n"
"}"));
        title = new QLabel(AddSongDialog);
        title->setObjectName("title");
        title->setGeometry(QRect(230, 10, 281, 53));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color:#1DB954\n"
""));
        groupBox_2 = new QGroupBox(AddSongDialog);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(410, 70, 231, 371));
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
"}"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        chooseCoverButton = new QPushButton(groupBox_2);
        chooseCoverButton->setObjectName("chooseCoverButton");
        chooseCoverButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#2A2A2A;\n"
"color:white;\n"
"border-radius:8px;\n"
"padding:8px;\n"
"}\n"
"QPushBox:hover\n"
"{\n"
"background:#3A3A3A;\n"
"}\n"
""));

        gridLayout_2->addWidget(chooseCoverButton, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:13pt;\n"
"font-weight:bold;\n"
""));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:13pt;\n"
"font-weight:bold;"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        chooseSongButton = new QPushButton(groupBox_2);
        chooseSongButton->setObjectName("chooseSongButton");
        chooseSongButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#2A2A2A;\n"
"color:white;\n"
"border-radius:8px;\n"
"padding:8px;\n"
"}\n"
"QPushBox:hover\n"
"{\n"
"background:#3A3A3A;\n"
"}"));

        gridLayout_2->addWidget(chooseSongButton, 1, 0, 1, 1);

        albumComboBox = new QComboBox(groupBox_2);
        albumComboBox->setObjectName("albumComboBox");
        albumComboBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"background:#202020;\n"
"color:white;\n"
"border:2px solid #303030;\n"
"\n"
"border-radius:8px;\n"
"padding:6px;\n"
"}\n"
"QComboBox::hover\n"
"{\n"
"border:2px solid #1DB954;\n"
"}"));

        gridLayout_2->addWidget(albumComboBox, 5, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:13pt;\n"
"font-weight:bold;"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        groupBox = new QGroupBox(AddSongDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 70, 231, 371));
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
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        releaseYearSpinBox = new QSpinBox(groupBox);
        releaseYearSpinBox->setObjectName("releaseYearSpinBox");
        releaseYearSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox\n"
"{\n"
"background:#202020;\n"
"color:white;\n"
"border:2px solid #303030;\n"
"border-radius:8px;\n"
"padding:6px;\n"
"}\n"
"\n"
"QSpinBox:hover\n"
"{\n"
"border:2px solid #1DB954;\n"
"}"));
        releaseYearSpinBox->setMinimum(1900);
        releaseYearSpinBox->setMaximum(2100);

        gridLayout->addWidget(releaseYearSpinBox, 7, 0, 1, 1);

        GenreComboBox = new QComboBox(groupBox);
        GenreComboBox->addItem(QString());
        GenreComboBox->addItem(QString());
        GenreComboBox->addItem(QString());
        GenreComboBox->addItem(QString());
        GenreComboBox->addItem(QString());
        GenreComboBox->addItem(QString());
        GenreComboBox->addItem(QString());
        GenreComboBox->setObjectName("GenreComboBox");
        GenreComboBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"background:#202020;\n"
"color:white;\n"
"border:2px solid #303030;\n"
"\n"
"border-radius:8px;\n"
"padding:6px;\n"
"}\n"
"QComboBox::hover\n"
"{\n"
"border:2px solid #1DB954;\n"
"}"));

        gridLayout->addWidget(GenreComboBox, 5, 0, 1, 1);

        Genre = new QLabel(groupBox);
        Genre->setObjectName("Genre");
        Genre->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:13pt;\n"
"font-weight:bold;"));

        gridLayout->addWidget(Genre, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:13pt;\n"
"font-weight:bold;\n"
""));

        gridLayout->addWidget(label, 6, 0, 1, 1);

        songName = new QLabel(groupBox);
        songName->setObjectName("songName");
        songName->setStyleSheet(QString::fromUtf8("color:white;\n"
"font-size:13pt;\n"
"font-weight:bold;"));

        gridLayout->addWidget(songName, 1, 0, 1, 1);

        SongNameEdit = new QLineEdit(groupBox);
        SongNameEdit->setObjectName("SongNameEdit");
        SongNameEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background:#202020;\n"
"color:white;\n"
"border:2px solid #303030;\n"
"border-radius:8px;\n"
"padding:6px;\n"
"}\n"
"QLineEdit::focus\n"
"{\n"
"border:2px solid #1DB954;\n"
"}"));

        gridLayout->addWidget(SongNameEdit, 2, 0, 1, 1);

        cancelButton = new QPushButton(AddSongDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(380, 470, 93, 29));
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#E53935;\n"
"color:white;\n"
"font-weight:bold;\n"
"border:none;\n"
"border-radius:10px;\n"
"padding:8px;\n"
"}\n"
"QPushButton\n"
"{\n"
"background:#EF5350;\n"
"}"));

        retranslateUi(AddSongDialog);

        QMetaObject::connectSlotsByName(AddSongDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSongDialog)
    {
        AddSongDialog->setWindowTitle(QCoreApplication::translate("AddSongDialog", "Dialog", nullptr));
        saveButton->setText(QCoreApplication::translate("AddSongDialog", "Save", nullptr));
        title->setText(QCoreApplication::translate("AddSongDialog", "Add New Song", nullptr));
        groupBox_2->setTitle(QString());
        chooseCoverButton->setText(QCoreApplication::translate("AddSongDialog", "Choose cover", nullptr));
        label_4->setText(QCoreApplication::translate("AddSongDialog", "Album", nullptr));
        label_2->setText(QCoreApplication::translate("AddSongDialog", "Song", nullptr));
        chooseSongButton->setText(QCoreApplication::translate("AddSongDialog", "Choose Song", nullptr));
        label_3->setText(QCoreApplication::translate("AddSongDialog", "Cover", nullptr));
        groupBox->setTitle(QString());
        GenreComboBox->setItemText(0, QCoreApplication::translate("AddSongDialog", "Pop", nullptr));
        GenreComboBox->setItemText(1, QCoreApplication::translate("AddSongDialog", "Rap", nullptr));
        GenreComboBox->setItemText(2, QCoreApplication::translate("AddSongDialog", "Hip Hop", nullptr));
        GenreComboBox->setItemText(3, QCoreApplication::translate("AddSongDialog", "Rock", nullptr));
        GenreComboBox->setItemText(4, QCoreApplication::translate("AddSongDialog", "Jazz", nullptr));
        GenreComboBox->setItemText(5, QCoreApplication::translate("AddSongDialog", "Classical", nullptr));
        GenreComboBox->setItemText(6, QCoreApplication::translate("AddSongDialog", "Other", nullptr));

        Genre->setText(QCoreApplication::translate("AddSongDialog", "Genre", nullptr));
        label->setText(QCoreApplication::translate("AddSongDialog", "Release Year", nullptr));
        songName->setText(QCoreApplication::translate("AddSongDialog", "Song Name", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddSongDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddSongDialog: public Ui_AddSongDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSONGDIALOG_H

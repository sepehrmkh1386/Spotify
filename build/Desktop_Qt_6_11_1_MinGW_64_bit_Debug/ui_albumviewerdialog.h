/********************************************************************************
** Form generated from reading UI file 'albumviewerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMVIEWERDIALOG_H
#define UI_ALBUMVIEWERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AlbumViewerDialog
{
public:
    QLabel *titleLabel;
    QLabel *coverLabel;
    QLabel *albumNameLabel;
    QLabel *artistNameLabel;
    QLabel *releaseYearLabel;
    QLabel *songsTitleLabel;
    QListWidget *songsList;
    QPushButton *closeButton;

    void setupUi(QDialog *AlbumViewerDialog)
    {
        if (AlbumViewerDialog->objectName().isEmpty())
            AlbumViewerDialog->setObjectName("AlbumViewerDialog");
        AlbumViewerDialog->resize(800, 600);
        AlbumViewerDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"background:#121212;\n"
"}"));
        titleLabel = new QLabel(AlbumViewerDialog);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(300, 20, 116, 49));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("color:#1DB954;"));
        coverLabel = new QLabel(AlbumViewerDialog);
        coverLabel->setObjectName("coverLabel");
        coverLabel->setGeometry(QRect(20, 70, 200, 200));
        coverLabel->setStyleSheet(QString::fromUtf8("background:#181818;\n"
"border:2px solid #333333;\n"
"color:white;"));
        coverLabel->setFrameShape(QFrame::Shape::Box);
        coverLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        albumNameLabel = new QLabel(AlbumViewerDialog);
        albumNameLabel->setObjectName("albumNameLabel");
        albumNameLabel->setGeometry(QRect(250, 90, 420, 35));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        albumNameLabel->setFont(font1);
        albumNameLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        artistNameLabel = new QLabel(AlbumViewerDialog);
        artistNameLabel->setObjectName("artistNameLabel");
        artistNameLabel->setGeometry(QRect(250, 160, 420, 30));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        artistNameLabel->setFont(font2);
        artistNameLabel->setStyleSheet(QString::fromUtf8("color:#B3B3B3;\n"
""));
        releaseYearLabel = new QLabel(AlbumViewerDialog);
        releaseYearLabel->setObjectName("releaseYearLabel");
        releaseYearLabel->setGeometry(QRect(250, 230, 420, 30));
        releaseYearLabel->setFont(font2);
        releaseYearLabel->setStyleSheet(QString::fromUtf8("color:#B3B3B3;"));
        songsTitleLabel = new QLabel(AlbumViewerDialog);
        songsTitleLabel->setObjectName("songsTitleLabel");
        songsTitleLabel->setGeometry(QRect(70, 370, 111, 91));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        songsTitleLabel->setFont(font3);
        songsTitleLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        songsList = new QListWidget(AlbumViewerDialog);
        songsList->setObjectName("songsList");
        songsList->setGeometry(QRect(270, 280, 451, 271));
        songsList->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"background:#181818;\n"
"color:white;\n"
"border:2px solid #333333;\n"
"border-radius:10px;\n"
"font-size:14px;\n"
"}\n"
"\n"
"QListWidget::item\n"
"{\n"
"padding:8px;\n"
"}\n"
"QListWidget::item:selected\n"
"{\n"
"background:#1DB954;\n"
"color:white;\n"
"}"));
        closeButton = new QPushButton(AlbumViewerDialog);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(360, 560, 93, 29));
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:#444444;\n"
"color:white;\n"
"\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background:#666666;\n"
"}"));

        retranslateUi(AlbumViewerDialog);

        QMetaObject::connectSlotsByName(AlbumViewerDialog);
    } // setupUi

    void retranslateUi(QDialog *AlbumViewerDialog)
    {
        AlbumViewerDialog->setWindowTitle(QCoreApplication::translate("AlbumViewerDialog", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("AlbumViewerDialog", "Album", nullptr));
        coverLabel->setText(QCoreApplication::translate("AlbumViewerDialog", "Cover", nullptr));
        albumNameLabel->setText(QCoreApplication::translate("AlbumViewerDialog", "Album Name", nullptr));
        artistNameLabel->setText(QCoreApplication::translate("AlbumViewerDialog", "Artist", nullptr));
        releaseYearLabel->setText(QCoreApplication::translate("AlbumViewerDialog", "Release Year", nullptr));
        songsTitleLabel->setText(QCoreApplication::translate("AlbumViewerDialog", "Songs", nullptr));
        closeButton->setText(QCoreApplication::translate("AlbumViewerDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlbumViewerDialog: public Ui_AlbumViewerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMVIEWERDIALOG_H

#include "mainwindow.h"

#include <QApplication>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(R"(
QWidget
{
    background-color: #121212;
    color: white;
}

QMessageBox
{
    background-color: #2B2B2B;
}

QMessageBox QLabel
{
    color: white;
}

QMessageBox QPushButton
{
    background-color: #1DB954;
    color: white;
    border-radius: 6px;
    padding: 6px 12px;
}

QComboBox
{
    background-color: #202020;
    color: white;
}

QComboBox QAbstractItemView
{
    background-color: #202020;
    color: white;
    selection-background-color: #1DB954;
    selection-color: white;
}
)");

    qDebug()<<"Current Path:"<<QDir::currentPath();

    MainWindow w;
    w.show();
    return QApplication::exec();
}

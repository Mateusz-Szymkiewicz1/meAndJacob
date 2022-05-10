#include "mainwindow.h"

#include <QApplication>
#include "QFile"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile stylesheet(":/qss/stylesheet.qss");
    stylesheet.open(QIODevice::ReadOnly | QIODevice::Text);
    a.setStyleSheet(stylesheet.readAll());
    w.show();
    return a.exec();
}

#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //MainWindow w;
    //w.show();
    QLabel label("Hello apple!!!");
    label.show();

    return app.exec();
}

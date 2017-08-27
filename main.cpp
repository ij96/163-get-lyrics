#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QApplication::setFont(QFont("Microsoft Yahei", 10));

    MainWindow w;
    w.show();

    return app.exec();
}

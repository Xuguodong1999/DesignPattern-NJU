#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[]) {
//    qApp->setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    (new MainWidget)->show();
    return a.exec();
}

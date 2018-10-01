#include "ebasewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EBaseWidget w;
    w.show();

    return a.exec();
}

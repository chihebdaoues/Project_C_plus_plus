#include "elevewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EleveWidget w;
    w.show();

    return a.exec();
}

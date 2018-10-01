#ifndef ELEVEWIDGET_H
#define ELEVEWIDGET_H

#include <QWidget>
#include "EBaseWidget/ebasewidget.h"
#include <QVBoxLayout>
namespace Ui {
class EleveWidget;
}

class EleveWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EleveWidget(QWidget *parent = 0);
    ~EleveWidget();

private:
    EBaseWidget *baseWidget;
    QVBoxLayout *layout;
    Ui::EleveWidget *ui;
};

#endif // ELEVEWIDGET_H

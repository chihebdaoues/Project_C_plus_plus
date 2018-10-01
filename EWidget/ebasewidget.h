#ifndef EBASEWIDGET_H
#define EBASEWIDGET_H

#include <QWidget>

namespace Ui {
class EBaseWidget;
}

class EBaseWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EBaseWidget(QWidget *parent = 0);
    ~EBaseWidget();

private:
    Ui::EBaseWidget *ui;
    void setColumnRange();
};

#endif // EBASEWIDGET_H

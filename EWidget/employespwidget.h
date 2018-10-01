#ifndef EMPLOYESPWIDGET_H
#define EMPLOYESPWIDGET_H

#include <QWidget>

namespace Ui {
class EmployeSpWidget;
}

class EmployeSpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeSpWidget(QWidget *parent = 0);
    ~EmployeSpWidget();

private:
    Ui::EmployeSpWidget *ui;
    void setColumnRange();
};

#endif // EMPLOYESPWIDGET_H

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
    void clear();
    void setsbDay(int val);
    void setsbMonth(int val);
    void setsbYear(int val);
    void setcbRetraite(bool x);
    void setleSpecial(QString str);
    void setdsbSalaire(double val);

    int getsbDay();
    int getsbMonth();
    int getsbYear();
    bool getcbRetraite();
    QString getleSpecial();
    double getdsbSalaire();
private:
    Ui::EmployeSpWidget *ui;
    void setColumnRange();
};

#endif // EMPLOYESPWIDGET_H

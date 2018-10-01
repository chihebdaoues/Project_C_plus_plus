#ifndef EMPLOYEFORM_H
#define EMPLOYEFORM_H

#include <QWidget>
#include "EWidget/ebasewidget.h"
#include "EWidget/employespwidget.h"
#include "PrimitiveClasses/Employee.h"
#include <QVBoxLayout>
#include <vector>

namespace Ui {
class EmployeForm;
}

class EmployeForm : public QWidget
{
    Q_OBJECT
signals:
    void goBackScreen();
public:
    explicit EmployeForm(QWidget *parent = 0);
    ~EmployeForm();
    void config(std::vector<Employee*>*);
private slots:
    void updateForm(int);

    void updateButton(int val);

    void updateSelected();

    void pbSupp_clicked();

    void pbMod_clicked();

    void pbAjout_clicked();

    void pbClear_clicked();

    void search(QString);

    void on_pbSearch_clicked();

private:
    std::vector<Employee*>*vec;
    EBaseWidget *ebasewidget;
    EmployeSpWidget *employespwidget;
    QVBoxLayout *widLayout;
    bool connectionStart;
    Ui::EmployeForm *ui;
};
#endif // EMPLOYEFORM_H

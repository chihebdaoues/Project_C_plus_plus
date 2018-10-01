#ifndef CLASSEFORM_H
#define CLASSEFORM_H

#include <QWidget>

namespace Ui {
class ClasseForm;
}

class ClasseForm : public QWidget
{
    Q_OBJECT
signals:
    void goBackScreen();
public:
    explicit ClasseForm(QWidget *parent = 0);
    ~ClasseForm();

private slots:
    void on_pbReturn_clicked();

private:
    Ui::ClasseForm *ui;
};

#endif // CLASSEFORM_H

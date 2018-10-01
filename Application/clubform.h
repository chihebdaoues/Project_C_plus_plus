#ifndef CLUBFORM_H
#define CLUBFORM_H

#include <QWidget>

namespace Ui {
class ClubForm;
}

class ClubForm : public QWidget
{
    Q_OBJECT
signals:
    void goBackScreen();
public:
    explicit ClubForm(QWidget *parent = 0);
    ~ClubForm();

private slots:
    void on_pbReturn_clicked();

private:
    Ui::ClubForm *ui;
};

#endif // CLUBFORM_H

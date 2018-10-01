#ifndef STARTFORM_H
#define STARTFORM_H

#include <QWidget>
#include <QMessageBox>
namespace Ui {
class StartForm;
}

class StartForm : public QWidget
{
    Q_OBJECT
signals:
    void switchScreen(int index);
public:
    explicit StartForm(QWidget *parent = 0);
    ~StartForm();

private slots:

    void on_pbGestEleve_clicked();

    void on_pbGestClasse_clicked();

    void on_pbGestEmploye_clicked();

    void on_pbGestClub_clicked();

    void on_pbAbout_clicked();

private:
    Ui::StartForm *ui;
};

#endif // STARTFORM_H

#ifndef ELEVEFORM_H
#define ELEVEFORM_H

#include <QWidget>
#include "EWidget/ebasewidget.h"
#include "EWidget/elevespwidget.h"
#include "PrimitiveClasses/Eleve.h"
#include <QVBoxLayout>
#include <vector>
namespace Ui {
class EleveForm;
}

class EleveForm : public QWidget
{
    Q_OBJECT
signals:
    void goBackScreen();
public:
    explicit EleveForm(QWidget *parent = 0);
    ~EleveForm();
    void config(std::vector<Eleve*>*);
private slots:
    void updateButton(int val);

    void updateSelected();

    void pbSupp_clicked();

    void pbMod_clicked();

    void pbAjout_clicked();

    void updateForm(int val);

    void pbClear_clicked();

    void search(QString);

    void on_pbSearch_clicked();

private:
    std::vector<Eleve*>* vec;
    EBaseWidget *ebasewidget;
    EleveSpWidget *elevespwidget;
    QVBoxLayout *widLayout;
    bool connectionStart;
    Ui::EleveForm *ui;

};

#endif // ELEVEFORM_H

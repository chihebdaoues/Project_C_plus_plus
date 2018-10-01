#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "startform.h"
#include "eleveform.h"
#include "employeform.h"
#include "classeform.h"
#include "clubform.h"
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QStackedWidget>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void switchScreen(int index);
    void goBackScreen();
private:
    Ui::MainWindow *ui;
    QStackedWidget *stackedWid;
    StartForm *startWid;
    EleveForm *eleveWid;
    ClasseForm *classeWid;
    ClubForm *clubWid;
    EmployeForm *employeWid;
    void config();
    std::vector<Eleve*> vectEleves;
    std::vector<Employee*> vectEmployes;
};

#endif // MAINWINDOW_H

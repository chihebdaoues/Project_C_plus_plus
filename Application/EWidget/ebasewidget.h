#ifndef EBASEWIDGET_H
#define EBASEWIDGET_H

#include <QWidget>

namespace Ui {
class EBaseWidget;
}

class EBaseWidget : public QWidget
{
    Q_OBJECT
signals:
    void Changed();
public:
    explicit EBaseWidget(QWidget *parent = 0);
    ~EBaseWidget();
    QString getleName();
    QString getleLastName();
    QString getpteEtat();
    QString getleAdresse();
    int getsbDay();
    int getsbYear();
    int getsbMonth();

    void setleName(QString str);
    void setleLastName(QString str);
    void setpteEtat(QString str);
    void setleAdresse(QString str);
    void setsbDay(int val);
    void setsbYear(int val);
    void setsbMonth(int val);
    void clear();
private slots:
    void changeMade();
private:
    Ui::EBaseWidget *ui;
    void setColumnRange();
};

#endif // EBASEWIDGET_H

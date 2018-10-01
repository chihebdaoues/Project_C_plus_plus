#ifndef ELEVESPWIDGET_H
#define ELEVESPWIDGET_H

#include <QWidget>
#include <string>
namespace Ui {
class EleveSpWidget;
}

class EleveSpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EleveSpWidget(QWidget *parent = 0);
    ~EleveSpWidget();
    void setleEmailPar(QString str);
    void setleNamePar(QString str);
    void setleTelPar(QString str);
    QString getleEmailPar();
    QString getleNamePar();
    QString getleTelPar();
    void clear();
private:
    Ui::EleveSpWidget *ui;
};

#endif // ELEVESPWIDGET_H

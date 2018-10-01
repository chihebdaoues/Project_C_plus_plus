#ifndef ELEVESPWIDGET_H
#define ELEVESPWIDGET_H

#include <QWidget>

namespace Ui {
class EleveSpWidget;
}

class EleveSpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit EleveSpWidget(QWidget *parent = 0);
    ~EleveSpWidget();

private:
    Ui::EleveSpWidget *ui;
};

#endif // ELEVESPWIDGET_H

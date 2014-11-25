#ifndef LAWN_H
#define LAWN_H

#include <QGraphicsView>
#include <QDebug>
#include <QMouseEvent>

class Lawn : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Lawn(QWidget *parent = 0);

signals:

public slots:
    void mousePressEvent(QMouseEvent *e);

};

#endif // LAWN_H
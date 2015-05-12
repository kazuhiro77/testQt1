#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QGLWidget>


class myGLWidget : public QGLWidget
{
    Q_OBJECT
    public:
        myGLWidget(QWidget* parent);
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};

#endif // MYGLWIDGET_H

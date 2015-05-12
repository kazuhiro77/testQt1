#include "myglwidget.h"

myGLWidget::myGLWidget(QWidget *parent):QGLWidget(parent)
{

}

void myGLWidget::initializeGL()
{
    glClearColor(0.3f,0.8f, 0.3f, 1.0f);
}

void myGLWidget::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);
    glLoadIdentity();
    glOrtho(-(double)w/200.0, (double)w/200.0,-(double)h/200.0, (double)h/200.0,-2.0, 2.0);
}

void myGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2d(-0.9, -0.9);
        glVertex2d( 0.9, -0.9);
        glVertex2d( 0.9,  0.9);
        glVertex2d(-0.9,  0.9);
    glEnd();
}

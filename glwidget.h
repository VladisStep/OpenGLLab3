#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>
#include <iostream>
#include <GLUT/glut.h>

#include "bspline.h"

using namespace std;

class GLWidget : public QOpenGLWidget
{
    Q_OBJECT

    double dots[10] = {0.0, 0.0,
                      0.1, 0.3,
                      0.3, 0.5,
                      0.4, 0.4,
                      0.6, 0.1};
public:


     GLWidget(QWidget *parent = nullptr);
     void initializeGL();
     void paintGL();
     void resizeGL(int w, int h);

     void drawDots();

     void setX(int dot, int x);
     void setY(int dot, int y);

};

#endif // GLWIDGET_H

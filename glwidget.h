#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>
#include <iostream>
#include <GLUT/glut.h>

using namespace std;

class GLWidget : public QOpenGLWidget
{
    Q_OBJECT
public:





     GLWidget(QWidget *parent = nullptr);
     void initializeGL();
     void paintGL();
     void resizeGL(int w, int h);

};

#endif // GLWIDGET_H

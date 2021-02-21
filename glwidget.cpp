#include "glwidget.h"



GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent)
{
}

void GLWidget::initializeGL(){
    glClearColor(1, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);


}
void GLWidget::paintGL(){

    }
void GLWidget::resizeGL(int w, int h){
//    glViewport(0,0,w,h);
}

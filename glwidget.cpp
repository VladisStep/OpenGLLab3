#include "glwidget.h"



GLWidget::GLWidget(QWidget *parent) : QOpenGLWidget(parent)
{
}


void GLWidget::drawDots(){

    BSpline* s = new BSpline();

    glColor3f(1, 1, 1);

    glPointSize(4);
    glBegin(GL_POINTS);
        glVertex2d(dots[0], dots[1]);
        glVertex2d(dots[2], dots[3]);
        glVertex2d(dots[4], dots[5]);
        glVertex2d(dots[6], dots[7]);
        glVertex2d(dots[8], dots[9]);
   glEnd();

   glColor3f(1, 0, 0);
   glBegin(GL_LINE_STRIP);

   for (double i = 0.0; i < 2.0; i += 0.01){

       glVertex2d( s->C_1(i, dots, 0), s->C_1(i, dots, 1));

   }

   for (double i = 2.0; i < 3.0; i += 0.01){

       glVertex2d( s->C_2(i, dots, 0), s->C_2(i, dots, 1));

   }



   glEnd();

}


void GLWidget::initializeGL(){
    glClearColor(0.2, 0.2, 0.2, 0.2);
    glClear(GL_COLOR_BUFFER_BIT);


}
void GLWidget::paintGL(){

    drawDots();
}
void GLWidget::resizeGL(int w, int h){
//    glViewport(0,0,w,h);
}

void GLWidget::setX(int dot, int x){

    dots[dot*2] = (double)x / 100;
}

void GLWidget::setY(int dot, int y){

    dots[dot*2 + 1] = (double)y / 100;
}

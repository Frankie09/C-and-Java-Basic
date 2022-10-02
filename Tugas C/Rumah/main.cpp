/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void myInit(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
    glPointSize(8.0);
    glLineWidth(3.0);
    gluOrtho2D(0.0,450.0,0.0,450.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.5,1.00);
    glVertex2i(50,150);
    glVertex2i(50,50);
    glVertex2i(150,50);
    glVertex2i(150,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(235/255.f, 64/255.f, 52/255.f);
    glVertex2i(50,150);
    glVertex2i(150,150);
    glVertex2i(100,200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(235/255.f, 64/255.f, 52/255.f);
    glVertex2i(100,200);
    glVertex2i(150,150);
    glVertex2i(300,150);
    glVertex2i(250,200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(235/255.f, 64/255.f, 52/255.f);
    glVertex2i(100,200);
    glVertex2i(150,150);
    glVertex2i(300,150);
    glVertex2i(250,200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.7,0.5,1.00);
    glVertex2i(150,150);
    glVertex2i(150,50);
    glVertex2i(300,50);
    glVertex2i(300,150);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(100,200);
    glVertex2i(150,150);
    glVertex2i(50,150);
    glVertex2i(100,200);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(200,120);
    glVertex2i(250,120);

    glVertex2i(250,120);
    glVertex2i(250,80);

    glVertex2i(250,80);
    glVertex2i(200,80);

    glVertex2i(200,80);
    glVertex2i(200,120);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(50,150);
    glVertex2i(300,150);
    glVertex2i(300,150);
    glVertex2i(300,50);
    glVertex2i(300,50);
    glVertex2i(50,50);
    glVertex2i(50,50);
    glVertex2i(50,150);

    glVertex2i(100,200);
    glVertex2i(250,200);
    glVertex2i(250,200);
    glVertex2i(300,150);

    glVertex2i(150,150);
    glVertex2i(150,50);

    glVertex2i(85,85);
    glVertex2i(115,85);
    glVertex2i(115,85);
    glVertex2i(115,50);
    glVertex2i(115,50);
    glVertex2i(85,50);
    glVertex2i(85,85);



    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(225,120);
    glVertex2i(225,80);
    glVertex2i(200,100);
    glVertex2i(250,100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(179/255.f, 72/255.f, 30/255.f);
    glVertex2i(85,85);
    glVertex2i(115,85);
    glVertex2i(115,50);
    glVertex2i(85,50);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(330,150);
    glVertex2i(330,50);
    glVertex2i(340,50);
    glVertex2i(340,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(340,135);
    glVertex2i(370,135);
    glVertex2i(370,120);
    glVertex2i(340,120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255/255.f, 0/255.f, 0/255.f);
    glVertex2i(340,150);
    glVertex2i(370,150);
    glVertex2i(370,135);
    glVertex2i(340,135);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(340,150);
    glVertex2i(370,150);

    glVertex2i(370,150);
    glVertex2i(370,135);

    glVertex2i(370,135);
    glVertex2i(340,135);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(370,135);
    glVertex2i(370,120);

    glVertex2i(370,120);
    glVertex2i(340,120);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(158/255.f, 60/255.f, 30/255.f);
    glVertex2i(400,150);
    glVertex2i(400,50);
    glVertex2i(420,50);
    glVertex2i(420,150);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(29/255.f, 219/255.f, 41/255.f);
    glVertex2i(400,150);
    glVertex2i(350,200);
    glVertex2i(350,250);
    glVertex2i(400,300);
    glVertex2i(450,250);
    glVertex2i(450,200);
    glVertex2i(420,150);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(30/255.f, 49/255.f, 158/255.f);
    glVertex2i(128,30);
    glVertex2i(160,30);
     glVertex2i(155,9);
    glVertex2i(135,9);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255/255.f, 241/255.f, 51/255.f);
    glVertex2i(50,330);
    glVertex2i(76,270);
     glVertex2i(99,330);
    glVertex2i(73,360);


    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(76,270);
    glVertex2i(18,200);

    glVertex2i(18,200);
    glVertex2i(19,101);


    glEnd();

      glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2i(50,330);
    glVertex2i(76,270);
     glVertex2i(76,270);
     glVertex2i(99,330);
      glVertex2i(99,330);
    glVertex2i(73,360);
    glVertex2i(73,360);
     glVertex2i(50,330);


   glVertex2i(50,330);
     glVertex2i(76,270);

       glVertex2i(76,270);
        glVertex2i(99,330);



    glEnd();

    glBegin(GL_POINTS);
    glVertex2i(392,242);
    glVertex2i(360,212);
    glVertex2i(423,209);
    glEnd();

}

int main(int argc, char**argv){

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(100,150);
glutCreateWindow("BASIC openGL");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
}

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

    gluOrtho2D(0.0,640.0,0.0,480.0);

}

void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.0,1.0,0.0);
   glRectf(200.0,200.0,300.0,300.0);
   glColor3f(1.0,0.0,0.0);
   glPushMatrix();

   glTranslated(-20,120,0);
   glRectf(200.0,200.0,300.0,300.0);
   glPopMatrix();

glColor3f(0.5,0.5,0.5);
   glPushMatrix();
 glTranslated(80,80,0);
    glScalef(0.5f,0.5f,1.0f);
   glRectf(200.0,200.0,300.0,300.0);
   glPopMatrix();

   glColor3f(1.0,1.0,1.0);
   glBegin(GL_POLYGON);
    glVertex2f(400,350);
   glVertex2f(450,350);
   glVertex2f(475.5410160979454, 392.5352583083745);
   glVertex2f(451.2734127844242, 436.0412023365556);
    glVertex2f(401.063926643482, 436.7777405005243);
   glVertex2f(375.5273155682856, 393.773352738223);

   glEnd();


 glColor3f(0.0,0.0,1.0);
   glBegin(GL_TRIANGLES);
   glVertex2f(400,200);
   glVertex2f(450,300);
   glVertex2f(500,200);
   glEnd();

    glTranslated(550,230,0);
    glRotatef(180,0,0,1);
    glTranslated(-400,-200,0);

    glColor3f(1.0,0.0,0.0);
   glBegin(GL_TRIANGLES);
   glVertex2f(400,200);
   glVertex2f(450,300);
   glVertex2f(500,200);

    glEnd();






   glFlush();






}

int main(int argc, char**argv){

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(100,150);
glutCreateWindow("MODER TRANSFORM");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
}

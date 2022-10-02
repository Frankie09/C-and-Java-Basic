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
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void myInit(void)
{
    glClearColor(1,1,1,0);
    glColor3f(1.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
        gluOrtho2D(0,10,0,10);
}

void myDisplay(void)
{
float ax =4;
float ay = 2;
float bx = 5;
float by = 10;

float cx = 2;
float cy = 8;
float dx = 8;
float dy = 8;

float ex=2;
float ey=6;
float fx=8;
float fy=6;

float gx=6;
float gy=5;
float hx=3;
float hy=5;
   glClear(GL_COLOR_BUFFER_BIT);




glBegin(GL_LINES);
glVertex2d(ax,ay);
glVertex2d(bx,by);
glVertex2d(cx,cy);
glVertex2d(dx,dy);
glVertex2d(ex,ey);
glVertex2d(fx,fy);
glVertex2d(gx,gy);
glVertex2d(hx,hy);
glEnd();


float m1,m2,m3,m4,c1,c2,c3,c4,ix,iy,jx,jy,kx,ky;
 m1 = (by - ay)/(bx - ax);
c1 = ay - (m1*ax);
 m2 = (dy - cy)/(dx-cx);
c2 = cy-(m2*cx);
 m3 = (fy-ey)/(fx-ex);
c3 = ey-(m3*ex);
 m4 = (hy-gy)/(hx-gx);
c4 = gy - (m4*gx);








ix = (c2 -c1) / (m1-m2);
jx=(c3-c1)/(m1-m3);
kx= (c4-c1)/(m1-m4);

iy = (m1*ix)+c1;
jy =(m3*jx)+c3;
ky =(m4*kx)+c4;
printf("%f,%f,%f,%f,%f,%f",ix,iy,jx,jy,kx,ky);

glPointSize(6);
glBegin(GL_POINTS);
glVertex2f(ix,iy);
glVertex2f(jx,jy);
glVertex2f(kx,ky);
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

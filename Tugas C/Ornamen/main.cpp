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
#include <math.h>

void init(void);
void display(void);

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My First OpenGL Application");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	//glColor3f(0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0, 100.0);
}

void ngon(int n, float cx, float cy, float radius, float rotAngle){
    double angle, angleInc;
    int k;

    if(n<3) return;
    angle=rotAngle*3.14159265/180;
    angleInc=2*3.14159265/n;

    //ini titik pertama


    //ini titik berikutnya
    for(k=0;k<n;k++){
        angle+=angleInc;
        glVertex2f(radius*cos(angle)+cx, radius*sin(angle)+cy);

    }
}



void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINE_STRIP);
for(int a=5;a<=100;a+=8){

glColor3f(0.54, 0.51, 0.49);
ngon(500,0,0,10-a,180);

}
glEnd();

	glutSwapBuffers();
}

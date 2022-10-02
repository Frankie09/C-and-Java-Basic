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
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Ornamen");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-150.0, 150.0, -150.0, 150.0, -150.0, 150.0);
}

void ngon(int n, float cx, float cy, float radius, float rotAngle){
    double angle, angleInc;
    int k;

    if(n<3) return;
    angle=rotAngle*3.14159265/180;
    angleInc=2*3.14159265/n;

    //ini titik pertama
    glVertex2f(radius*cos(angle)+cx, radius*sin(angle)+cy);

    //ini titik berikutnya
    for(k=0;k<n;k++){
        angle+=angleInc;
        glVertex2f(radius*cos(angle)+cx, radius*sin(angle)+cy);
    }
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 1.0);

        ngon(5000,0,0,140,45);



    glEnd();
for (int a=45;a<150;a+=15){

         if(a%2==0){
            glBegin(GL_POLYGON);

	glColor3f(255/255.f, 87/255.f, 3/255.f);

        ngon(4,0,0,140,a);

         }else {

          glBegin(GL_POLYGON);

	glColor3f(255/255.f, 171/255.f, 3/255.f);

        ngon(4,0,0,140,a);

         }







    glEnd(); }



	for (int a=30;a<=90;a+=15){
        if(a%2==0){

         glBegin(GL_POLYGON);

	glColor3f(255/255.f, 242/255.f, 3/255.f)
;

        ngon(6,0,0,90,a);
glEnd();

        } else {

         glBegin(GL_POLYGON);

	glColor3f(
153/255.f, 237/255.f, 36/255.f
);

        ngon(6,0,0,90,a);
glEnd();
        }



     }

    int segi=6;
    for(int a=70;a>=30;a-=10){
        if(segi%2==0){
            glBegin(GL_POLYGON);
                glColor3f(5/255.f, 242/255.f, 203/255.f);
                ngon(segi,0,0,a,45);
            glEnd();
        }
        else{
            glBegin(GL_POLYGON);
                glColor3f(5/255.f, 64/255.f, 242/255.f);
                ngon(segi,0,0,a,45);
            glEnd();
        }
        segi--;
    }

   glBegin(GL_POLYGON);
                glColor3f(209/255.f, 146/255.f, 0/255.f);
                ngon(3,140,140,60,45);

            glEnd();

 glBegin(GL_POLYGON);
                glColor3f(209/255.f, 146/255.f, 0/255.f);
                ngon(3,-140,-140,60,110);

            glEnd();
glBegin(GL_POLYGON);
                glColor3f(209/255.f, 146/255.f, 0/255.f);
                ngon(3,140,-140,60,70);

            glEnd();

 glBegin(GL_POLYGON);
                glColor3f(209/255.f, 146/255.f, 0/255.f);
                ngon(3,-140,140,60,130);

            glEnd();




	glutSwapBuffers();
}

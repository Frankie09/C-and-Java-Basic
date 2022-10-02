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
    glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
 	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 400.0);
}


class GLintPoint
{
public:
		GLint x, y;
};


class Point2
{
public:
	float x,y;
	void set(float dx,float dy)
	{
		x = dx;
		y = dy;
	}
	void set(Point2 &p)
	{
		x = p.x;
		y = p.y;
	}
	Point2(float xx,float yy)
	{
		x = xx;
		y = yy;
	}
	Point2()
	{
		x = y = 0;
	}
};


GLintPoint CP;


float lerp (float a, float b, float t)
{
	return a + (b - a) *t;
}


Point2 Tween(Point2 A, Point2 B ,float t)
	{
		Point2 P;
		P.x = lerp(A.x,B.x,t);
		P.y = lerp(A.y,B.y,t);
		return P;
	}


void moveTo(GLint x ,GLint y)
{
	CP.x = x; CP.y = y;
}


void lineTo(GLint x ,GLint y)
{
	glBegin (GL_LINES);
	glVertex2i(CP.x,CP.y);
	glVertex2i(x,y);
	glEnd();
	glutSwapBuffers();
	CP.x = x; CP.y = y;
}


void drawTween (Point2 A[], Point2 B[], int n, float t)
{
     for (int i = 0; i < n; i++)
     {
        Point2 P;
        P = Tween (A[i], B[i], t);
        if (i == 0) moveTo (P.x, P.y);
        else lineTo (P.x, P.y);
       }
}


void myDisplay(void)
{
	int x;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);

	Point2 A[24];
		A [0].set(50,150);
		A [1].set(50,300);
		A [2].set(150,300);
		A [3].set(160,290);
		A [4].set(150,280);
		A [5].set(100,280);
		A [6].set(100,260);
		A [7].set(150,260);
		A [8].set(160,250);
		A [9].set(150,240);
		A [10].set(100,240);
		A [11].set(100,150);
		A [12].set(50,150);




	Point2 B[24];
		B [0].set (780,200);
		B [1].set (720,200);
		B [2].set (720,140);
		B [3].set (760,140);
		B [4].set (760,120);
		B [5].set (720,120);
		B [6].set (720,100);
		B [7].set (780,100);
		B [8].set (780,160);
		B [9].set (740,160);
		B [10].set (740,180);
		B [11].set (780,180);
		B [12].set (780,200);


	glColor3f(1,0,0);
	drawTween(A,B,13,0.0);

	glColor3f(0,0,1);
	for(x=1;x<=9;x+=1)
	{
		drawTween(A,B,13,0.1*x);
	}

	glColor3f(1,0,0);
	drawTween(A,B,13,0.991);

	glFlush();
	glutSwapBuffers();
}

main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
	glutInitWindowSize(800,400);
	glutInitWindowPosition(100,150);
	glutCreateWindow("Huruf nama pertama dan angka terakhir NIM");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}

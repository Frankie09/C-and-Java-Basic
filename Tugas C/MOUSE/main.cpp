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

 // 3D dan Fungsi
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void ukuran(int,int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mousDown = false;
int is_depth;

int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250,80);
    glutCreateWindow("3d");
    init();
    glutDisplayFunc(tampil);
    glutReshapeFunc(ukuran);

    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);

    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}

void init(void){

    glClearColor(0.0,0.0,0.0,1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);

}

void tampil(void){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0.0f,0.0f,3.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
    glRotatef(xrot,1.0f,0.0f,0.0f);
    glRotatef(yrot,0.0f,1.0f,0.0f);

    glPushMatrix();

    //depan
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.0, -10.0, 10.0);
    glVertex3f(-10.0, 10.0, 10.0);
    glVertex3f(10.0, 10.0, 10.0);
    glVertex3f(10.0, -10.0, 10.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-10.0, -10.0, -10.0);
    glVertex3f(-10.0, 10.0, -10.0);
    glVertex3f(10.0, 10.0, -10.0);
    glVertex3f(10.0, -10.0, -10.0);
    glEnd();


    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(10.0, 10.0, 10.0);
    glVertex3f(10.0, -10.0, 10.0);
    glVertex3f(10.0, -10.0, -10.0);
    glVertex3f(10.0, 10.0, -10.0);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 1.0);
    glVertex3f(-10.0, 10.0, 10.0);
    glVertex3f(-10.0, -10.0, 10.0);
    glVertex3f(-10.0, -10.0, -10.0);
    glVertex3f(-10.0, 10.0, -10.0);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 1.0);
    glVertex3f(-10.0, 10.0 + 10.0, 10.0);
    glVertex3f(10.0, -10.0 + 20.0, 10.0);
    glVertex3f(10.0, -10.0 + 20.0, -10.0);
    glVertex3f(-10.0, 10.0 + 10.0, -10.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.5, 0.0);
    glVertex3f(-10.0, -10.0, 10.0);
    glVertex3f(10.0, -10.0, 10.0);
    glVertex3f(10.0, -10.0, -10.0);
    glVertex3f(-10.0, -10.0, -10.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();
}

void idle(){

    if(!mousDown){

        xrot += 0.3f;
        yrot += 0.4f;
    }

    glutPostRedisplay();

}

void mouse(int button, int state, int x, int y){

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){

        mousDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;

    }
    else{
        mousDown = false;
    }

}

void mouseMotion(int x, int y){

    if(mousDown){
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }

}

void ukuran(int lebar, int tinggi){

    if(tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0,lebar/tinggi,5.0,500.0);
    glTranslatef(0.0,-5.0,-150.0);
    glMatrixMode(GL_MODELVIEW);

}

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

void init(void);
void tampil(void);
void keyboard(unsigned char,int,int);
void ukuran(int,int);
void mouseMotion(int x, int y);
void mouse(int button, int state, int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float zrot = 0.0f;
float xx= 0.0;
float yy = 0.0;
float zz = 0.0;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mousDown = false;
int is_depth;


int main(int argc,char**argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(250,80);
    glutCreateWindow("Frankie - 672019165");
    init();

    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);

    glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}

void init(void)
{

    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);

    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);

}

void tampil(void)
{

    if(is_depth)
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    else
    glClear(GL_COLOR_BUFFER_BIT);

        glLoadIdentity();
        gluLookAt(0.0f,0.0f,3.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
        glRotatef(xrot,1.0f,0.0f,0.0f);
        glRotatef(yrot,0.0f,1.0f,0.0f);
        glRotatef(zrot,0.0f,0.0f,1.0f);
        glTranslatef(xx,yy,zz);

// jendela

glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(6.0,-9.0,10.0);
glVertex3f(6.0,0.0,10.0);
glVertex3f(10.0,0.0,10.0);
glVertex3f(10.0,-9.0,10.0);
glEnd();

// jendela

glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(-14.0,-9.0,20.0);
glVertex3f(-14.0,0.0,20.0);
glVertex3f(-8.0,0.0,20.0);
glVertex3f(-8.0,-9.0,20.0);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(-8.0,0.0,20.0);
glVertex3f(-8.0,-9.0,20.0);
glVertex3f(-2.0,-9.0,20.0);
glVertex3f(-2.0,0.0,20.0);
glEnd();


glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(10.0,0.0,10.0);
glVertex3f(10.0,-9.0,10.0);
glVertex3f(14.0,-9.0,10.0);
glVertex3f(14.0,0.0,10.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex3f(6.0,-9.0,10.0);
glVertex3f(6.0,0.0,10.0);
glVertex3f(14.0,0.0,10.0);
glVertex3f(14.0,-9.0,10.0);
glEnd();

//ventilasi
glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(-14.0,0.0,20.0);
glVertex3f(-14.0,4.0,20.0);
glVertex3f(-8.0,4.0,20.0);
glVertex3f(-8.0,0.0,20.0);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(-8.0,4.0,20.0);
glVertex3f(-8.0,0.0,20.0);
glVertex3f(-2.0,0.0,20.0);
glVertex3f(-2.0,4.0,20.0);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(0.0,0.0,10.0);
glVertex3f(0.0,4.0,10.0);
glVertex3f(5.0,4.0,10.0);
glVertex3f(5.0,0.0,10.0);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3f(255/255.f, 210/255.f, 31/255.f);
glVertex3f(6.0,0.0,10.0);
glVertex3f(6.0,4.0,10.0);
glVertex3f(14.0,4.0,10.0);
glVertex3f(14.0,0.0,10.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex3f(0.0,0.0,10.0);
glVertex3f(0.0,4.0,10.0);
glVertex3f(5.0,4.0,10.0);
glVertex3f(5.0,0.0,10.0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex3f(6.0,0.0,10.0);
glVertex3f(6.0,4.0,10.0);
glVertex3f(14.0,4.0,10.0);
glVertex3f(14.0,0.0,10.0);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex3f(-14.0,-9.0,20.0);
glVertex3f(-14.0,0.0,20.0);
glVertex3f(-2.0,0.0,20.0);
glVertex3f(-2.0,-9.0,20.0);
glEnd();
glBegin(GL_POLYGON);
glVertex3f(-14.0,4.0,20.0);
glVertex3f(-14.0,0.0,20.0);
glVertex3f(-2.0,0.0,20.0);
glVertex3f(-2.0,4.0,20.0);

glEnd();

//pintu

 glBegin(GL_POINTS);
   glColor3f(0.0,0.0,1.0);
   glVertex3f(4.0,-5.0,10);
   glEnd();
  glBegin(GL_QUADS);
glColor3f(255/255.f, 210/255.f, 31/255.f);
   glVertex3f(0.0,0.0,10.0);
     glVertex3f(5.0,0.0,10.0);
      glVertex3f(5.0,-10.0,10.0);
    glVertex3f(0.0,-10.0,10.0);
       glEnd();



//depan
    glBegin(GL_QUADS);
    glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(-15.0,-10.0,10.0);
     glVertex3f(-15.0,10.0,10.0);
      glVertex3f(15.0,10.0,10.0);
       glVertex3f(15.0,-10.0,10.0);
       glEnd();

        glBegin(GL_QUADS);
    glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(-15.0,-10.0,20.0);
     glVertex3f(-15.0,10.0,20.0);
      glVertex3f(0.0,10.0,20.0);
       glVertex3f(0.0,-10.0,20.0);
       glEnd();
//belakang
       glBegin(GL_QUADS);
     glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(-15.0,-10.0,-10.0);
     glVertex3f(-15.0,10.0,-10.0);
      glVertex3f(15.0,10.0,-10.0);
       glVertex3f(15.0,-10.0,-10.0);
       glEnd();
//kanan
      glBegin(GL_QUADS);
     glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(15.0,10.0,10.0);
     glVertex3f(15.0,-10.0,10.0);
      glVertex3f(15.0,-10.0,-10.0);
       glVertex3f(15.0,10.0,-10.0);
       glEnd();

          glBegin(GL_QUADS);
     glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(0.0,10.0,20.0);
     glVertex3f(0.0,-10.0,20.0);
      glVertex3f(0.0,-10.0,10.0);
       glVertex3f(0.0,10.0,10.0);
       glEnd();
//kiri
        glBegin(GL_QUADS);
     glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(-15.0,10.0,10.0);
     glVertex3f(-15.0,-10.0,10.0);
      glVertex3f(-15.0,-10.0,-10.0);
       glVertex3f(-15.0,10.0,-10.0);
       glEnd();

             glBegin(GL_QUADS);
  glColor3f(31/255.f, 255/255.f, 90/255.f);
   glVertex3f(-15.0,10.0,20.0);
     glVertex3f(-15.0,-10.0,20.0);
      glVertex3f(-15.0,-10.0,10.0);
     glVertex3f(-15.0,10.0,10.0);
       glEnd();
//atas
        glBegin(GL_QUADS);
     glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(-15.0,10.0,10.0);
     glVertex3f(15.0,-10.0+20.0,10.0);
      glVertex3f(15.0,-10.0+20.0,-10.0);
       glVertex3f(-15.0,10.0,-10.0);
       glEnd();
         glBegin(GL_QUADS);
    glColor3f(31/255.f, 255/255.f, 90/255.f);
   glVertex3f(-15.0,10.0,20.0);
     glVertex3f(-15.0,10.0,10.0);
      glVertex3f(0.0,10.0,10.0);
    glVertex3f(0.0,10.0,20.0);
       glEnd();
//atap
       glBegin(GL_POLYGON);
       glColor3f(0.0,0.0,1.0);
  glVertex3f(-15.0,10.0,10.0);
     glVertex3f(15.0,10.0,10.0);
      glVertex3f(0.0,20.0,0.0);

       glEnd();

          glBegin(GL_POLYGON);
       glColor3f(0.0,0.0,1.0);
  glVertex3f(-15.0,10.0,10.0);
      glVertex3f(-15.0,10.0,-10.0);
      glVertex3f(0.0,20.0,0.0);

       glEnd();

         glBegin(GL_POLYGON);
       glColor3f(0.0,0.0,1.0);
   glVertex3f(15.0,10.0,10.0);
      glVertex3f(15.0,10.0,-10.0);
      glVertex3f(0.0,20.0,0.0);

       glEnd();

         glBegin(GL_POLYGON);
       glColor3f(0.0,0.0,1.0);
  glVertex3f(-15.0,10.0,-10.0);
     glVertex3f(15.0,10.0,-10.0);
      glVertex3f(0.0,20.0,0.0);

       glEnd();


//bawah
         glBegin(GL_QUADS);
  glColor3f(31/255.f, 255/255.f, 90/255.f);
    glVertex3f(-15.0,-10.0,10.0);
     glVertex3f(15.0,-10.0,10.0);
      glVertex3f(15.0,-10.0,-10.0);
       glVertex3f(-15.0,-10.0,-10.0);
       glEnd();

         glBegin(GL_QUADS);
  glColor3f(31/255.f, 255/255.f, 90/255.f);
   glVertex3f(-15.0,-10.0,20.0);
     glVertex3f(-15.0,-10.0,10.0);
         glVertex3f(0.0,-10.0,10.0);
    glVertex3f(0.0,-10.0,20.0);
       glEnd();

       // objek dalam rumah
//kasur
       //depan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -10.0, 10.0);
    glVertex3f(-14.0, -8.0, 10.0);
    glVertex3f(-8.0, -8.0, 10.0);
    glVertex3f(-8.0, -10.0, 10.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
     glVertex3f(-14.0, -10.0, 5.0);
    glVertex3f(-14.0, -8.0, 5.0);
    glVertex3f(-8.0, -8.0, 5.0);
    glVertex3f(-8.0, -10.0, 5.0);
    glEnd();


    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
       glVertex3f(-8.0, -8.0, 10.0);
    glVertex3f(-8.0, -10.0, 10.0);
     glVertex3f(-8.0, -10.0, 10.0);
   glVertex3f(-8.0, -8.0, 10.0);

    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
     glVertex3f(-14.0, -10.0, 10.0);
    glVertex3f(-14.0, -8.0, 10.0);
     glVertex3f(-14.0, -8.0, 5.0);
       glVertex3f(-14.0, -10.0, 5.0);

    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);

    glVertex3f(-8.0, -8.0, 10.0);
     glVertex3f(-14.0, -8.0, 10.0);
   glVertex3f(-14.0, -8.0, 5.0);
    glVertex3f(-8.0, -8.0, 5.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
         glVertex3f(-8.0, -10.0, 10.0);
      glVertex3f(-14.0, -10.0, 10.0);
 glVertex3f(-14.0, -10.0, 5.0);
  glVertex3f(-8.0, -10.0, 5.0);
    glEnd();

    //lemari

     //depan
    glBegin(GL_QUADS);
    glColor3f(212/255.f, 103/255.f, 40/255.f);
    glVertex3f(-14.0, -10.0, 15.0);
    glVertex3f(-14.0, -2.0, 15.0);
    glVertex3f(-10.0, -2.0, 15.0);
    glVertex3f(-10.0, -10.0, 15.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
   glColor3f(212/255.f, 103/255.f, 40/255.f);
    glVertex3f(-14.0, -10.0, 13.0);
    glVertex3f(-14.0, -2.0, 13.0);
    glVertex3f(-10.0, -2.0, 13.0);
    glVertex3f(-10.0, -10.0, 13.0);
    glEnd();


    //kanan
    glBegin(GL_QUADS);
      glColor3f(212/255.f, 103/255.f, 40/255.f);
       glVertex3f(-10.0, -2.0, 15.0);
    glVertex3f(-10.0, -10.0, 15.0);
    glVertex3f(-10.0, -10.0, 13.0);
     glVertex3f(-10.0, -2.0, 13.0);

    glEnd();

    //kiri
    glBegin(GL_QUADS);
     glColor3f(212/255.f, 103/255.f, 40/255.f);
    glVertex3f(-14.0, -10.0, 15.0);
    glVertex3f(-14.0, -2.0, 15.0);
    glVertex3f(-14.0, -2.0, 13.0);
    glVertex3f(-14.0, -10.0, 13.0);

    glEnd();

    //atas
    glBegin(GL_QUADS);
     glColor3f(212/255.f, 103/255.f, 40/255.f);
      glVertex3f(-10.0, -2.0, 15.0);
     glVertex3f(-14.0, -2.0, 15.0);

  glVertex3f(-14.0, -2.0, 13.0);
    glVertex3f(-10.0, -2.0, 13.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
     glColor3f(212/255.f, 103/255.f, 40/255.f);
   glVertex3f(-10.0, -10.0, 15.0);
   glVertex3f(-14.0, -10.0, 15.0);
    glVertex3f(-14.0, -10.0, 13.0);
  glVertex3f(-10.0, -10.0, 13.0);
    glEnd();



    //brankas


     //depan
    glBegin(GL_QUADS);
      glColor3f(0.0, 0.0, 0.0);
    glVertex3f(2.0, -10.0, 0.0);
    glVertex3f(2.0, -6.0, 0.0);
    glVertex3f(6.0, -6.0, 0.0);
    glVertex3f(6.0, -10.0, 0.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(2.0, -10.0, -5.0);
    glVertex3f(2.0, -6.0, -5.0);
    glVertex3f(6.0, -6.0, -5.0);
    glVertex3f(6.0, -10.0, -5.0);
    glEnd();


    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
   glVertex3f(6.0, -6.0, 0.0);
    glVertex3f(6.0, -10.0, 0.0);

    glVertex3f(6.0, -10.0, -5.0);
      glVertex3f(6.0, -6.0, -5.0);

    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
     glVertex3f(2.0, -10.0, 0.0);
    glVertex3f(2.0, -6.0, 0.0);
    glVertex3f(2.0, -6.0, -5.0);
     glVertex3f(2.0, -10.0, -5.0);

    glEnd();

    //atas
    glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
    glVertex3f(6.0, -6.0, 0.0);
glVertex3f(2.0, -6.0, 0.0);
     glVertex3f(2.0, -6.0, -5.0);
    glVertex3f(6.0, -6.0, -5.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
 glVertex3f(6.0, -10.0, 0.0);
  glVertex3f(2.0, -10.0, 0.0);
    glVertex3f(2.0, -10.0, -5.0);
  glVertex3f(6.0, -10.0, -5.0);
    glEnd();

// kulkas


     //depan
    glBegin(GL_QUADS);
    glColor3f(196/255.f, 195/255.f, 175/255.f);
    glVertex3f(-14.0, -10.0, -5.0);
    glVertex3f(-14.0, -2.0, -5.0);
    glVertex3f(-10.0, -2.0, -10.0);
    glVertex3f(-10.0, -10.0,-10.0);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(196/255.f, 195/255.f, 175/255.f);
    glVertex3f(-14.0, -10.0, -5.0);
    glVertex3f(-14.0, -2.0, -5.0);
    glVertex3f(-10.0, -2.0, -10.0);
    glVertex3f(-10.0, -10.0, -10.0);
    glEnd();


    //kanan
    glBegin(GL_QUADS);
    glColor3f(196/255.f, 195/255.f, 175/255.f);
       glVertex3f(-10.0, -2.0, -5.0);
    glVertex3f(-10.0, -10.0, -5.0);
    glVertex3f(-10.0, -10.0, -10.0);
     glVertex3f(-10.0, -2.0, -10.0);

    glEnd();

    //kiri
    glBegin(GL_QUADS);
      glColor3f(196/255.f, 195/255.f, 175/255.f);
    glVertex3f(-14.0, -10.0, -5.0);
    glVertex3f(-14.0, -2.0, -5.0);
    glVertex3f(-14.0, -2.0, -10.0);
    glVertex3f(-14.0, -10.0, -10.0);

    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(196/255.f, 195/255.f, 175/255.f);
      glVertex3f(-10.0, -2.0, -5.0);
     glVertex3f(-14.0, -2.0, -5.0);

  glVertex3f(-14.0, -2.0, -10.0);
    glVertex3f(-10.0, -2.0, -10.0);
    glEnd();

    //bawah
    glBegin(GL_QUADS);
    glColor3f(196/255.f, 195/255.f, 175/255.f);
   glVertex3f(-10.0, -10.0, -5.0);
   glVertex3f(-14.0, -10.0, -5.0);
    glVertex3f(-14.0, -10.0, -10.0);
  glVertex3f(-10.0, -10.0, -10.0);
    glEnd();






       glPushMatrix();
       glPopMatrix();
       glutSwapBuffers();
}

void keyboard(unsigned char key,int x,int y)
{

     switch(key)
    {
    case 'w':
    case 'W':
        zz += 3.0;

        break;
    case 'd':
    case 'D':
        xx +=3.0;
        break;
    case 's':
    case 'S':
        zz +=-3.0;
        break;

    case 'a':
    case 'A':
        xx+=-3.0;
        break;
    case '7':
           yy+=3.0;
        break;
    case '9':
          yy+=-3.0;
        break;
    case '2':
           xrot+=2.0;
        break;
    case '8':
             xrot+=-2.0;
        break;
    case '6':
           yrot+=2.0;
        break;
    case '4':
             yrot+=-2.0;
        break;

    case '1':
            zrot +=2.0;
        break;
    case '3':
             zrot +=-2.0;
        break;
    case '5':
        if(is_depth)
        {
            is_depth =0;
            glDisable(GL_DEPTH_TEST);
        } else{
            is_depth=1;
            glEnable(GL_DEPTH_TEST);

        }











    }

    tampil();

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
void ukuran(int lebar,int tinggi)
{

    if(tinggi == 0) tinggi =1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(20.0,lebar/tinggi,5.0,500.0);
    glTranslatef(0.0,-5.0,-150.0);
    glMatrixMode(GL_MODELVIEW);
}

#include <GL/GLUT.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// actual vector representing the camera's direction
float lx=0.0f,lz=-1.0f, ly= 0.0f;

// XZ position of the camera
float x=0.0f, z=10.0f, y= 1.0f;

// idle angle
float zpos = -1, rot = 1, pos = -1;

//police sirene RGB
float r,g,b;

bool mouseDown = false;

// all variables initialized to 1.0, meaning
// the triangle will initially be white
float red=1.0f, blue=1.0f, green=1.0f;

// angle for idle func
float angle = 0.0f, sudut = 0.1f;

//int dummy = 5;


void idle()
{
    if(zpos<=10)
    {
        r = (rand()%9/8);
        g = (rand()%8/8);
        b = (rand()%9/8);
    // moving speed
        zpos += 0.01;
    }
    else
    {
        zpos = zpos - 15;
    }

    glutPostRedisplay();
}

void idle2()
{
    if(zpos<=10)
    {
    // moving speed
        pos -= 0.01;
    }
    else
    {
        pos = zpos + 15;
    }

    glutPostRedisplay();
}

void Idle3(void)
{
    if(rot<=10)
    {
    // moving speed
        rot += 0.0000000001;
    }
    glutPostRedisplay();
}

void gedung()
{
    //gedung 1
        glColor3f(0.5f, 0.5f, 0.5f);
        glTranslatef(0.0f, 0.0f, 0.0f);
        glutSolidCube(5.0);

        glColor3f(1.0f, 1.0f, 1.0f);
        glTranslatef(0.0f, 1.0f, 0.0f);
        glutSolidCube(4.9);

        glColor3f(0.5f, 0.5f, 0.5f);
        glTranslatef(0.0f, 4.5f, 0.0f);
        glutSolidCube(5.0);

        glColor3f(1.0f, 1.0f, 1.0f);
        glTranslatef(0.0f, 1.0f, 0.0f);
        glutSolidCube(4.9);

        glColor3f(0.5f, 0.5f, 0.5f);
        glTranslatef(0.0f, 4.5f, 0.0f);
        glutSolidCube(5.0);

        glColor3f(1.0f, 1.0f, 1.0f);
        glTranslatef(0.0f, 1.0f, 0.0f);
        glutSolidCube(4.9);

        glColor3f(0.5f, 0.5f, 0.5f);
        glTranslatef(0.0f, 4.5f, 0.0f);
        glutSolidCube(5.0);

}

void gedung2()
{
        //gedung 2
            glColor3f(0.5f, 0.5f, 0.5f);
            glTranslatef(6.0f, -15.0f, 0.0f);
            glutSolidCube(5.0);

            glTranslatef(0.0f, 5.0f, 0.0f);
            glutSolidCube(5.0);

            glTranslatef(0.0f, 5.0f, 0.0f);
            glutSolidCube(5.0);

            glTranslatef(0.0f, 4.5f, 0.0f);
            glutSolidCube(5.0);

            glTranslatef(0.0f, 4.0f, 0.0f);
            glutSolidCube(4.0);

            glTranslatef(0.0f, 3.5f, 0.0f);
            glutSolidCube(3.0);

            glTranslatef(0.0f, 2.0f, 0.0f);
            glutSolidCube(2.0);

}

void gedung3()
{
    //gedung 2
        glColor3f(0.5f, 0.5f, 0.5f);

        glTranslatef(6.5f, -25.0f, 0.0f);
        glutSolidCube(5.0);

        glTranslatef(0.0f, 5.0f, 0.0f);
        glutSolidCube(5.0);

        glTranslatef(0.0f, 5.0f, 0.0f);
        glutSolidCube(5.0);
}

void gabunganGedung()
{
    gedung();

    glPushMatrix();
    glTranslatef(1.0f, -1.0f, 0.0f);
    gedung2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(7.0f, 10.0f, 0.0f);
    gedung3();
    glPopMatrix();

}

void objekBergerak()
{
    // sirine
        glPushMatrix();
        glColor3f(r, g, b);
        glTranslatef(zpos, -15.0, 6.0);
        glScalef(1.5, 1.9, 5.0);
        glutSolidCube(0.2);
        glPopMatrix();
}

void objekBergerak2()
{
    // badan mobil
        glPushMatrix();
        glColor3f(0, 0, 0);
        glTranslatef(zpos, -15.5, 6.0);
        glScalef(3.0, 1.0, 1.5);
        glutSolidCube(0.9);
        glPopMatrix();
}

void objekBergerak3()
{
    //depan mobil
        glPushMatrix();
        glColor3f(1, 1, 1);
        glTranslatef(zpos + 1, -16.0, 6.0);
        glScalef(2.0, 0.5, 1.4);
        glutSolidCube(0.9);
        glPopMatrix();
}

void objekBergerak4()
{
    //belakang mobil
        glPushMatrix();
        glColor3f(1, 1, 1);
        glTranslatef(zpos - 0.5, -16.0, 6.0);
        glScalef(2.4, 0.5, 1.4);
        glutSolidCube(0.9);
        glPopMatrix();
}

void mobilPolisiMinecraft()
{
    objekBergerak();
    objekBergerak2();
    objekBergerak3();
    objekBergerak4();
}

void jalan()
{
    glColor3f(0.1f, 0.1f, 0.1f);
    //glTranslatef()
    glBegin(GL_POLYGON);
        glVertex3f( -2.5f, -16.46f, 3.0f);
        glVertex3f( -2.5f, -16.46f, 12.0f);
        glVertex3f( 17.5f, -16.46f, 12.0f);
        glVertex3f( 17.5f, -16.46f, 3.0f);
    glPopMatrix();

    glEnd();
}

void Bulan()
{
    //belakang mobil
        glPushMatrix();
        glColor3f(1, 1, 1);
        glRotatef(sudut - 10.0, 5.0, 20.0, 1.0);
        glTranslatef(15.0 , 39.0, 8.0);
        glutSolidSphere(0.9, 20, 20);
        glPopMatrix();
        sudut += 0.5;
}

void orang()
{
    // rabut
        glPushMatrix();
        glColor3f(0.4, 0.2, 0.0);
        glTranslatef(pos + 0.025, -15.0, 10.0);
        glScalef(2.2, 1.8, 2.3);
        glutSolidCube(0.2);
        glPopMatrix();

    // kepala
        glPushMatrix();
        glColor3f(1.0, 0.8, 0.4);
        glTranslatef(pos, -15.1, 10.0);
        glScalef(2.0, 2.0, 2.0);
        glutSolidCube(0.2);
        glPopMatrix();


    // badan
        glPushMatrix();
        glColor3f(0.4, 0.4, 0.9);
        glTranslatef(pos, -15.6, 10.0);
        glScalef(2.5, 3.0, 3.0);
        glutSolidCube(0.2);
        glPopMatrix();

    // badan
        glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(pos - 0.17, -15.6, 10.0);
        glScalef(1.0, 3.0, 1.0);
        glutSolidCube(0.2);
        glPopMatrix();


    // kaki kanan
        glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(pos, -16.15, 9.85);
        glScalef(1.0, 3.0, 1.0);
        glutSolidCube(0.2);
        glPopMatrix();

     // kaki kiri
        glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(pos, -16.15, 10.15);
        glScalef(1.0, 3.0, 1.0);
        glutSolidCube(0.2);
        glPopMatrix();


}

void changeSize(int w, int h)
{
    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if (h == 0) h = 1;
    float ratio = w * 1.0 / h;

    // Use the Projection Matrix
    glMatrixMode(GL_PROJECTION);

    // Reset Matrix
    glLoadIdentity();

    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);

    // Set the correct perspective.
    gluPerspective(45.0f, ratio, 0.1f, 100.0f);

    // Get Back to the Modelview
    glMatrixMode(GL_MODELVIEW);
}

void renderScene(void)
{
    // Clear Color and Depth Buffers
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Reset transformations
    glLoadIdentity();

    // Set the camera
    gluLookAt( x, y, z, x+lx, y+ly, z+lz, 0.0f, 1.0f, 0.0f);

    // Draw the ground
    glColor3f(0.2f, 0.2f, 0.2f);
    glBegin(GL_QUADS);
    glVertex3f(-10.0f, 0.0f, -10.0f);
    glVertex3f(-10.0f, 0.0f, 50.0f);
    glVertex3f( 67.0f, 0.0f, 50.0f);
    glVertex3f( 67.0f, 0.0f, -10.0f);
    glEnd();

    //Draw the sea
    glColor3f(0.0f, 0.2f, 0.4f);
    glBegin(GL_QUADS);
    glVertex3f(-80.0f, -0.05f, -80.0f);
    glVertex3f(-80.0f, -0.05f, 80.0f);
    glVertex3f( 95.0f, -0.05f, 80.0f);
    glVertex3f( 95.0f, -0.05f, -80.0f);
    glEnd();

    // Draw gedung
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            glPushMatrix();
            glTranslatef(i * 20.0 ,0, j * 15.0);
            gabunganGedung();
            mobilPolisiMinecraft();
            jalan();
            orang();
            glPopMatrix();
        }


//    gabunganGedung();
//    mobilPolisiMinecraft();
    Bulan();
//    jalan();
//    orang();


    idle();
    idle2();
    Idle3();
    glutSwapBuffers();
    glFlush();
}

void processNormalKeys(unsigned char key, int x, int y)
{

    if (key == 27)
    exit(0);

}

void processSpecialKeys(int key, int xx, int yy)
{
    float fraction = 0.1f;

    switch (key)
    {
    case GLUT_KEY_LEFT :
        angle -= 0.1f;
        lx = sin(angle);
        lz = -cos(angle);
    break;

    case GLUT_KEY_RIGHT :
        angle += 0.1f;
        lx = sin(angle);
        lz = -cos(angle);
    break;

    case GLUT_KEY_UP :
        x += lx * fraction;
        z += lz * fraction;
    break;

    case GLUT_KEY_DOWN :
        x -= lx * fraction;

        z -= lz * fraction;
    break;

    case GLUT_KEY_HOME :
        ly +=0.2f *fraction;
    break;

    case GLUT_KEY_END :
        ly -=0.2f *fraction;
    break;

    case GLUT_KEY_PAGE_UP :
        y +=0.5f *fraction;
    break;

    case GLUT_KEY_PAGE_DOWN :
        y -=0.5f *fraction;
    break;

    }
}


int main(int argc, char **argv)
{
    // init GLUT and create window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(200,0);
    glutInitWindowSize(1000,700);
    glutCreateWindow("Gede Abdi - 672019053");

    // register callbacks
    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutIdleFunc(renderScene);
    glutKeyboardFunc(processNormalKeys);
    glutSpecialFunc(processSpecialKeys);
    //glutMouseFunc(mouse);

    // OpenGL init
    glEnable(GL_DEPTH_TEST);
    // enter GLUT event processing cycle
    glutMainLoop();

    return 1;

}

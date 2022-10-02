#include <windows.h>
#include <gl/Gl.h>
#include <gl/glut.h>
#include <math.h>

void myInit(void) {
     glClearColor(1.0, 1.0, 1.0, 0.0);
     glColor3f(0.0f, 0.0f, 0.0f);
     glPointSize(4);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     //GLdouble left, GLdouble right, GLdouble bottom, GLdouble top
     gluOrtho2D(-500, 450.0, -350, 480.0);

}

void gambar(void) {
     int n = 100;
     float cx = 6, cy = 6;
     int rad = 5;

     int titikSudut = 6;
     glClear(GL_COLOR_BUFFER_BIT);

     double sudut    = 2 * 3.14159265 / 180;
     double sudutInc = 2 * 3.14159265 / titikSudut;

     if(titikSudut < 3) return;

     glColor3f(0.0f, 0.0f, 1.0f);
     glBegin(GL_LINE_STRIP);
        for(int loop = 0; loop<=n; loop++){
        for(int k = 0; k <= n; k++){

          sudut += sudutInc;
          glVertex2f(rad * cos(sudut) + cx, rad * sin(sudut) + cy);

          rad = rad +1;
        }
        glFlush();
        glEnd();
        }
}

main(int argc, char** argv){
         glutInit(&argc, argv);
         glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
         glutInitWindowSize(640,480);
         glutInitWindowPosition(100, 150);
         glutCreateWindow("TUGAS GRAFIKA KOMPUTER POLIGON");

         glutDisplayFunc(gambar);
         myInit();

         glutMainLoop();
}

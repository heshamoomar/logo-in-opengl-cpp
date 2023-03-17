#include<windows.h>
#include<MMsystem.h>
#include<glut.h>
#include <math.h>

//Group 20 Graphics Lab 3rd assingment :-)

//1:-) Hesham Omar Mahmoud Ahemd   20200060
//2:-) Motaz Ismail Mohamed        20200544
//3:-) Abdallah Mohamed Hussein    20200235

int app = 1200;
GLUquadricObj* gl = gluNewQuadric();

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);


    // project-2 logo project

    // First Object
    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(230, 500);
    glVertex2f(370, 500);
    glVertex2f(340, 330);
    glVertex2f(260, 330);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(250, 450);
    glVertex2f(380, 530);
    glVertex2f(340, 330);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(340, 500);
    glVertex2f(300, 580);
    glVertex2f(260, 500);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(340, 450);
    glVertex2f(220, 530);
    glVertex2f(260, 330);
    glEnd();

    glPopMatrix();
    // Second Object
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(-80, -50, 0);
    glTranslated(350, 415, 0);
    glRotated(45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(250, 500);
    glVertex2f(350, 500);
    glVertex2f(330, 330);
    glVertex2f(270, 330);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(-80, -50, 0);
    glTranslated(350, 415, 0);
    glRotated(45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(260, 450);
    glVertex2f(370, 530);
    glVertex2f(330, 330);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(-80, -50, 0);
    glTranslated(350, 415, 0);
    glRotated(45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(340, 500);
    glVertex2f(300, 580);
    glVertex2f(260, 500);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(-80, -50, 0);
    glTranslated(350, 415, 0);
    glRotated(45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(340, 450);
    glVertex2f(230, 530);
    glVertex2f(270, 330);
    glEnd();

    glPopMatrix();
    // Third Object
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(50, -120, 0);
    glTranslated(350, 415, 0);
    glRotated(-45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(250, 500);
    glVertex2f(350, 500);
    glVertex2f(330, 330);
    glVertex2f(270, 330);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(50, -120, 0);
    glTranslated(350, 415, 0);
    glRotated(-45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(260, 450);
    glVertex2f(370, 530);
    glVertex2f(330, 330);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(50, -120, 0);
    glTranslated(350, 415, 0);
    glRotated(-45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(340, 500);
    glVertex2f(300, 580);
    glVertex2f(260, 500);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslated(app, 0, 0);
    glTranslated(50, -120, 0);
    glTranslated(350, 415, 0);
    glRotated(-45, 0, 0, 1);
    glTranslated(-350, -415, 0);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(340, 450);
    glVertex2f(230, 530);
    glVertex2f(270, 330);
    glEnd();

    glPopMatrix();
    // else
    glPopMatrix();
    /// //////////////
    glPushMatrix();
    glTranslated(app, 0, 0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslated(220, 260, 0);
    glScaled(13, 13, 1);
    gluDisk(gl, 0, 7, 40, 10);
    glPopMatrix();
//////////////////////////////////
    glPushMatrix();
    glTranslated(app, 0, 0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslated(380, 260, 0);
    glScaled(13, 13, 1);
    gluDisk(gl, 0, 7, 40, 10);
    glPopMatrix();
//////////////////////////////////
    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(275, 350);
    glVertex2f(325, 350);
    glVertex2f(325, 230);
    glVertex2f(275, 230);
    glEnd();
    glPopMatrix();

    // CIC

    glPushMatrix();
    glTranslated(app, 0, 0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslated(220, 280, 0);
    glScaled(8, 8, 1);
    gluDisk(gl, 0, 7, 40, 10);
    glPopMatrix();
    //
    glPushMatrix();
    glTranslated(app, 0, 0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslated(390, 280, 0);
    glScaled(8, 8, 1);
    gluDisk(gl, 0, 7, 40, 10);
    glPopMatrix();
    //

    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(290, 330);
    glVertex2f(310, 330);
    glVertex2f(310, 225);
    glVertex2f(290, 225);
    glEnd();
    glPopMatrix();


    /// cic hollow
    glPushMatrix();
    glTranslated(app, 0, 0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslated(220, 280, 0);
    glScaled(5, 6.5, 1);
    gluDisk(gl, 0, 7, 40, 10);
    glPopMatrix();
    //
    glPushMatrix();
    glTranslated(app, 0, 0);
    glColor3f(1.0f, 1.0f, 1.0f);
    glTranslated(390, 280, 0);
    glScaled(5, 6.5, 1);
    gluDisk(gl, 0, 7, 40, 10);
    glPopMatrix();
    //

    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(245, 330);
    glVertex2f(290, 330);
    glVertex2f(290, 190);
    glVertex2f(245, 190);
    glEnd();
    glPopMatrix();
    //
    glPushMatrix();
    glTranslated(app, 0, 0);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(415, 340);
    glVertex2f(450, 300);
    glVertex2f(450, 190);
    glVertex2f(415, 190);
    glEnd();
    glPopMatrix();

    glFlush();
}

void Keys(int key1, int a, int b) {
    key1 = tolower(key1);

    switch (key1) {
    case GLUT_KEY_UP:
        app = 0;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        app = 1200;
        glutPostRedisplay();
        break;

    }
}


void main() {
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("TASK_3");
    glutDisplayFunc(display);
    glutSpecialFunc(Keys);
    glClearColor(0, 0, 0, 0);
    gluOrtho2D(0, 650, 0, 650);
    glutMainLoop();
}
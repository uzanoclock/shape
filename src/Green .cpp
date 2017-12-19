/*
#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(10.0);

/// quad background

glBegin(GL_QUADS);

glColor3ub(51, 204, 51);
glVertex2i(100,100);
glVertex2i(500,100);
glVertex2i(500,500);
glVertex2i(100,500);

glEnd();

/// face
glBegin(GL_QUADS);

glColor3ub(255, 255, 153);
glVertex2i(200,200);
glVertex2i(400,200);
glVertex2i(400,400);
glVertex2i(200,400);

glEnd();

/// left ear
glBegin(GL_QUADS);

glColor3ub(255, 255, 153);
glVertex2i(180,300);
glVertex2i(200,300);
glVertex2i(200,350);
glVertex2i(180,350);

glEnd();

/// right ear
glBegin(GL_QUADS);

glColor3ub(255, 255, 153);
glVertex2i(400,300);
glVertex2i(420,300);
glVertex2i(420,350);
glVertex2i(400,350);

glEnd();

/// top hair
glBegin(GL_QUADS);

glColor3ub(87, 51, 15);
glVertex2i(190,400);
glVertex2i(410,400);
glVertex2i(410,420);
glVertex2i(190,420);

glEnd();

/// left hair
glBegin(GL_QUADS);

glColor3ub(87, 51, 15);
glVertex2i(190,330);
glVertex2i(200,330);
glVertex2i(200,400);
glVertex2i(190,400);

glEnd();

/// left hair corner
glBegin(GL_QUADS);

glColor3ub(87, 51, 15);
glVertex2i(220,380);
glVertex2i(220,400);
glVertex2i(200,400);
glVertex2i(200,380);

glEnd();

/// right hair
glBegin(GL_QUADS);

glColor3ub(87, 51, 15);
glVertex2i(400,330);
glVertex2i(410,330);
glVertex2i(410,400);
glVertex2i(400,400);

glEnd();

/// right hair corner
glBegin(GL_QUADS);

glColor3ub(87, 51, 15);
glVertex2i(380,380);
glVertex2i(400,380);
glVertex2i(400,400);
glVertex2i(380,400);

glEnd();

/// white lips
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(270,245);
glVertex2i(330,245);
glVertex2i(330,250);
glVertex2i(270,250);

glEnd();

/// up lips
glBegin(GL_QUADS);

glColor3ub(0, 0, 0);
glVertex2i(270,240);
glVertex2i(330,240);
glVertex2i(330,245);
glVertex2i(270,245);

glEnd();

/// low lips
glBegin(GL_QUADS);

//glColor3ub(0, 0, 0);
glVertex2i(280,230);
glVertex2i(320,230);
glVertex2i(320,240);
glVertex2i(280,240);

glEnd();

/// middle mask
glBegin(GL_QUADS);

glColor3ub(51, 204, 51);
glVertex2i(270,270);
glVertex2i(330,270);
glVertex2i(330,360);
glVertex2i(270,360);

glEnd();

/// left mask
glBegin(GL_QUADS);

glColor3ub(51, 204, 51);
glVertex2i(220,290);
glVertex2i(280,290);
glVertex2i(280,370);
glVertex2i(220,370);

glEnd();

/// right mask
glBegin(GL_QUADS);

glColor3ub(51, 204, 51);
glVertex2i(320,290);
glVertex2i(380,290);
glVertex2i(380,370);
glVertex2i(320,370);

glEnd();

/// left eye
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(230,360);
glVertex2i(230,310);
glVertex2i(270,310);
glVertex2i(270,360);

glEnd();

/// right eye
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(330,360);
glVertex2i(330,310);
glVertex2i(370,310);
glVertex2i(370,360);

glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("my first attempt");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
*/

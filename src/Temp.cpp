/*
#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(10.0);

///points
glBegin(GL_POINTS);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glEnd();

///Lines
glBegin(GL_LINES);

glColor3ub(0,200,20);
glVertex2i(0,100);

glColor3ub(0,10,20);
glVertex2i(100, 100);
glEnd();

///Triangle
glBegin(GL_TRIANGLES);

glColor3ub(0,200,20);
glVertex2i(0,100);

glColor3ub(0,200,220);
glVertex2i(100, 100);

glColor3ub(0,100,20);
glVertex2i(0,50);
glEnd();

///quad
glBegin(GL_QUADS);

glColor3ub(0,100,10);
glVertex2i(0,0);

glColor3ub(0,100,10);
glVertex2i(50,0);

glColor3ub(0,100,10);
glVertex2i(50,50);

glColor3ub(0,100,10);
glVertex2i(0,50);
glEnd();

///Line strip
glBegin(GL_LINE_STRIP);

glColor3ub(0,100,10);
glVertex2i(200,50);

glColor3ub(0,100,10);
glVertex2i(400,50);

glColor3ub(0,100,10);
glVertex2i(500,100);

glColor3ub(0,100,10);
glVertex2i(400,150);

glColor3ub(0,100,10);
glVertex2i(200,150);

glColor3ub(0,100,10);
glVertex2i(100,100);


glEnd();

///Line loop
glBegin(GL_LINE_LOOP);

glColor3ub(0,100,10);
glVertex2i(200,50);

glColor3ub(0,100,10);
glVertex2i(400,50);

glColor3ub(0,200,10);
glVertex2i(500,100);

glColor3ub(0,100,10);
glVertex2i(400,150);

glColor3ub(0,100,10);
glVertex2i(200,150);

glColor3ub(255,0,0);
glVertex2i(100,100);

glColor3ub(255,0,0);
glVertex2i(200,50);
glEnd();

///tri_strip
glBegin(GL_TRIANGLE_STRIP);

glColor3ub(0,200,20);
glVertex2i(500,0);

glColor3ub(0,200,220);
glVertex2i(450,20);

glColor3ub(0, 0, 255);
glVertex2i(400,0);

glColor3ub(0,100,20);
glVertex2i(350,20);

glColor3ub(0, 255, 255);
glVertex2i(300,0);
glEnd();

///tri fan
glBegin(GL_TRIANGLE_FAN);

glColor3ub(0,200,20);
glVertex2i(100,300);

glColor3ub(0,200,220);
glVertex2i(300,350);

glColor3ub(0, 0, 255);
glVertex2i(280,370);

glColor3ub(0,100,20);
glVertex2i(260,400);
glEnd();

///quad strip
glBegin(GL_QUAD_STRIP);

glColor3ub(0,100,10);
glVertex2i(400,300);

glColor3ub(0, 255, 0);
glVertex2i(400,350);

glColor3ub(0,100,10);
glVertex2i(250,300);

glColor3ub(0,100,10);
glVertex2i(350,350);

glColor3ub(0,100,10);
glVertex2i(200,300);

glColor3ub(0, 255, 255);
glVertex2i(200,350);
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

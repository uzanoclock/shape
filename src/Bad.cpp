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


/// Br background
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(50,300);
glVertex2i(250,300);
glVertex2i(250,500);
glVertex2i(50,500);

glEnd();

/// B
glBegin(GL_POLYGON);

glColor3ub(255, 255, 255);
glVertex2i(80,320);
glVertex2i(140,320);
glVertex2i(140,400);
glVertex2i(120,400);
glVertex2i(120,480);
glVertex2i(80,480);

glEnd();

/// B TOP
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(90,470);
glVertex2i(90,410);
glVertex2i(110,410);
glVertex2i(110,470);


glEnd();

/// B BOTTOM
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(130,390);
glVertex2i(90,390);
glVertex2i(90,330);
glVertex2i(130,330);


glEnd();

/// r long
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(160,320);
glVertex2i(180,320);
glVertex2i(180,400);
glVertex2i(160,400);

glEnd();

/// r side
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(180,360);
glVertex2i(220,360);
glVertex2i(220,380);
glVertex2i(180,380);


glEnd();

/// ae background
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(260,320);
glVertex2i(400,320);
glVertex2i(400,400);
glVertex2i(260,400);


glEnd();

/// ae divide
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(320,320);
glVertex2i(340,320);
glVertex2i(340,400);
glVertex2i(320,400);


glEnd();

/// e divide
glBegin(GL_POLYGON);

glColor3ub(255, 255, 255);
glVertex2i(320,340);
glVertex2i(320,360);
glVertex2i(300,360);
glVertex2i(300,380);
glVertex2i(280,380);
glVertex2i(280,340);


glEnd();

/// a divide
glBegin(GL_POLYGON);

glColor3ub(255, 255, 255);
glVertex2i(340,360);
glVertex2i(360,360);
glVertex2i(360,340);
glVertex2i(380,340);
glVertex2i(380,380);
glVertex2i(340,380);


glEnd();

/// k bar
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(410,320);
glVertex2i(420,320);
glVertex2i(420,500);
glVertex2i(410,500);


glEnd();

/// k 1ST TOP BOX
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(420,380);
glVertex2i(430,380);
glVertex2i(430,390);
glVertex2i(420,390);


glEnd();

/// k 2nd TOP BOX
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(430,390);
glVertex2i(440,390);
glVertex2i(440,400);
glVertex2i(430,400);


glEnd();

/// k 3rd TOP BOX
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(440,400);
glVertex2i(450,400);
glVertex2i(450,410);
glVertex2i(440,410);


glEnd();

/// k 2nd bottom BOX
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(430,380);
glVertex2i(430,370);
glVertex2i(440,370);
glVertex2i(440,380);


glEnd();

/// k 3rd bottom BOX
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(440,370);
glVertex2i(440,360);
glVertex2i(450,360);
glVertex2i(450,370);


glEnd();

/// k 4th bottom BOX
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(450,360);
glVertex2i(450,350);
glVertex2i(460,350);
glVertex2i(460,360);


glEnd();

/// i bar
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(470,320);
glVertex2i(480,320);
glVertex2i(480,390);
glVertex2i(470,390);


glEnd();

/// i dot
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(480,400);
glVertex2i(480,410);
glVertex2i(470,410);
glVertex2i(470,400);


glEnd();

/// n frst
glBegin(GL_POLYGON);

glColor3ub(113, 218, 113);
glVertex2i(490,320);
glVertex2i(500,320);
glVertex2i(500,380);
glVertex2i(540,380);
glVertex2i(540,390);
glVertex2i(490,390);


glEnd();

/// n scnd
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(540,320);
glVertex2i(550,320);
glVertex2i(550,380);
glVertex2i(540,380);


glEnd();

/// g background
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(560,390);
glVertex2i(560,300);
glVertex2i(620,300);
glVertex2i(620,390);


glEnd();

/// g block
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(570,380);
glVertex2i(570,340);
glVertex2i(610,340);
glVertex2i(610,380);

glEnd();

/// g stick
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(560,310);
glVertex2i(610,310);
glVertex2i(610,330);
glVertex2i(560,330);

glEnd();

/// ba background
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(250,300);
glVertex2i(250,100);
glVertex2i(450,100);
glVertex2i(450,300);

glEnd();

/// B of bad
glBegin(GL_POLYGON);

glColor3ub(255, 255, 255);
glVertex2i(280,120);
glVertex2i(340,120);
glVertex2i(340,200);
glVertex2i(320,200);
glVertex2i(320,280);
glVertex2i(280,280);

glEnd();

/// B TOP
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(290,270);
glVertex2i(290,210);
glVertex2i(310,210);
glVertex2i(310,270);


glEnd();

/// B BOTTOM
glBegin(GL_QUADS);

glColor3ub(113, 218, 113);
glVertex2i(290,190);
glVertex2i(290,130);
glVertex2i(330,130);
glVertex2i(330,190);


glEnd();

/// a background
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(360,200);
glVertex2i(360,120);
glVertex2i(420,120);
glVertex2i(420,200);

glEnd();
/// a divide
glBegin(GL_POLYGON);

glColor3ub(113, 218, 113);
glVertex2i(360,160);
glVertex2i(380,160);
glVertex2i(380,140);
glVertex2i(400,140);
glVertex2i(400,170);
glVertex2i(360,170);

glEnd();

/// d
glBegin(GL_POLYGON);

glColor3ub(113, 218, 113);
glVertex2i(520,280);
glVertex2i(510,280);
glVertex2i(510,200);
glVertex2i(460,200);
glVertex2i(460,120);
glVertex2i(520,120);

glEnd();

/// d bottom
glBegin(GL_QUADS);

glColor3ub(255, 255, 255);
glVertex2i(510,190);
glVertex2i(470,190);
glVertex2i(470,130);
glVertex2i(510,130);


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

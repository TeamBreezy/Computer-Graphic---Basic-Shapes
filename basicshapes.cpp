// basicshapes.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include<GL/glut.h>
void myinit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 740.0, 0.0, 580.0);
	glEnable(GL_BLEND); 
	glDisable (GL_BLEND);
}

void basicShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	//Pentagon
	glVertex2i(30,10);
	glVertex2i(90,10);
	glVertex2i(110,60);
	glVertex2i(60,100);
	glVertex2i(10,60);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	//Hexagon
	glBegin(GL_POLYGON);
	glVertex2i(140,10);
	glVertex2i(200,10);
	glVertex2i(230,60);
	glVertex2i(200,100);
	glVertex2i(140,100);
	glVertex2i(110,60);
	glEnd();
	
	glColor3f(0.0, 0.6, 0.0);
	//Heptagon
	glBegin(GL_POLYGON);
	glVertex2i(300,10);
	glVertex2i(365,10);
	glVertex2i(380,60);
	glVertex2i(370,90);
	glVertex2i(332,120);
	glVertex2i(290,90);
	glVertex2i(280,60);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	//Octagon
	glBegin(GL_POLYGON);
	glVertex2i(420,10);
	glVertex2i(490,10);
	glVertex2i(510,40);
	glVertex2i(510,90);
	glVertex2i(490,120);
	glVertex2i(420,120);
	glVertex2i(400,90);
	glVertex2i(400,40);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	//Nonagon
	glBegin(GL_POLYGON);
	glVertex2i(550,10);
	glVertex2i(600,10);
	glVertex2i(620,30);
	glVertex2i(627,60);
	glVertex2i(618,100);
	glVertex2i(570,125);
	glVertex2i(531,100);
	glVertex2i(520,60);
	glVertex2i(527,30);
	glEnd();

	glColor3f(0.0, 0.6, 0.0);
	//Decagon
	glBegin(GL_POLYGON);
	glVertex2i(300,140);
	glVertex2i(350,140);
	glVertex2i(370,160);
	glVertex2i(375,190);
	glVertex2i(370,210);
	glVertex2i(350,240);
	glVertex2i(300,240);
	glVertex2i(280,210);
	glVertex2i(275,190);
	glVertex2i(280,160);
	glEnd();

	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1000, 400);
	glutCreateWindow("Basic Shapes");
	myinit();
	glutDisplayFunc(basicShapes);
	glutMainLoop();
}













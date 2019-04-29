#include "pch.h"
#include <iostream>
#include <GL/glut.h>
float f[9][2] = { {300,310},{310,290},{320,280},{330,290},{335,300},{340,310},{330,330},{320,340},{310,330} };
float t[4][2] = { {340,310},{350,280},{345,310},{350,340} };
float m[2][2] = { {300,310} ,{310,310} };
float e = 308;
float f2[9][2] = { {200,260},{210,240},{220,230},{230,240},{235,250},{240,260},{230,280},{220,290},{210,280} };
float t2[4][2] = { {240,260},{250,230},{245,260},{250,290} };
float m2[2][2] = { {200,260} ,{210,260} };
float e2 = 208;
int l = 1;
float p[5][2] = { {300,320},{300,330},{300,340},{300,350}, {300,360} };//bubble
int r = 5,r2=5;
void reshape(int w, int h)
{
	glViewport(-100, -100, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
}

void idle() {
	if (r<-100)
		r = 50;
	if (r2 < 2)
		r2 = 150;
		glutPostRedisplay();
}


void tank()
{
	glColor3f(0, 0, 1);
	glBegin(GL_POLYGON);
	{
		glVertex2f(200, 450);
		glVertex2f(150, 400);

		glVertex2f(450, 400);
		glVertex2f(400, 450);
	}
	glEnd();

	glColor3f(0, 1, 1);
	glBegin(GL_POLYGON); 
	{
		glVertex2f(200, 370);
		glVertex2f(200, 200);
		glVertex2f(400, 200);
		glVertex2f(400, 370);
	}
	glEnd();

	/*tank*/
	glColor3f(0, 0, 1);
	glBegin(GL_LINE_LOOP); 
	{
		glVertex2f(200, 400);
		glVertex2f(200, 200);
		glVertex2f(400, 200);
		glVertex2f(400, 400);
	}
	glEnd();

	glColor3f(0, 0, 0.8);
	glBegin(GL_POLYGON); 
	{
		glVertex2f(350, 480);
		glVertex2f(350, 450);
		glVertex2f(400, 450);
		glVertex2f(400, 480);
	}
	glEnd();
}


float h = 40, k = 5;
void eli()
{
	glColor3f(0.4, 0.8, .80);
	glBegin(GL_POLYGON);
	for (float i = 0; i < 180; i++)
		glVertex2f(320 + 12 * cos(i), 200 + 5 + 6 * sin(i));
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float j = 0; j < 180; j++)
		glVertex2f(300 + 12 * cos(j), 200 + 5 + 6 * sin(j));
	glEnd();
	glColor3f(0.4, 0.8, .80);
	glBegin(GL_POLYGON);
	for (float l = 0; l < 180; l++)
		glVertex2f(280 + 12 * cos(l), 200 + 5 + 6 * sin(l));
	glEnd();
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float p = 0; p < 180; p++)
		glVertex2f(260 + 12 * cos(p), 200 + 5 + 6 * sin(p));
	glEnd();

	glColor3f(0.4, 0.8, .80);
	glBegin(GL_POLYGON);
	for (float r = 0; r < 180; r++)
		glVertex2f(385 + 12 * cos(r), 200 + 5 + 6 * sin(r));
	glEnd();

}
float i;


void fish1()
{
	glColor3f(1, 0.8, 0);
	glBegin(GL_POLYGON);
	glVertex2f(f[0][0]+r,f[0][1]);
	glVertex2f(f[1][0] + r, f[1][1]);
	glVertex2f(f[2][0] + r, f[2][1]);
	glVertex2f(f[3][0] + r, f[3][1]);
	glVertex2f(f[4][0] + r, f[4][1]);
	glVertex2f(f[5][0] + r, f[5][1]);
	glVertex2f(f[6][0] + r, f[6][1]);
	glVertex2f(f[7][0] + r, f[7][1]);
	glVertex2f(f[8][0] + r, f[8][1]);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(t[0][0]+r,t[0][1]);
	glVertex2f(t[1][0] + r, t[1][1]);
	glVertex2f(t[2][0] + r, t[2][1]);
	glVertex2f(t[3][0] + r, t[3][1]);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_LINES);
	glVertex2f(m[0][0]+r,m[0][1]);
	glVertex2f(m[1][0] + r, m[1][1]);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	for (i = 0; i < 2 * 3.14; i += 0.5)
		glVertex2f(e +r+ 2 * cos(i), 318 + 2 * sin(i));
	glEnd();
	Sleep(1);
	r -= 1;

}



void fish2()
{
	glColor3f(1, 0.8, 0);
	glBegin(GL_POLYGON);
	glVertex2f(f2[0][0] + r2, f2[0][1]);
	glVertex2f(f2[1][0] + r2, f2[1][1]);
	glVertex2f(f2[2][0] + r2, f2[2][1]);
	glVertex2f(f2[3][0] + r2, f2[3][1]);
	glVertex2f(f2[4][0] + r2, f2[4][1]);
	glVertex2f(f2[5][0] + r2, f2[5][1]);
	glVertex2f(f2[6][0] + r2, f2[6][1]);
	glVertex2f(f2[7][0] + r2, f2[7][1]);
	glVertex2f(f2[8][0] + r2, f2[8][1]);
	glEnd();

	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex2f(t2[0][0] + r2, t2[0][1]);
	glVertex2f(t2[1][0] + r2, t2[1][1]);
	glVertex2f(t2[2][0] + r2, t2[2][1]);
	glVertex2f(t2[3][0] + r2, t2[3][1]);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_LINES);
	glVertex2f(m2[0][0] + r2, m2[0][1]);
	glVertex2f(m2[1][0] + r2, m2[1][1]);
	glEnd();
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	for (i = 0; i < 2 * 3.14; i += 0.5)
		glVertex2f(e2 + r2 + 2 * cos(i), 268 + 2 * sin(i));
	glEnd();
	Sleep(1);
	r2 -= 1;

}



void bubble()
{
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (i = 0; i < 2 * 3.14; i += 0.5)
		glVertex2f(p[0][0] + 3 * cos(i), p[0][1] + 3 * sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for (i = 0; i < 2 * 3.14; i += 0.5)
		glVertex2f(p[1][0] + 2.5*cos(i), p[1][1] + 2.5*sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for (i = 0; i < 2 * 3.14; i += 0.5)
		glVertex2f(p[2][0] + 2 * cos(i), p[2][1] + 2 * sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for (i = 0; i < 2 * 3.14; i += 0.5)
		glVertex2f(p[3][0] + 1.5*cos(i), p[3][1] + 1.5*sin(i));
	glEnd();
	glBegin(GL_POLYGON);
	for (i = 0; i < 2 * 3.14; i += 0.5)
		glVertex2f(p[4][0] + 1 * cos(i), p[4][1] + 1 * sin(i));
	glEnd();

}

void plant()
{

	glColor3f(0, 0.8, 0);
	glBegin(GL_POLYGON);
	glVertex2f(340 + 10, 200);
	glVertex2f(330 + 10, 220);
	glVertex2f(350 + 10, 210);
	glVertex2f(350 + 10, 250);
	glVertex2f(360 + 10, 210);
	glVertex2f(370 + 10, 220);
	glVertex2f(380, 240);
	glVertex2f(380, 200);
	glEnd();

	glColor3f(0, 0.8, 0);
	glBegin(GL_POLYGON);
	glVertex2f(340 - 130, 200);
	glVertex2f(330 - 130, 220);
	glVertex2f(350 - 130, 210);
	glVertex2f(350 - 130, 250);
	glVertex2f(360 - 130, 210);
	glVertex2f(370 - 130, 220);
	glVertex2f(380 - 130, 240);
	glVertex2f(380 - 130, 200);
	glEnd();
}

void display()
{
	glClearColor(1, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	tank();

	plant();
	eli();
	fish1();
	bubble();
	fish2();
	
	glutSwapBuffers();
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("aquarium");
	glutFullScreen();
	//fish1();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(idle);
	glutMainLoop();
	return 0;
}

#include "BatmanLogoFrame.h"
#include <glut.h>



BatmanLogoFrame::BatmanLogoFrame()
{
	glPushMatrix();//main
	   
		glPushMatrix();
		glTranslatef(0,3,0);
			glScalef(10, 6, 0.1);
			glColor3f(0, 0, 0);
			glutSolidCube(1);

			glTranslatef(0, 0, -0.3);
			glPushMatrix();//borderTop
			glTranslatef(0, 0.5, 0);
			glScalef(1.05, 0.1, 1);
			glColor3f(0.5, 0.6, 0.7);
			glutSolidCube(1);
			glPopMatrix();

			glPushMatrix();//borderBot
			glTranslatef(0, -0.5, 0);
			glScalef(1.05, 0.1, 1);
			glColor3f(0.5, 0.6, 0.7);
			glutSolidCube(1);
			glPopMatrix();


			glPushMatrix();//borderLeft
			glTranslatef(0.47, 0, 0);
			glScalef(0.1, 1.05, 1);
			glColor3f(0.5, 0.6, 0.7);
			glutSolidCube(1);
			glPopMatrix();


			glPushMatrix();//borderRight
			glTranslatef(-0.47, 0, 0);
			glScalef(0.1, 1.05, 1);
			glColor3f(0.5, 0.6, 0.7);
			glutSolidCube(1);
			glPopMatrix();
		glPopMatrix();


		glPushMatrix();
		glTranslatef(-3.5, 2, -0.1);
		glScalef(0.25,0.25,1);
		//drawBatman Logo
		glColor3f(0.8, 0.8, 0.8);
		glBegin(GL_QUADS);
		int x1, x2, x3, x4;
		int y1, y2, y3, y4;

		x1 = 0;
		y1 = 9;

		for (int i = 0; i<9; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}
		x1 += 9;
		for (int i = 0; i<9; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}


		x1 = 1;
		y1 = 8;
		for (int i = 0; i<8; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}
		x1 += 3;
		for (int i = 0; i<1; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}
		x1 += 1;
		for (int i = 0; i<1; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}


		x1 += 3;
		for (int i = 0; i<8; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}


		x1 = 2;
		y1 = 7;
		for (int i = 0; i<23; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}


		x1 = 3;
		y1 = 6;
		for (int i = 0; i<21; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}

		x1 = 3;
		y1 = 5;
		for (int i = 0; i<21; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}

		x1 = 3;
		y1 = 4;
		for (int i = 0; i<21; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}



		x1 = 8;
		y1 = 3;
		for (int i = 0; i<11; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}


		x1 = 11;
		y1 = 2;
		for (int i = 0; i<5; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}

		x1 = 12;
		y1 = 1;
		for (int i = 0; i<3; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}

		x1 = 13;
		y1 = 0;
		for (int i = 0; i<1; i++) {
			x2 = x1 + 1;
			y2 = y1;
			x3 = x2;
			y3 = y2 + 1;
			x4 = x1;
			y4 = y3;
			glVertex3i(x1, y1, 0.0);
			glVertex3i(x2, y2, 0.0);
			glVertex3i(x3, y3, 0.0);
			glVertex3i(x4, y4, 0.0);
			x1++;
		}


		glEnd();

		glPopMatrix();



	glPopMatrix();//mainEnd



}



BatmanLogoFrame::~BatmanLogoFrame()
{
}

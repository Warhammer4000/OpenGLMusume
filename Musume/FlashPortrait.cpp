#include "FlashPortrait.h"
#include <glut.h>
#include <math.h>
#include "Light.h"
FlashPortrait::FlashPortrait()
{
	glPushMatrix();//main
					   //frame
		glTranslatef(0, 5, 0);
		glPushMatrix();
		glScalef(10, 6, 0.1);
		glColor3f(1, 0, 0);
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


		glPushMatrix();
			//circle
			glScalef(1, 1.6, 1);
			glColor3f(1,1,1);
			glBegin(GL_POLYGON);
			for (int i = 0; i<200; i++)
			{
				float pi = 3.1416;
				float A = (i * 2 * pi) / 100;
				float r = 0.2;
				float x = r * cos(A);
				float y = r * sin(A);
				glVertex3f(x, y, -0.5);
			}
			glEnd();

			//Flash Logo
			glPushMatrix();
				glTranslatef(0, 0, -0.6);
				glRotatef(180, 0, 1, 0);
				glScalef(0.001, 0.001, 1);
				
				glColor3f(1,1,0);
				glBegin(GL_POLYGON);
				glVertex3f(100, 100, 0);
				glVertex3f(0, 60, 0);
				glVertex3f(-100, -100, 0);
				glVertex3f(20, -20, 0);
				glEnd();

				glBegin(GL_POLYGON);
				glVertex3f(120, 200, 0);
				glVertex3f(-60, 40, 0);
				glVertex3f(0, 60, 0);
				glVertex3f(40, 75, 0);
				glEnd();

				glBegin(GL_POLYGON);
				glVertex3f(80, 0, 0);
				glVertex3f(20, -20, 0);
				glVertex3f(-60, -73, 0);
				glVertex3f(-120, -200, 0);
				glEnd();
			
			glPopMatrix();




		glPopMatrix();





		glPopMatrix();


	glPopMatrix();//end main
}


FlashPortrait::~FlashPortrait()
{
}

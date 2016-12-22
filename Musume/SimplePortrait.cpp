#include "SimplePortrait.h"
#include <glut.h>
#include <math.h>

SimplePortrait::SimplePortrait()
{
	glPushMatrix();//main
		//frame
		glTranslatef(0,5,0);
		glPushMatrix();
			glScalef(10,6,0.1);
			glColor3f(0,0,0);
			glutSolidCube(1);

			glTranslatef(0, 0, -0.3);
			glPushMatrix();//borderTop
				glTranslatef(0,0.5,0);
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

			//Sketches
			glPushMatrix();
			//triangle
				glColor3f(1,0,0);
				glTranslatef(-0.4,0.2,0);
				glBegin(GL_TRIANGLES);
				glVertex3f(0, 0, -0.5);
				glVertex3f(0.2, 0, -0.5);
				glVertex3f(0.1, 0.2, -0.5);
			
				glEnd();
			glPopMatrix();


			glPushMatrix();
				//Quad
				glColor3f(1, 1, 0);
				glTranslatef(0.2, 0.2, 0);
				glBegin(GL_QUADS);
				glVertex3f(0.0, 0.0, -0.5);
				glVertex3f(0.2, 0, -0.5);
				glVertex3f(0.2, 0.2, -0.5);
				glVertex3f(0, 0.2, -0.5);
				glEnd();
			glPopMatrix();

			glPushMatrix();
			//circle
			glTranslatef(0.3, -0.25, 0);
			glScalef(1,1.6,1);
			glColor3f(1, 1, 1);
			glBegin(GL_POLYGON);
			for (int i = 0; i<200; i++)
			{
				float pi = 3.1416;
				float A = (i * 2 * pi) / 100;
				float r = 0.1;
				float x = r * cos(A);
				float y = r * sin(A);
				glVertex3f(x, y,-0.5);
			}
			glEnd();
			glPopMatrix();



			glPushMatrix();
			//Oval
			glTranslatef(-0.3,-0.3,0);
			glColor3f(1, 0, 1);
			glBegin(GL_POLYGON);
			for (int i = 0; i<200; i++)
			{
				float pi = 3.1416;
				float A = (i * 2 * pi) / 100;
				float r = 0.1;
				float x = r * cos(A);
				float y = r * sin(A);
				glVertex3f(x, y, -0.5);
			}
			glEnd();
			glPopMatrix();


			glPushMatrix();
			//Lines
		
			glColor3f(1, 0, 0.5);
			glBegin(GL_LINES);
				glVertex3f(-0.15, 0, -0.5);
				glVertex3f(0.15, 0, -0.5);
				glVertex3f(0, -0.15, -0.5);
				glVertex3f(0.0, 0.15, -0.5);
			glEnd();
			glPopMatrix();

		

		glPopMatrix();


	glPopMatrix();//end main
}


SimplePortrait::~SimplePortrait()
{
}

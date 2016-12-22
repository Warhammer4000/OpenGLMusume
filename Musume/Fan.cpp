#include <stdlib.h>
#include "Fan.h"
#include <iostream>

#include <math.h>
#include <GL/glut.h>
#define M_PI 3.14159265

#include "Light.h"

void drawHalfSphere() {
	int i, j;
	int scaley=20, scalex=20;
	GLfloat r = 1.2;
	GLfloat v[20*20][3];

	for (i = 0; i<scalex; ++i) {
		for (j = 0; j<scaley; ++j) {
			v[i*scaley + j][0] = r*cos(j * 2 * M_PI / scaley)*cos(i*M_PI / (2 * scalex));
			v[i*scaley + j][1] = r*sin(i*M_PI / (2 * scalex));
			v[i*scaley + j][2] = r*sin(j * 2 * M_PI / scaley)*cos(i*M_PI / (2 * scalex));
		}
	}

	glBegin(GL_QUADS);
	for (i = 0; i<scalex - 1; ++i) {
		for (j = 0; j<scaley; ++j) {
			glVertex3fv(v[i*scaley + j]);
			glVertex3fv(v[i*scaley + (j + 1) % scaley]);
			glVertex3fv(v[(i + 1)*scaley + (j + 1) % scaley]);
			glVertex3fv(v[(i + 1)*scaley + j]);
		}
	}
	glEnd();
}
double FanRotate=0;

void rotateFan() {
	FanRotate += 8.0f;
	if (FanRotate > 360) {
		FanRotate -= 360;
	}
}

void DrawFan()
{
	glPushMatrix();

	glTranslatef(0, 0, 2.8);
	glRotatef(180, 1, 0, 0);


	EnableLight();
	SetDiffuse(1,1,1);
	glutSolidCone(1, 1, 20, 20);


	glPopMatrix();

	rotateFan();
	glRotatef(FanRotate, 0, 0, 1);//To roate the fan
	glPushMatrix(); //Save the transformations performed thus far


		glPushMatrix();
		//center ball
		glPushMatrix();



		glRotatef(-90, 1, 0, 0);
		glTranslatef(0, -.05, 0);



		SetDiffuse(0.8, 0.1, 0.8);
		drawHalfSphere();

		glPopMatrix();




		//Holder
		glPushMatrix();

		GLUquadricObj *quadratic;
		quadratic = gluNewQuadric();
		glRotatef(-90.0f, 0.0f, 0.0f, 1.0f);


		SetDiffuse(0.1, 0.8, 0.1);
		gluCylinder(quadratic, 0.1, 0.1, 2.0, 32, 32);


			//blades
			glPopMatrix();

			glPushMatrix();
			glRotatef(-30, 0, 0, 1);
			glTranslatef(1, 0, 0);
			glScalef(4, 1, .1);



			glutSolidCube(1);

			glPopMatrix();

			glPushMatrix();
			glRotatef(30, 0, 0, 1);
			glTranslatef(-1, 0, 0);
			glScalef(4, 1, .1);



			glutSolidCube(1);

			glPopMatrix();

			glPushMatrix();
			glRotatef(-90, 0, 0, 1);
			glTranslatef(-1, 0, 0);
			glScalef(4, 1, .1);


			glutSolidCube(1);

			glPopMatrix();
		glPopMatrix();
		DisableLight();


	glPopMatrix();

}


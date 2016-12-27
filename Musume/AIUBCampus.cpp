#include "AIUBCampus.h"
#include <glut.h>
#include "Light.h"

AIUBCampus::AIUBCampus()
{
	glPushMatrix();//main push
		//base Pipe
		glPushMatrix();
			GLUquadricObj *quadratic;
			quadratic = gluNewQuadric();
			glTranslatef(0,-0.5,0);
			glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);

			LightReset();
			EnableLight();
			SetDiffuse(1,1,1);
			gluCylinder(quadratic, 1, 1, 1.0, 32, 32);
			
			glColor3f(0.5, 0.5, 0);
			glPopMatrix();
			//1st floor Cover
			glPushMatrix();
				glTranslatef(0,0.5,0);
				glScalef(1,0.1,1);
				glutSolidSphere(1,20,20);
			glPopMatrix();

			//RoofCover
			glPushMatrix();
				glTranslatef(0,2.45, 0);
				glScalef(1, 0.1, 1);
				glutSolidSphere(0.6, 20, 20);
			glPopMatrix();



			//Top Sphere Circle
			glPushMatrix();
				glTranslatef(0, 2.8, 0);
				glScalef(1, 0.1, 1);
				glutSolidSphere(0.5, 20, 20);
			glPopMatrix();

			glPushMatrix();
			//main door
				glScalef(1,0.5,1);
				glTranslatef(0,-.5,-1);
				glutSolidCube(1);

			glPopMatrix();

			glPushMatrix();
			//longpipe
			quadratic = gluNewQuadric();
			glTranslatef(0, -0.5, 0);
			glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);



			SetDiffuse(1, 1, 1);
			gluCylinder(quadratic, 0.4, 0.4, 3.0, 32, 32);

			glColor3f(0.5, 0.5, 0);
			glPopMatrix();


			glPushMatrix();
			quadratic = gluNewQuadric();
			glTranslatef(0, 0.9, 0);
			glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);



			SetDiffuse(1, 1, 1);

			//head
			gluCylinder(quadratic, 0.6, 0.6, 1.6, 32, 32);

			glColor3f(0.5, 0.5, 0);
			glPopMatrix();



			glPushMatrix();

			glTranslatef(0,2.8,0);
			glutSolidSphere(0.3,20,20);

			glPopMatrix();


			//outer Egg1
			glPushMatrix();
				glTranslatef(2, 0, -1);
				glutSolidSphere(0.4, 20, 20);

			glPopMatrix();
			//connector
			glPushMatrix();
			

			glRotatef(120,0,1,0);
			gluCylinder(quadratic, 0.1, 0.1, 2.5, 32, 32);

			glPopMatrix();

			//egg2
			glPushMatrix();
			glTranslatef(3, 0, 1);
			glutSolidSphere(0.6, 20, 20);

			glPopMatrix();

			glPushMatrix();


			glRotatef(70, 0, 1, 0);
			gluCylinder(quadratic, 0.1, 0.1, 3, 32, 32);

			glPopMatrix();


			DisableLight();


	glPopMatrix();//mainpop


}


AIUBCampus::~AIUBCampus()
{
}

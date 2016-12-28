#include "AIUBCampus.h"
#include <gl/glut.h>
#include "Light.h"

AIUBCampus::AIUBCampus()
{
	glPushMatrix();//main push
	   
				   
	glPushMatrix();
	glPushMatrix();
	//Base

	glTranslatef(0, -1, 0);
	glScalef(8, 1, 5);
	EnableLight();
	SetDiffuse(0.8, 0.8, 0.8);


	glutSolidCube(1);
	DisableLight();
	glPopMatrix();
				   //base Pipe
		glPushMatrix();	
			GLUquadricObj *quadratic;
			quadratic = gluNewQuadric();
			glTranslatef(0,-0.5,0);
			glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
			SetLightPosition(1,10,-1);
			LightReset();
			EnableLight();
			SetDiffuse(1,0.8,0);
			gluCylinder(quadratic, 1, 1, 1.0, 32, 32);
			
			glColor3f(0.5, 0.5, 0);
			glPopMatrix();
			//1st floor Cover
			glPushMatrix();
			SetDiffuse(0,0.59,0);
				glTranslatef(0,0.5,0);
				glScalef(1,0.1,1);
				glutSolidSphere(1,20,20);
			glPopMatrix();

			//RoofCover
			glPushMatrix();
			SetDiffuse(1,0.5,0.5);
				glTranslatef(0,2.5, 0);
				glScalef(1, 0.1, 1);
				glutSolidSphere(0.6, 20, 20);
			glPopMatrix();


			SetDiffuse(1, 0.8, 0);
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



		
			gluCylinder(quadratic, 0.4, 0.4, 3.0, 32, 32);

			glColor3f(0.5, 0.5, 0);
			glPopMatrix();

			glPushMatrix();
			quadratic = gluNewQuadric();
			glTranslatef(0, 0.9, 0);
			glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);

			//headPipe
			gluCylinder(quadratic, 0.6, 0.6, 1.6, 32, 32);

			glPopMatrix();
			
			//HeadSphere
			glPushMatrix();

			glTranslatef(0, 2.8, 0);
			glutSolidSphere(0.3, 20, 20);

			glPopMatrix();


			//head strips
	

			glPushMatrix();
			SetDiffuse(0.1, 0.8, 1);
			glTranslatef(0, 2.4, 0);
			glScalef(1, 0.1, 1);
			glutSolidSphere(0.7, 20, 20);
			glPopMatrix();

			glPushMatrix();
				SetDiffuse(0.1,0.8,1);
				glTranslatef(0, 2.2, 0);
				glScalef(1, 0.1, 1);
				glutSolidSphere(0.7, 20, 20);
			glPopMatrix();



			glPushMatrix();
			SetDiffuse(0.1, 0.8, 1);
			glTranslatef(0, 2, 0);
			glScalef(1, 0.1, 1);
			glutSolidSphere(0.7, 20, 20);
			glPopMatrix();
		
			glPushMatrix();
			SetDiffuse(0.1, 0.8, 1);
			glTranslatef(0, 1.8, 0);
			glScalef(1, 0.1, 1);
			glutSolidSphere(0.7, 20, 20);
			glPopMatrix();


			glPushMatrix();
			SetDiffuse(0.1, 0.8, 1);
			glTranslatef(0, 1.6, 0);
			glScalef(1, 0.1, 1);
			glutSolidSphere(0.7, 20, 20);
			glPopMatrix();


			glPushMatrix();
			SetDiffuse(0.1, 0.8, 1);
			glTranslatef(0, 1.4, 0);
			glScalef(1, 0.1, 1);
			glutSolidSphere(0.7, 20, 20);
			glPopMatrix();


			glPushMatrix();
			SetDiffuse(0.1, 0.8, 1);
			glTranslatef(0, 1.2, 0);
			glScalef(1, 0.1, 1);
			glutSolidSphere(0.7, 20, 20);
			glPopMatrix();


			glPushMatrix();
			SetDiffuse(0.1, 0.8, 1);
			glTranslatef(0, 1, 0);
			glScalef(1, 0.1, 1);
			glutSolidSphere(0.7, 20, 20);
			glPopMatrix();


			SetDiffuse(1, 0.8, 0);
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

			glPushMatrix();


			glRotatef(70, 0, 1, 0);
			gluCylinder(quadratic, 0.1, 0.1, 3, 32, 32);

			glPopMatrix();


			//egg2
			glPushMatrix();
			glTranslatef(3, 0, 1);
			glutSolidSphere(0.6, 20, 20);
			glTranslatef(0, 0.1, -0.45);
			SetDiffuse(1,1,1);
			glutSolidSphere(0.2, 20, 20);
			glPopMatrix();

			
			LightReset();

			DisableLight();


			glPopMatrix();

	glPopMatrix();//mainpop


}


AIUBCampus::~AIUBCampus()
{
}

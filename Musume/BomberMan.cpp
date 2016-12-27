#include "BomberMan.h"
#include <GL/glut.h>
#include "Light.h"


double _bombermanRotation = 0;

void rotateModel() {
	_bombermanRotation += 2.0f;
	if (_bombermanRotation > 360) {
		_bombermanRotation -= 360;
	}
}


void drawBomberMan() {

	glPushMatrix();
		glPushMatrix();
		//Base

			glTranslatef(0,-1,0);
			glScalef(1,0.2,1);
			EnableLight();
			SetDiffuse(0.8, 0.8, 0.8);
			
	
			glutSolidCube(1);
			DisableLight();
     glPopMatrix();
		rotateModel();
		glRotatef(_bombermanRotation,0,1,0);
    glPushMatrix();//main
		GLUquadricObj *quadratic;
		quadratic = gluNewQuadric();

		//body

		EnableLight();
		SetDiffuse(0,0,1);
		SetSpecuilar(1, 1, 1);
		SetAmbient(0.2, 0.2, 0.2);
		SetEmision(0.1, 0.1, 0.1);
		SetShininess(70);
		glutSolidSphere(0.4, 20, 20);

		
		glPushMatrix();
		//belt

		glRotatef(90, 1, 0, 0);
		//glColor3f(1, 0, 0);


		SetDiffuse(1, 0, 0);
		glutSolidTorus(0.065, 0.4, 10, 10);

		glPopMatrix();

		glPopMatrix();

		glPushMatrix();
		//Arm_L


		//glColor3f(1, 1, 1);
		glRotatef(90, 0, 1, 0);
		glRotatef(30, 1, 0, 0);
		glScalef(0.5, 0.6, 0.3);
		glTranslatef(0, 0.5, 0);

		SetDiffuse(1,1,1);
		gluCylinder(quadratic, 0.1, 0.1, 2.0, 32, 32);


		glPopMatrix();

		glPushMatrix();
		//Arm_L_Hand
		//glColor3f(0.8, 0.1, 0.8);



		glTranslatef(0.6, 0, 0);

		SetDiffuse(0.8, 0.1, 0.8);
		glutSolidSphere(0.15, 20, 20);


		glPopMatrix();




		glPushMatrix();
		//Arm_R



		glRotatef(-90, 0, 1, 0);
		glRotatef(30, 1, 0, 0);
		glScalef(-0.5, 0.6, 0.3);
		glTranslatef(0, 0.5, 0);

		SetDiffuse(1,1,1);
		gluCylinder(quadratic, 0.1, 0.1, 2.0, 32, 32);

		glPopMatrix();



		glPushMatrix();
		//Arm_R_joint
		//glColor3f(1, 1, 1);
		glRotatef(-90, 0, 1, 0);
		glRotatef(-30, 1, 0, 0);
		glScalef(-0.5, 0.6, 0.3);
		glTranslatef(0, -0.55, 1.7);



		gluCylinder(quadratic, 0.1, 0.1, 2.0, 32, 32);


		glPopMatrix();

		glPushMatrix();
		//Arm_R_Hand

		//glColor3f(0.8, 0.1, 0.8);
		glTranslatef(-1, 0.25, 0);



		SetDiffuse(0.8, 0.1, 0.8);
		glutSolidSphere(0.15, 20, 20);


		//bomb
		//glColor3f(0, 0, 0);
		glTranslatef(0, 0.25, 0);



		SetDiffuse(0,0,0);
		glutSolidSphere(0.25, 20, 20);
		//bomb header

		glTranslatef(0, 0.2, 0);


		
		glutSolidCube(0.2);

		//Cyllinder
		glPushMatrix();

		//glColor3f(1, 1, 1);
		glRotatef(90, 1, 0, 0);
		glTranslatef(0, 0, -0.2);



		SetDiffuse(1,1,1);
		gluCylinder(quadratic, 0.05, 0.05, 0.3, 32, 32);

		glPopMatrix();

		//Cone
		glPushMatrix();
		//glColor3f(1, 1, 0);

		glTranslatef(0, 0.2, 0);

		glRotatef(90, 1, 0, 0);



		SetDiffuse(1,1,0);
		glutSolidCone(0.1, 0.08, 20, 20);



		glTranslatef(0, 0, -0.02);



		SetDiffuse(1, 0, 0);
		glutSolidCone(0.11, 0.08, 20, 20);
		
		glPopMatrix();


		glPopMatrix();


		//head
		glPushMatrix();




		//glColor3f(1, 1, 1);
		glTranslatef(0, 0.6, 0);




		SetDiffuse(1, 1,1);
		glutSolidCube(0.6);

		glPopMatrix();
		//face
		glPushMatrix();

		//glColor3f(1, 1, 0);
		glTranslatef(0.0, 0.6, -0.1);




		SetDiffuse(1, 1, 0);
		glutSolidCube(0.55);

		glPopMatrix();

		glPushMatrix();
		//Eye_L




		//glColor3f(0, 0, 0);
		glScalef(0.5, 2, 1);
		glTranslatef(-0.2, 0.3, -0.4);




		SetDiffuse(0, 0, 0);
		glutSolidSphere(0.07, 20, 20);


		glPopMatrix();

		glPushMatrix();
		//Eye_L_brow

		glRotatef(-45, 0, 0, 1);

		glPushMatrix();



		glScalef(1.5, 0.5, 0.4);

		glTranslatef(-0.5, 1, -1);




	
		glutSolidCube(0.2);

		glPopMatrix();



		glPopMatrix();








		glPushMatrix();

		//Eye_R



		glScalef(0.5, 2, 1);
		glTranslatef(0.2, 0.3, -0.4);



		glutSolidSphere(0.07, 20, 20);

		glPopMatrix();



		glPushMatrix();
		//Eye_R_brow

		glRotatef(45, 0, 0, 1);
		glPushMatrix();



		glScalef(1.5, 0.5, 0.4);

		glTranslatef(0.5, 1, -1);



		glutSolidCube(0.2);


		glPopMatrix();



		glPopMatrix();




		//Ball on head
		glPushMatrix();

		//glColor3f(0.8, 0.1, 0.8);
		glTranslatef(-0.2, 1, 0);




		SetDiffuse(0.8, 0.1, 0.8);
		glutSolidSphere(0.15, 20, 20);
		glPopMatrix();



		glPushMatrix();
		//leg_L


		glTranslatef(-0.2, -0.3, 0);
		glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
		glScalef(0.5, 1, 0.2);




		SetDiffuse(1, 1, 1);
		gluCylinder(quadratic, 0.1, 0.1, 2.0, 32, 32);

		glPopMatrix();
		glPushMatrix();
		//Leg_L_feet


		glTranslatef(-0.2, -0.7, 0);



		SetDiffuse(0.8, 0.1, 0.8);
		glutSolidSphere(0.16, 20, 20);

		glPopMatrix();


		glPushMatrix();
		//leg_R




	
		glTranslatef(0.2, -0.3, 0);
		glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
		glScalef(0.5, 1, 0.2);


		SetDiffuse(1, 1, 1);
		gluCylinder(quadratic, 0.1, 0.1, 2.0, 32, 32);


		glPopMatrix();
		glPushMatrix();
		//Leg_R_feet




		glTranslatef(0.2, -0.7, 0);


		SetDiffuse(0.8, 0.1, 0.8);
		glutSolidSphere(0.16, 20, 20);
		DisableLight();
		glPopMatrix();




		glPopMatrix();

	glPopMatrix();//main end

	glPopMatrix();
}

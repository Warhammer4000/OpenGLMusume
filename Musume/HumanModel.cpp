#include "HumanModel.h"
#include<glut.h>
#include "Light.h"
double _humanModelRotation = 0;

void rotateHumanModel() {
	_humanModelRotation += 2.0f;
	if (_humanModelRotation > 360) {
		_humanModelRotation -= 360;
	}
}



HumanModel::HumanModel()
{
	glPushMatrix();
	glPushMatrix();
	//Base

	glTranslatef(0, -1, 0);
	glScalef(1, 0.2, 1);
	EnableLight();
	SetDiffuse(0.8, 0.8, 0.8);
	SetSpecuilar(1, 1, 1);
	SetEmision(0.3, 0.3, 0.3);
	glutSolidCube(1);
	DisableLight();
	glPopMatrix();

	rotateHumanModel();
		glRotatef(_humanModelRotation, 0, 1, 0);
		glTranslatef(0,1,0);
	glPushMatrix();
	//body

	glColor3f(1, 1, 0);
	glScalef(2, 2.5, 1.5);
	glutSolidCube(0.5);


	glPopMatrix();

	glPushMatrix();
	//Head
	glColor3f(1, 0, 0);
	glTranslatef(0, .9, 0);
	glutSolidCube(0.5);


	glPopMatrix();

	glPushMatrix();
	//L_Arm
	//Upper
	glColor3f(0, 1, 0);
	glTranslatef(-0.65, .3, 0);
	glScalef(1, 1.9, 1);
	glutSolidCube(0.3);

	glPopMatrix();

	glPushMatrix();
	//L_Arm
	//Lower
	glColor3f(0, 1, 1);
	glTranslatef(-0.65, -.1, 0);
	glScalef(.5, 1.9, 0.9);
	glutSolidCube(0.3);




	glPopMatrix();


	glPushMatrix();
	//R_Arm
	//Upper
	glColor3f(0, 1, 0);
	glTranslatef(0.65, .3, 0);
	glScalef(1, 1.9, 1);
	glutSolidCube(0.3);

	glPopMatrix();

	glPushMatrix();
	//R_Arm
	//Lower
	glColor3f(0, 1, 1);
	glTranslatef(0.65, -.1, 0);
	glScalef(.5, 1.9, 0.9);
	glutSolidCube(0.3);




	glPopMatrix();

	glPushMatrix();
	//L_leg
	//Upper
	glColor3f(1, 1, 1);
	glTranslatef(-0.2, -.9, 0);
	glScalef(1, 1.9, 1);
	glutSolidCube(0.3);

	glPopMatrix();

	glPushMatrix();
	//L_Leg
	//Lower
	glColor3f(1, 0, 1);
	glTranslatef(-0.2, -1.4, 0);
	glScalef(.4, 1.9, 0.9);
	glutSolidCube(0.3);




	glPopMatrix();

	glPushMatrix();
	//R_leg
	//Upper
	glColor3f(1, 1, 1);
	glTranslatef(0.2, -.9, 0);
	glScalef(1, 1.9, 1);
	glutSolidCube(0.3);

	glPopMatrix();

	glPushMatrix();
	//R_Leg
	//Lower
	glColor3f(1, 0, 1);
	glTranslatef(0.2, -1.4, 0);
	glScalef(.4, 1.9, 0.9);
	glutSolidCube(0.3);




	glPopMatrix();




	glPopMatrix();
}


HumanModel::~HumanModel()
{
}

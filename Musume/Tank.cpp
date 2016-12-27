#include "Tank.h"
#include <glut.h>
#include "Light.h"


double TankRotate = 0;

void Tank::rotateTank() {
	TankRotate += 2.0f;
	if (TankRotate > 360) {
		TankRotate -= 360;
	}
}


Tank::Tank()
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

	glPushMatrix();//final push
	rotateTank();
	glRotatef(TankRotate,0,1,0);
	glTranslatef(0, -0.3, 0);
	glPushMatrix();
	EnableLight();
	SetDiffuse(0,1,0);
	TankBody();
	glPopMatrix();


	glPushMatrix();
	SetDiffuse(0.5, 1, 0.6);
	Turret();
	glPopMatrix();

	glPushMatrix();

	SetDiffuse(0, 1, 1);
	glPushMatrix();
	glTranslatef(1, 0, 0);
	glScalef(.45, .45, .45);
	TankTire();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(.58, 0, 0);
	glScalef(.45, .45, .45);
	TankTire();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(.17, 0, 0);
	glScalef(.45, .45, .45);
	TankTire();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-.25, 0, 0);
	glScalef(.45, .45, .45);
	TankTire();
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();//final pop
	DisableLight();
	glPopMatrix();//animate and config pop
}


Tank::~Tank()
{
}


void Tank::TankTire() {

	//Front Right
	glPushMatrix();
	glTranslatef(-.7, -.35, -1.25);
	glScalef(1.8, 1.8, 2);
	glPushMatrix();
	glutSolidTorus(.06, .2, 25, 25);
	glPopMatrix();

	glPushMatrix();
	glScalef(3, .3, 1);
	glPushMatrix();
	glutSolidCube(.1);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glRotatef(90, 0, 0, 1);
	glScalef(3, .3, 1);
	glPushMatrix();
	glutSolidCube(.1);
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();


	//Front Left
	glPushMatrix();
	glTranslatef(-.7, -.35, 1.25);
	glScalef(1.8, 1.8, 2);

	glPushMatrix();
	glutSolidTorus(.06, .2, 25, 25);
	glPopMatrix();

	glPushMatrix();
	glScalef(3, .3, 1);
	glPushMatrix();
	glutSolidCube(.1);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glRotatef(90, 0, 0, 1);
	glScalef(3, .3, 1);
	glPushMatrix();
	glutSolidCube(.1);
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();
}
void Tank::TankBody() {
	glPushMatrix();
	glScalef(1, .7, .7);
	//Body Middle
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	glPushMatrix();
	glScalef(3, 1.4, 3);
	glutSolidCube(.5);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(.73, -.03, 0);
	glRotatef(-20, 0, 0, 1);
	glPushMatrix();
	glScalef(.5, 1.2, 3);
	glutSolidCube(.5);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(.65, 0, 0);
	glRotatef(-35, 0, 0, 1);
	glPushMatrix();
	glScalef(.5, 1.4, 3);
	glutSolidCube(.5);
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();

}
void Tank::TankFireSystem() {
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();

	glPushMatrix();
	glTranslatef(0, -.05, 0);
	//For Rotation and Fitting With Body
	glPushMatrix();
	glTranslatef(0, .75, 0);
	glRotatef(90, 0, 1, 0);
	//Box
	glPushMatrix();
	glScalef(2, 1.2, 3);
	glutSolidCube(.2);
	glPopMatrix();

	//Cylinder
	glPushMatrix();
	glTranslatef(0, .05, 0);
	glScalef(1, 1, 32);
	glPushMatrix();
	glScalef(.04, .04, .04);
	gluCylinder(quadratic, .5, .5, 1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	//Cylinder
	glPushMatrix();
	glTranslatef(0, -.05, 0);
	glScalef(1, 1, 32);
	glPushMatrix();
	glScalef(.04, .04, .04);
	gluCylinder(quadratic, .5, .5, 1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	//Cylinder
	glPushMatrix();
	glTranslatef(.05, 0, 0);
	glScalef(1, 1, 32);
	glPushMatrix();
	glScalef(.04, .04, .04);
	gluCylinder(quadratic, .5, .5, 1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	//Cylinder
	glPushMatrix();
	glTranslatef(-.05, 0, 0);
	glScalef(1, 1, 32);
	glPushMatrix();
	glScalef(.04, .04, .04);
	gluCylinder(quadratic, .5, .5, 1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	//Rings
	glPushMatrix();
	glTranslatef(0, 0, 1.22);
	glScalef(.77, .77, .5);
	glPushMatrix();
	glutSolidTorus(.006, .1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 1.18);
	glScalef(.77, .77, .5);
	glPushMatrix();
	glutSolidTorus(.006, .1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, .9);
	glScalef(.77, .77, .5);
	glPushMatrix();
	glutSolidTorus(.006, .1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, .33);
	glScalef(.77, .77, 5);
	glPushMatrix();
	glutSolidTorus(.006, .1, 25, 25);
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
}
void Tank::TankBodyFireJoin()
{
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();
	//Circle join
	glPushMatrix();
	glPushMatrix();
	glTranslatef(0, .45, 0);
	glRotatef(90, 1, 0, 0);
	glScalef(1.5, 1.5, 1.5);
	glutSolidTorus(.06, .2, 25, 25);
	glPopMatrix();

	//Cylinder join
	glPushMatrix();
	glTranslatef(0, .65, 0);
	glRotatef(90, 1, 0, 0);
	gluCylinder(quadratic, .14, .14, .2, 25, 25);
	glPopMatrix();
	glPopMatrix();
}
void Tank::Turret()
{
	glPushMatrix();
	glTranslatef(0, -.05, 0);
	glScalef(.8, .8, .8);
	TankBodyFireJoin();
	TankFireSystem();
	glPopMatrix();
}


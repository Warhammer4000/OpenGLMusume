#include "CristmasTree.h"
#include <glut.h>
#include "Light.h"


double LightBugLOL = 0;

void rotateLight() {
	LightBugLOL += 3.0f;
	if (LightBugLOL > 360) {
		LightBugLOL -= 360;
	}
}


CristmasTree::CristmasTree()
{

	glPushMatrix();
	GLUquadricObj *quadratic;
	quadratic = gluNewQuadric();
	EnableLight();
	glPushMatrix();
	glScalef(.2, .2, .2);

	glPushMatrix();
	glTranslatef(0, -1.5, 0);
	glRotatef(-90, 1, 0, 0);
	SetDiffuse(0.8, .3, .3);
	SetAmbient(0.8, .3, .3);
    SetShininess(100);
	gluCylinder(gluNewQuadric(), .2, .2, 3, 20, 20);
	glPopMatrix();

	glPushMatrix();
	SetDiffuse(0.2, .7, .2 );
	SetAmbient(0.2, .6, .2);
	SetShininess(100);
	glTranslatef(0, 0, 0);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(1, 2, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, .5, 0);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(1, 2, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(1, 2, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 1.5, 0);
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(1, 2, 20, 20);
	
	glPopMatrix();

	rotateLight();
	glRotatef(LightBugLOL, 0, 1, 0);
	glPushMatrix();
	
	DisableLight();
	glColor3f(1,0.1,0.1);
	SetDiffuse(1, 0.1, 0.1);
	SetSpecuilar(1, 1, 1);
	SetAmbient(0.2, 0.2, 0.2);
	SetEmision(0.1, 0.1, 0.1);
	SetShininess(70);
	glTranslatef(0, 3.5, 0);
	glScalef(.25, .25, .25);
	LightReset();
	SetLightPosition(0,5,-5);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.10, 0.82, 1.00);
	SetDiffuse(0.10, 0.82, 1.00); 

	glTranslatef(1, .5, 0);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 0.1, 1.00);
	SetDiffuse(1, 0.1, 1);
	glTranslatef(-1, .5, 0);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, .1);
	SetDiffuse(1, 1, 0.1);
	glTranslatef(0, .5, 1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.10, 0.82, 1.00);
	SetDiffuse(0.10, 0.82, 1.00);
	glTranslatef(0, .5, -1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 0.1, 1.00);
	SetDiffuse(1, 0.1, 1);
	glRotatef(45, 0, 1, 0);
	glTranslatef(-1, 1, 0);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0.1);
	SetDiffuse(1, 1, 0.1);
	glRotatef(45, 0, 1, 0);
	glTranslatef(0, 1, 1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(0.10, 0.82, 1.00);
	SetDiffuse(0.10, 0.82, 1.00);
	glRotatef(45, 0, 1, 0);
	glTranslatef(0, 1, -1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);

	glPopMatrix();

	glPushMatrix();
	
	glRotatef(45, 0, 1, 0);
	glTranslatef(0, 1, -1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);

	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 0.1, 1.00);
	SetDiffuse(1, 0.1, 1);
	glRotatef(90, 0, 1, 0);
	glTranslatef(-1, 1.5, 0);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1,1,0.1);
	SetDiffuse(1, 1, 0.1);
	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 1.5, 1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.10, 0.82, 1.00);
	SetDiffuse(0.10, 0.82, 1.00);

	glRotatef(90, 0, 1, 0);
	glTranslatef(0, 1.5, -1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();

	glPushMatrix();

	glRotatef(90, 0, 1.5, 0);
	glTranslatef(0, 1.5, -1);
	glScalef(.2, .2, .2);
	glutSolidSphere(1, 20, 20);
	glPopMatrix();
	DisableLight();
	LightReset();
	glPopMatrix();
	glPopMatrix();
	
}


CristmasTree::~CristmasTree()
{
}

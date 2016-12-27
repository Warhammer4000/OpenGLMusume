#include "Light.h"
#include <GL/glut.h>


Light::Light()
{
}


Light::~Light()
{
}

void SetLightPosition(GLfloat x, GLfloat y, GLfloat z)
{
	GLfloat position[] = { 1, 2, 1, 1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, position);

}
void SetAmbient(GLfloat x, GLfloat y, GLfloat z)
{
	GLfloat mat_ambient_color[] = { x, y, z, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient_color);
}
void SetDiffuse(GLfloat x, GLfloat y, GLfloat z)
{
	GLfloat mat_diffuse[] = { x, y, z, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);

}
void SetSpecuilar(GLfloat x, GLfloat y, GLfloat z)
{
	GLfloat mat_specular[] = { x,y,z, 1.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_specular);
}
void SetShininess(GLfloat x)
{
	GLfloat shine[] = { x };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, shine);
}
void SetEmision(GLfloat x, GLfloat y, GLfloat z)
{
	GLfloat mat_emission[] = { x, y, z, 1 };
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
}

void EnableLight() {
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
}

void DisableLight() {
	glDisable(GL_LIGHTING);
	glDisable(GL_LIGHT0);
}


void LightReset()
{
	GLfloat mat_ambient[] = { 0, 0, 0, 1.0 };
	GLfloat mat_diffuse[] = { 1, 1, 1, 1.0 };
	GLfloat mat_specular[] = { 0, 0, 0, 1.0 };
	GLfloat shininess[] = { 0 };
	GLfloat mat_emission[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat position[] = {2,20, 0.0, 0.0 };
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
	glLightfv(GL_LIGHT0, GL_POSITION, position);
}
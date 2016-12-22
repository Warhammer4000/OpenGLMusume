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
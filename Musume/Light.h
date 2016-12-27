#pragma once
#include <GL\glut.h>
class Light
{
public:
	Light();
	~Light();
	
};

void SetLightPosition(GLfloat x, GLfloat y, GLfloat z);
void SetAmbient(GLfloat x, GLfloat y, GLfloat z);
void SetDiffuse(GLfloat x, GLfloat y, GLfloat z);
void SetSpecuilar(GLfloat x, GLfloat y, GLfloat z);
void SetShininess(GLfloat x);
void SetEmision(GLfloat x, GLfloat y, GLfloat z);
void EnableLight();
void DisableLight();
void LightReset();
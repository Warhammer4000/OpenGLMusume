#include "TexturedSphere.h"



TexturedSphere::TexturedSphere(GLuint texture,float radius)
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	GLUquadricObj *quadric1;
	quadric1 = gluNewQuadric();
	gluQuadricNormals(quadric1, GLU_SMOOTH);
	gluQuadricTexture(quadric1, GL_TRUE);

	glPushMatrix();
		gluSphere(quadric1, radius, 30, 30);
	glPopMatrix();


}


TexturedSphere::~TexturedSphere()
{
}

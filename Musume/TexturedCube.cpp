#include "TexturedCube.h"
#include "imageloader.h"
#include "Texture.h"


TexturedCube::TexturedCube(GLuint texture,int x,int y)
{


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);


	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);

	glNormal3f(0.0f, 0.0f, 1.0f);

	//front
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);

	glTexCoord2f(0.0, y);
	glVertex3f(1.0, 0.0, 0.0);

	glTexCoord2f(x, y);
	glVertex3f(1.0, 1.0, 0.0);

	glTexCoord2f(x, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	//back
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.0, 0.0, -1.0);

	glTexCoord2f(0.0, y);
	glVertex3f(1.0, 0.0, -1.0);

	glTexCoord2f(x, y);
	glVertex3f(1.0, 1.0, -1.0);

	glTexCoord2f(x, 0.0);
	glVertex3f(0.0, 1.0, -1.0);


	//top
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glTexCoord2f(0.0, y);
	glVertex3f(1.0, 1.0, 0.0);

	glTexCoord2f(x, y);
	glVertex3f(1.0, 1.0, -1.0);

	glTexCoord2f(x, 0.0);
	glVertex3f(0.0, 1.0, -1.0);


	//bot
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);

	glTexCoord2f(0.0, y);
	glVertex3f(1.0, 0.0, 0.0);

	glTexCoord2f(x, y);
	glVertex3f(1.0, 0.0, -1.0);

	glTexCoord2f(x, 0.0);
	glVertex3f(0.0, 0.0, -1.0);

	//Left
	glTexCoord2f(0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);

	glTexCoord2f(0.0, y);
	glVertex3f(0.0, 0.0, -1.0);

	glTexCoord2f(x, y);
	glVertex3f(0.0, 1.0, -1.0);

	glTexCoord2f(x, 0.0);
	glVertex3f(0.0, 1.0, 0.0);


	//right
	glTexCoord2f(0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);

	glTexCoord2f(0.0, y);
	glVertex3f(1.0, 0.0, -1.0);

	glTexCoord2f(x, y);
	glVertex3f(1.0, 1.0, -1.0);

	glTexCoord2f(x, 0.0);
	glVertex3f(1.0, 1.0, 0.0);



	glEnd();

	glPopMatrix();
}


TexturedCube::~TexturedCube()
{
}

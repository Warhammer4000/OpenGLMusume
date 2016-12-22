#pragma once
#include "Texture.h"
#include <GL\glut.h>

#include "imageloader.h"
class Texture
{
public:
	Texture();
	~Texture();
};

GLuint loadTexture(Image* image);
void lightSetting();
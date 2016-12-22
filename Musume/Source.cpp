#include <stdlib.h>

#include <iostream>

#include <math.h>


#include <GL/glut.h>

#include "Texture.h"
#include "imageloader.h"
#include "TexturedCube.h"
#include "TexturedSphere.h"
#include "floor.h"
#include "GlobalConstants.h"

using namespace std;

float _angle = 0.0;
static float model_rotation = 0;
float xpos = 0, ypos = 0, zpos = 0, xrot = 0, yrot = 0, angle = 0.0;
float cRadius = -3.0f;
float lastx, lasty;



Image* image;

void keyboard(unsigned char key, int x, int y) {

	if (key == 'q')//zoom out
	{
		cRadius -= 2;
	}
	if (key == 'e')//zoom in
	{
		cRadius += 2;

	}


	if (key == 'w')
	{
		float xrotrad, yrotrad;
		yrotrad = (yrot / 180 * 3.141592654f);
		xrotrad = (xrot / 180 * 3.141592654f);
		xpos += float(sin(yrotrad));
		zpos -= float(cos(yrotrad));
		ypos -= float(sin(xrotrad));
	}

	if (key == 's')
	{
		float xrotrad, yrotrad;
		yrotrad = (yrot / 180 * 3.141592654f);
		xrotrad = (xrot / 180 * 3.141592654f);
		xpos -= float(sin(yrotrad));
		zpos += float(cos(yrotrad));
		ypos += float(sin(xrotrad));
	}

	if (key == 'd')
	{
		float yrotrad;
		yrotrad = (yrot / 180 * 3.141592654f);
		xpos += float(cos(yrotrad)) * 0.2;
		zpos += float(sin(yrotrad)) * 0.2;
	}

	if (key == 'a')
	{
		float yrotrad;
		yrotrad = (yrot / 180 * 3.141592654f);
		xpos -= float(cos(yrotrad)) * 0.2;
		zpos -= float(sin(yrotrad)) * 0.2;
	}


}

void mouseMovement(int x, int y) {
	int diffx = x - lastx; //check the difference between the current x and the last x position
	int diffy = y - lasty; //check the difference between the current y and the last y position
	lastx = x; //set lastx to the current x position
	lasty = y; //set lasty to the current y position

	xrot += (float)diffy; //set the xrot to xrot with the additionof the difference in the y position
	yrot += (float)diffx;    //set the xrot to yrot with the additionof the difference in the x position
}



//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(30, (double)w / (double)h, 1.0, 300.0);
}


//Draws the 3D scene
void drawScene() {



	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
					  //glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera



	glTranslatef(0.0, -0.8, -7.0); //Move forward 5 units
	glClearColor(0, 0, 0, 0);




	glTranslatef(0.0f, 0.0f, -cRadius);
	glRotatef(xrot, 1.0, 0.0, 0.0);


	////Place Main character here
	//drawBomberMan();

	//drawMainCharacter();
	
	glRotatef(yrot, 0.0, 1.0, 0.0);  //rotate our camera on the y - axis(up and down)
	glTranslated(-xpos, -5.0f, -zpos); //translate the screen




	glPushMatrix();//world push

	glTranslatef(0, -0.5, 0);

	

		drawFloor();
	



	glPopMatrix();//world pop



	glutSwapBuffers();
}

void update(int value) {
	_angle += 10.0f;
	if (_angle > 360) {
		_angle -= 360;
	}

	model_rotation += 2.0f;
	if (model_rotation > 360) {
		model_rotation -= 360;
	}


	glutPostRedisplay(); //Tell GLUT that the display has changed

						 //Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}


void initTextures() {

	image = loadBMP("floor.bmp");
	floorTexture = loadTexture(image);
	
	image = loadBMP("roof.bmp");
	roofTexture = loadTexture(image);


	image = loadBMP("Wall.bmp");
	wallTexture = loadTexture(image);


	
	image = loadBMP("innerWall.bmp");
	innerWallTexture = loadTexture(image);
	
	image = loadBMP("earth.bmp");
	earthTexture = loadTexture(image);

	image = loadBMP("jupiter.bmp");
	jupiterTexture = loadTexture(image);


	image = loadBMP("mars.bmp");
	marsTexture = loadTexture(image);


	image = loadBMP("mercury.bmp");
	mercuryTexture = loadTexture(image);


	image = loadBMP("moon.bmp");
	moonTexture = loadTexture(image);



	image = loadBMP("sun.bmp");
	sunTexture = loadTexture(image);


	image = loadBMP("venus.bmp");
	venusTexture = loadTexture(image);

	image = loadBMP("saturn.bmp");
	saturnTexture = loadTexture(image);


	delete image;


}

int main(int argc, char** argv) {
	
	
	
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1024, 768);

	//Create the window
	glutCreateWindow("Transformations");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

	glutKeyboardFunc(keyboard);
	glutPassiveMotionFunc(mouseMovement);

	glutTimerFunc(25, update, 0); //Add a timer

	initTextures();



	glutMainLoop();
	return 0;
}









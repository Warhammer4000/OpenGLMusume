#include "SolarSystem.h"
#include <GL\glut.h>
#include <math.h>

#include "TexturedSphere.h"
#include "TexturedCube.h"
#include "Globals.h"
#include "Light.h"
SolarSystem::SolarSystem()
{
}


SolarSystem::~SolarSystem()
{
}
float _angle_S;
float _angle_M;
void updateAngle() {
	_angle_S += 1.0f;
	if (_angle_S > 360) {
		_angle_S -= 360;
	}

	_angle_M += 3.0f;
	if (_angle_M > 360) {
		_angle_M -= 360;
	}

}
void drawSolarSystem()
{
	glPushMatrix();//main end

	glPushMatrix();
	//Base

		glTranslatef(0, -1, 0);
		glScalef(1, 8, 1);
		EnableLight();
		SetDiffuse(0.8,0.8,0.8);
		glutSolidCube(1);
		DisableLight();
	glPopMatrix();

	glTranslatef(0, 5, 0);
	glRotatef(-80, 1, 0, 1);

		glPushMatrix(); //Save the transformations performed thus far

		glPushMatrix();
		//sun
		updateAngle();
		glRotatef(_angle_S, 0, 0, 1);

		TexturedSphere* sun = new TexturedSphere(sunTexture,0.5);
		//glutSolidSphere(0.1,20,20);
		glPopMatrix();

		//1st line
		glBegin(GL_LINE_LOOP);
		for (int i = 0; i<200; i++)
		{
			float pi = 3.1416;
			float A = (i * 2 * pi) / 100;
			float r = 0.8;
			float x = r * cos(A);
			float y = r * sin(A);
			glVertex2f(x, y);
		}
		glEnd();


		glPushMatrix();
		//1st Planet
		glRotatef(_angle_S, 0, 0, 1);
			glPushMatrix();
				glRotatef(_angle_S, 0, 0, 1);
				glTranslatef(0.8, 0, 0);

				TexturedSphere* mercury = new TexturedSphere(mercuryTexture, 0.15);
				//glutSolidSphere(0.1,20,20);
			glPopMatrix();
		glPopMatrix();

		//2nd line

		glBegin(GL_LINE_LOOP);
		for (int i = 0; i<200; i++)
		{
			float pi = 3.1416;
			float A = (i * 2 * pi) / 100;
			float r = 1.20;
			float x = r * cos(A);
			float y = r * sin(A);
			glVertex2f(x, y);
		}
		glEnd();

		glPushMatrix();
		//2st Planet
			glRotatef(_angle_S+50, 0, 0, 1);
				glPushMatrix();
				glRotatef(_angle_S, 0, 0, 1);
				glTranslatef(1.20, 0, 0);

				TexturedSphere* venus = new TexturedSphere(venusTexture, 0.18);
				//glutSolidSphere(0.1,20,20);
			glPopMatrix();
		glPopMatrix();


		//3rdline

		glBegin(GL_LINE_LOOP);
		for (int i = 0; i<200; i++)
		{
			float pi = 3.1416;
			float A = (i * 2 * pi) / 100;
			float r = 1.60;
			float x = r * cos(A);
			float y = r * sin(A);
			glVertex2f(x, y);
		}
		glEnd();


		glPushMatrix();
			//Earth Planet
			glRotatef(_angle_S, 0, 0, 1);
			glPushMatrix();
				glRotatef(_angle_S - 100, 0, 0, 1);
				glTranslatef(1.6, 0, 0);

				TexturedSphere* earth = new TexturedSphere(earthTexture, 0.2);
				glPushMatrix();
					//Moon
					glRotatef(_angle_M+50, 0, 0, 1);
					glPushMatrix();
					glRotatef(_angle_M, 0, 0, 1);
					glTranslatef(0.3, 0, 0);

					TexturedSphere* moon = new TexturedSphere(moonTexture, 0.05);
					//glutSolidSphere(0.1,20,20);
				glPopMatrix();

				glPopMatrix();


			glPopMatrix();

		glPopMatrix();



		//4th line

		glBegin(GL_LINE_LOOP);
		for (int i = 0; i<200; i++)
		{
			float pi = 3.1416;
			float A = (i * 2 * pi) / 100;
			float r = 2.50;
			float x = r * cos(A);
			float y = r * sin(A);
			glVertex2f(x, y);
		}
		glEnd();


		glPushMatrix();
		//4th Planet
			glRotatef(_angle_S, 0, 0, 1);
			glPushMatrix();
				glRotatef(_angle_S - 50, 0, 0, 1);
				glTranslatef(2.5, 0, 0);

				TexturedSphere* mars = new TexturedSphere(marsTexture, 0.21);
				//glutSolidSphere(0.2,20,20);
				glPushMatrix();
					//Moon1
					glRotatef(_angle_M + 50, 0, 0, 1);
					glPushMatrix();
						glRotatef(_angle_M, 0, 0, 1);
						glTranslatef(0.3, 0, 0);

						TexturedSphere* marsMoon = new TexturedSphere(moonTexture, 0.05);
							//glutSolidSphere(0.1,20,20);
					glPopMatrix();


					//Moon2
					glRotatef(_angle_M + 150, 0, 0, 1);
					glPushMatrix();
						glRotatef(_angle_M, 0, 0, 1);
						glTranslatef(0.5, 0, 0);

						TexturedSphere* marsMoon2 = new TexturedSphere(moonTexture, 0.06);
							//glutSolidSphere(0.1,20,20);
					glPopMatrix();

				glPopMatrix();


			glPopMatrix();

		glPopMatrix();


		//5th line

		glBegin(GL_LINE_LOOP);
		for (int i = 0; i<200; i++)
		{
			float pi = 3.1416;
			float A = (i * 2 * pi) / 100;
			float r = 3.00;
			float x = r * cos(A);
			float y = r * sin(A);
			glVertex2f(x, y);
		}
		glEnd();


		glPushMatrix();
			//5th Planet
			glRotatef(_angle_S, 0, 0, 1);
			glPushMatrix();
			glRotatef(_angle_S, 0, 0, 1);
			glTranslatef(3, 0, 0);

			TexturedSphere* jupiter = new TexturedSphere(jupiterTexture, 0.3);
			//glutSolidSphere(0.1,20,20);
			glPopMatrix();
		glPopMatrix();



		//6th line

		glBegin(GL_LINE_LOOP);
		for (int i = 0; i<200; i++)
		{
			float pi = 3.1416;
			float A = (i * 2 * pi) / 100;
			float r = 3.50;
			float x = r * cos(A);
			float y = r * sin(A);
			glVertex2f(x, y);
		}
		glEnd();


		glPushMatrix();
		//6th Planet
		glRotatef(_angle_S+90, 0, 0, 1);
		glPushMatrix();
		glRotatef(_angle_S, 0, 0, 1);
		glTranslatef(3.5, 0, 0);

		TexturedSphere* saturn = new TexturedSphere(saturnTexture, 0.3);
		//glutSolidSphere(0.1,20,20);
		glPopMatrix();
		glPopMatrix();


		glPopMatrix();




	glPopMatrix();//main end
}

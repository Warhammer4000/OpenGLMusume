#include "Floor.h"
#include <GL\glut.h>
#include "Texture.h"
#include "TexturedCube.h"
#include "Globals.h"
#include "SolarSystem.h"
#include "BomberMan.h"
#include "Fan.h"
#include "SimplePortrait.h"
#include "BatmanLogoFrame.h"
#include "FlashPortrait.h"
#include "HumanModel.h"
#include "Tank.h"
#include "CristmasTree.h"
#include "AIUBCampus.h"
#include "BeizerCurvePortrait.h"
Floor::Floor()
{

}


Floor::~Floor()
{

}

float rotationAngle = 0;
void updateRotation() {
	rotationAngle += 2.0f;
	if (rotationAngle > 360) {
		rotationAngle -= 360;
	}
}



void drawFloor(){
   glPushMatrix();//main
	double width = 250;
	double height = 0.1;
	double lentgh = 250;
	updateRotation();

		glPushMatrix();//floor



			glScalef(lentgh,height,width);
			glColor3f(0.8,0.8,0.8);

            glTranslatef(-0.5,0,0.5);
			TexturedCube* floor = new TexturedCube(floorTexture,50,50);


		glPopMatrix();




		glPushMatrix();//roof
		glColor3f(0.5, 0.5, 0.5);
		glTranslatef(0, 30, 0);
		glScalef(lentgh, height, width);



        glTranslatef(-0.5,0,0.5);
        	TexturedCube* roof = new TexturedCube(roofTexture, 25,25);
		glPopMatrix();





		glPushMatrix();//floorwallE
			glTranslatef(0, 10,width/2);
			glScalef(lentgh, height+32, width/20);

            glTranslatef(-0.5,-0.4,0.5);
			TexturedCube* floorwallE = new TexturedCube(wallTexture, 15, 25);
		glPopMatrix();

		glPushMatrix();//floorwallW
			glTranslatef(0, 10, -width/2);
			glScalef(lentgh, height + 32, width / 20);
             glRotatef(180,0,1,0);
			  glTranslatef(-0.5,-0.4,0.5);
			  TexturedCube* floorwallW = new TexturedCube(wallTexture, 15, 25);
		glPopMatrix();



		glPushMatrix();//floorwallN
			glTranslatef(lentgh/2, 10,0);
			glScalef(lentgh/20, height + 32, width);

			  glTranslatef(-0.5,-0.4,0.5);
			  TexturedCube* floorwallN = new TexturedCube(wallTexture, 15, 25);
		glPopMatrix();


		glPushMatrix();//floorwallS
			glTranslatef(-lentgh / 2, 10, 0);
			glScalef(lentgh / 20, height + 32, width);
             glRotatef(180,0,1,0);
			 glTranslatef(-0.5,-0.4,0.5);

			 TexturedCube* floorwallS = new TexturedCube(wallTexture, 15, 25);
		glPopMatrix();




			glPushMatrix();//WallBottomL
			glColor3f(1, 0.5, 0.1);
			glTranslatef(-lentgh/4+lentgh/10, 10, -width/4);
			glScalef((lentgh/4)- lentgh / 20, height + 22, 1);

			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallBottomL = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();

			glPushMatrix();//WallBottomR
			glColor3f(1, 0.5, 0.1);
			glTranslatef(lentgh / 10, 10, -width / 4);
			glScalef((lentgh / 4) - lentgh / 20, height + 22, 1);

			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallBottomR = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();

			glPushMatrix();//WallTopL
			glColor3f(1, 0.5, 0.1);
			glTranslatef(-lentgh / 4 + lentgh / 10, 10, width / 4-width/20);
			glScalef((lentgh / 4) - lentgh / 20, height + 22, 1);

			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallTopL = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();

			glPushMatrix();//WallTopR
			glColor3f(1, 0.5, 0.1);
			glTranslatef(lentgh / 10, 10, width / 4-width/20);
			glScalef((lentgh / 4) - lentgh / 20, height + 22, 1);

			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallTopR = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();



			glPushMatrix();//WallRightL
			glColor3f(1, 0.5, 0.1);
			glTranslatef(-lentgh / 4, 10, -width / 4+width/10);
			glScalef(1, height + 22, width/4-width/20);
            glRotatef(180,0,0,1);
			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallRightL = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();

			glPushMatrix();//WallRightR
			glColor3f(1, 0.5, 0.1);
			glTranslatef(-lentgh / 4, 10, width/10);
			glScalef(1, height + 22, width / 4 - width / 20);
			glRotatef(180,1,0,1);
			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallRightR = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();


			glPushMatrix();//WallLeftL
			glColor3f(1, 0.5, 0.1);
			glTranslatef(lentgh / 4-lentgh/20, 10, -width / 4 + width / 10);
			glScalef(1, height + 22, width / 4 - width / 20);
			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallLeftL = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();

			glPushMatrix();//WallLeftR
			glColor3f(1, 0.5, 0.1);
			glTranslatef(lentgh / 4-lentgh/20, 10, width / 10);
			glScalef(1, height + 22, width / 4 - width / 20);
			glTranslatef(-0.5,-0.5,0.5);
			TexturedCube* WallLeftR = new TexturedCube(innerWallTexture, 5, 5);
			glPopMatrix();


//Objects
		//fans
		glPushMatrix();

		glPushMatrix();
			//fan1
            int fanHeight=23;
            glTranslatef(0, fanHeight, 0);
			glRotatef(-90, 1, 0, 0);
			DrawFan();
		glPopMatrix();

		glPushMatrix();
			//fan2
			glTranslatef(lentgh/10, fanHeight, 0);
			glRotatef(-90, 1, 0, 0);
			DrawFan();
			
		glPopMatrix();

		glPushMatrix();
		//fan3
			glTranslatef(-lentgh / 10, fanHeight, 0);
			glRotatef(-90, 1, 0, 0);
			DrawFan();
		glPopMatrix();


		glPushMatrix();
		//fan4
			glTranslatef(0, fanHeight, width/10);
			glRotatef(-90, 1, 0, 0);
			DrawFan();
		glPopMatrix();

		glPushMatrix();
		//fan5
			glTranslatef(0, fanHeight, -width/10);
			glRotatef(-90, 1, 0, 0);
			DrawFan();
		glPopMatrix();




		glPopMatrix();

		//BomberMan
		glPushMatrix();
			glScalef(4,4,4);
			
			SetLightPosition(-1, 10, 1);
			glTranslatef(lentgh / 25, 1, lentgh/25);
			drawBomberMan();
		
		glPopMatrix();

		//solarSystem
		glPushMatrix();
			glScalef(1, 1, 1);
			glTranslatef(-lentgh / 5-5, 1, -lentgh / 5-5);
			drawSolarSystem();
		glPopMatrix();


		//humanoid
		glPushMatrix();
		glScalef(3, 3, 3);
		glTranslatef(lentgh / 18, 1, -lentgh / 14);
	
		HumanModel* HM = new HumanModel();
		glPopMatrix();

		//Tank
		glPushMatrix();
		glTranslatef(-lentgh / 5 - 5,4, lentgh / 5 - 5);
		glScalef(4,4,4);
		Tank* tank = new Tank();
		glPopMatrix();


		//Tree
		glPushMatrix();
		glTranslatef(-5,3,-5);
		glScalef(12,12,12);
		CristmasTree* t1 = new CristmasTree();
		glPopMatrix();

		DisableLight();
		//AIUBCampus
		glPushMatrix();
		glTranslatef(-lentgh / 2 + 12, 2, -10);
		glRotatef(-90,0,1,0);
		glScalef(2,2,2);
		
		AIUBCampus* AIUB = new AIUBCampus();
		glPopMatrix();


		EnableLight();
//Basic Models
		//SolidCube
		//SetLightPosition(1, 1,1);
		glPushMatrix();
		glScalef(3,3,3);
		glTranslatef(lentgh/14, 1, 1);
		
			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);	
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(1, 1, 1);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(1,1,0);
			glutSolidCube(1);
			DisableLight();
		glPopMatrix();


		////WireCube
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, 3);
			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(1, 1, 1);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(1, 1, 0);
			glutWireCube(1);
			DisableLight();
		glPopMatrix();


		////SolidSphere
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, 5);
			glPushMatrix();
			//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);			
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(1, 1, 1);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(1, 0, 1);
			glutSolidSphere(0.6, 20, 20);
			DisableLight();
		glPopMatrix();


		////WireSphere
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, 7);
			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(1, 1, 1);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(1, 0, 1);
			glutWireSphere(0.6, 20, 20);
			DisableLight();
		glPopMatrix();

		////solidTorus
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, 9);
			glPushMatrix();
			//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(1, 1, 1);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(0, 1, 1);
			glutSolidTorus(0.3,0.6, 20, 20);
			DisableLight();
		glPopMatrix();


		////wireTorus
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, 11);
			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(1, 1, 1);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(0, 1, 1);
			glutWireTorus(0.3, 0.6, 20, 20);
			DisableLight();
		glPopMatrix();
	
		////solidCone
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, 13);
			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glTranslatef(0, -0.5, 0);
			glScalef(1, 1, 1);
			glRotatef(-120, 0, 1, 1);
			SetDiffuse(0.5, 1, 0.5);
			glutSolidCone(0.5, 1, 20, 20);
			DisableLight();
		glPopMatrix();

		////wireCone
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, 15);
			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glTranslatef(0, -0.5, 0);
			glScalef(1, 1, 1);
			glRotatef(-120, 0, 1, 1);
			SetDiffuse(0.5, 1, 1);
			glutWireCone(0.5, 1, 20, 20);
			DisableLight();
		glPopMatrix();
	
		//SolidDodecahedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -5);

			glPushMatrix();
			//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(0.5, 0.5, 0.5);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(1, 0.2, 0);
			glutSolidDodecahedron();
			DisableLight();
		glPopMatrix();

		//WireDodecahedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -7);

			glPushMatrix();
			//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
			glScalef(0.5, 0.5, 0.5);
			glRotatef(45, 1, 1, 1);
			SetDiffuse(1, 0.2, 0);
			glutWireDodecahedron();
			DisableLight();
		glPopMatrix();


		//Solidcosahedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -9);

			glPushMatrix();
			//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
		
			glRotatef(45, 1, 1, 1);
			SetDiffuse(0.2, 1, 0);
			glutSolidIcosahedron();
			DisableLight();
		glPopMatrix();


		//Wirecosahedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -11);

			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);
	
			glRotatef(45, 1, 1, 1);
			SetDiffuse(0.2, 1, 0);
			glutWireIcosahedron();
			DisableLight();
		glPopMatrix();


		//solidOctahedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -13);

			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);

			glRotatef(45, 1, 1, 1);
			SetDiffuse(0.2, 0, 1);
			glutSolidOctahedron();
			DisableLight();
		glPopMatrix();

		//WireOctahedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -15);

			glPushMatrix();
			//Base
			glTranslatef(0, -1, 0);
			glScalef(1, 0.2, 1);
			EnableLight();
			SetDiffuse(0.8, 0.8, 0.8);
			glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);

			glRotatef(45, 1, 1, 1);
			SetDiffuse(0.2, 0, 1);
			glutWireOctahedron();
			DisableLight();
		glPopMatrix();


		//SolidTetraHedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -17);

			glPushMatrix();
				//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);

			glRotatef(45, 1, 1, 1);
			glScalef(0.8, 0.8, 0.8);
			SetDiffuse(0.5, 0.3, 0.3);
			glutSolidTetrahedron();
			DisableLight();
		glPopMatrix();


		//WireTetraHedron
		glPushMatrix();
			glScalef(3, 3, 3);
			glTranslatef(lentgh / 14, 1, -19);

			glPushMatrix();
			//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 0.2, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);

			glRotatef(45, 1, 1, 1);
			glScalef(0.8,0.8,0.8);
			SetDiffuse(0.2, 0.3, 0.3);
			glutWireTetrahedron();
			DisableLight();
		glPopMatrix();

		SetLightPosition(-1, 10, 1);
		//SolidTeapot
		glPushMatrix();
			glTranslatef(lentgh / 2 - 10, 1,8);
			glPushMatrix();
			//Base
			glTranslatef(0, -1, 0);
			glScalef(1, 8, 1);
			EnableLight();
			SetDiffuse(0.8, 0.8, 0.8);
			glutSolidCube(1);
			DisableLight();
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);

			EnableLight();
			glTranslatef(0, 4, 0);
			SetDiffuse(0.9, 0.9, 0.9);
			glutSolidTeapot(1);
			DisableLight();


		glPopMatrix();


		//WireTeapot
		glPushMatrix();
			glTranslatef(lentgh / 2 - 10, 1, -15);
			glPushMatrix();
			//Base
				glTranslatef(0, -1, 0);
				glScalef(1, 8, 1);
				EnableLight();
				SetDiffuse(0.8, 0.8, 0.8);
				glutSolidCube(1);
				DisableLight();
			glPopMatrix();

			glRotatef(rotationAngle, 0, 1, 0);

			EnableLight();
			glTranslatef(0, 4, 0);
			SetDiffuse(0.9, 0.9, 0.9);
			glutWireTeapot(1);
			DisableLight();


		glPopMatrix();

	//portrait
		glPushMatrix();
			glTranslatef(-9,5,width/2-7);
			SimplePortrait* sp = new SimplePortrait();
		glPopMatrix();

		//batman
		glPushMatrix();
		glTranslatef(-25, 5, width / 2 - 7);
			BatmanLogoFrame* bf = new BatmanLogoFrame();
		glPopMatrix();


		//flash
		glPushMatrix();

		glTranslatef(8, 3, width / 2 - 7);
		FlashPortrait* FP = new FlashPortrait();
		glPopMatrix();

		glPushMatrix();
	
		glTranslatef(-9, 5, -width / 2 +7);
		glRotatef(180, 0, 1, 0);
		BeizerCurvePortrait* BCP = new BeizerCurvePortrait();
		glPopMatrix();
	


	glPopMatrix();//main end

}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include <windows.h>
#include <glut.h>




int drawgrid;
int drawaxes;


struct point
{
	double x,y,z;
};


void drawAxes()
{
	if(drawaxes==1)
	{
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_LINES);{
			glVertex3f( 100,0,0);
			glVertex3f(-100,0,0);

			glVertex3f(0,-100,0);
			glVertex3f(0, 100,0);

			glVertex3f(0,0, 100);
			glVertex3f(0,0,-100);
		}glEnd();
	}
}


void drawGrid()
{
	int i;


    glColor3f(0.6, 0.6, 0.6);	//grey
    glBegin(GL_LINES);{
        for(i=-20;i<=20;i++){

            if(i==0)
                continue;	//SKIP the MAIN axes

            //lines parallel to Y-axis
            glVertex3f(i*5, -90, 0);
            glVertex3f(i*5,  90, 0);

            //lines parallel to X-axis
            glVertex3f(-90, i*5, 0);
            glVertex3f( 90, i*5, 0);
        }
    }glEnd();

}

void point()
{
    glColor3f(0.0f, 0.0f, 1.0f);
    glPointSize(1.5);
    glBegin(GL_POINTS);
    glVertex2f(0.5,0.5);
    glVertex2f(1,1);
    glVertex2f(1.5,1.5);
    glEnd();
}

void pointsMany(int num)
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glPointSize(1.5);
    glBegin(GL_POINTS);
    for(int i = 0;i<num;i++)
    {
        glVertex2f((i*13)%31,(i*31)%39);
    }
    glEnd();
}
void just_line()
{
    glColor3f(0.0f, 0.0f, 1.0f); //BLUE LINE
    glBegin(GL_LINES); // It can be any type Gl_POINT,_LINE

        glVertex2d(-4.0,-2.0);
        glVertex2d(4.0,2.0);

    glEnd();

}
void lines()
{
    glColor3f(0.0f, 1.0f, 0.0f); // GREEN RECTANGLE
    glBegin(GL_LINE_LOOP); // It can be any type Gl_POINT,_LINE

        glVertex2d(20,20);
        glVertex2d(-20,20);
        glVertex2d(-20,-20);
        glVertex2d(20,-20);

    glEnd();
}
void triangle()
{
    glColor3f(1.0f, 0.0f, 0.0f); //RED TRIANGLE
    glBegin(GL_LINE_LOOP); // It can be any type Gl_POINT,_LINE

        glVertex2d(0.0,2.5);
        glVertex2d(-2.5,0.0);
        glVertex2d(2.5,3.0);

    glEnd();

}

void s_triangle()
{
    glBegin(GL_TRIANGLES); // DRAWING 3 SIDED TRIANGLE

glColor3f( 0, 1, 0 );
glVertex2f( -5.9, -5.9 );
glColor3f( 0, 1, 0 ); // green
glVertex2f( 5.9, -5.9 );
glColor3f( 0, 1, 0 );
glVertex2f( 0, 4.0 );
glEnd();

}
void s_triangle1()
{
    glBegin(GL_TRIANGLES); // DRAWING 3 SIDED TRIANGLE

glColor3f( 0, 1, 0 );
glVertex2f( -8.9, -8.9 );
glColor3f( 0, 1, 0 ); // green
glVertex2f( 8.9, -8.9 );
glColor3f( 0, 0, 1 );
glVertex2f( 0, 3.0 );
glEnd();

}
void s_triangle2()
{
    glBegin(GL_TRIANGLES); // DRAWING 3 SIDED TRIANGLE

glColor3f( 0, 1, 0 );
glVertex2f( -12, -12 );
glColor3f( 0, 1, 0 ); // green
glVertex2f( 12, -12 );
glColor3f( 0, 0, 1 );
glVertex2f( 0, 2.0 );
glEnd();

}


void s_quad()
{
    glBegin(GL_QUADS); // DRAWING 4 SIDED QUADRILATERAL
       glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(-1, 0.0);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1, 0);     //  so that the normal (front-face) is facing you
      glVertex2f(2, -19);
      glVertex2f(-2, -19);
       glEnd();
}

void s_poly()
{
    glBegin(GL_POLYGON); // DRAWING POLYGON
        glColor3f(1.0, 1.0, 0.0); // yellow
         glColor3f(5.0, 5.0, 0.0);
        glVertex2f(0.0, 0.0) ;
        glVertex2f(0.0, 3.0) ;
        glVertex2f(4.0, 3.0) ;
        glVertex2f(4.5, 1.5) ;
        glVertex2f(4.0, 0.0);
    glEnd();

}

  void s_ractangle()
  {
  glBegin(GL_POLYGON); // DRAWING POLYGON
        glColor3f(1.0, 1.0, 0.0); // yellow
         glColor3f(5.0, 5.0, 0.0);
        glVertex2f(25.0, 0.0) ;
        glVertex2f(25.0, 3.0) ;
        glVertex2f(18.0, 3.0) ;
        glVertex2f(18.0, 0.0) ;
        glVertex2f(4.0, 0.0);
    glEnd();

}
void 	s_quad1(){
        glBegin(GL_QUADS); // DRAWING 4 SIDED QUADRILATERAL
//GLES20.glUniform4fv(colorHandle, 1, color, 0);
    glColor3f(0.2, 1, 0.5); // Red
      glVertex2f(-450, 0.0);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(450, 0);     //  so that the normal (front-face) is facing you
      glVertex2f(2, -450);
      glVertex2f(-2, -450);
       glEnd();


 glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(50, 0.0);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(-50, 0);
       glColor3f(0, 0, 1.0); // Red    //  so that the normal (front-face) is facing you
      glVertex2f(1850, 20);
      glVertex2f(-100, 20);
       glEnd();

        glBegin(GL_QUADS);
    glColor3f(0, 0, 1.0); // Red
      glVertex2f(50, 0.0);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(-50, 0);     //  so that the normal (front-face) is facing you
      glVertex2f(1850, 60);
      glVertex2f(-100, 60);
       glEnd();
}
void display(){

	//clear the display

	glClearColor(0,0,0,0);	//color black
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	/********************
	/ set-up camera here
	********************/
	//load the correct matrix -- MODEL-VIEW matrix
	glMatrixMode(GL_MODELVIEW);

	//initialize the matrix
	glLoadIdentity();

	//now give three info
	//1. where is the camera (viewer)?
	//2. where is the camera looking?
	//3. Which direction is the camera's UP direction?
//gluLookAt(100,100,100,	0,0,0,	0,0,1);
	//gluLookAt(200*cos(cameraAngle), 200*sin(cameraAngle), cameraHeight,		0,0,0,		0,0,1);
	gluLookAt(0,0,50,	0,0,0,	0,1,0);
	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);


	/****************************
	/ Add your objects from here
	****************************/
	//add objects

	//drawAxes();
	//drawGrid();
	//point();
	//pointsMany(100);
	//lines();
	s_triangle();
		s_triangle1();
        s_triangle2();
//s_poly();
		s_quad();
        s_ractangle();
        	s_quad1();




	//ADD this line in the end --- if you use double buffer (i.e. GL_DOUBLE)
	/*
	Another decision you need to make when setting up the display mode is whether you want to use single buffering (GLUT_SINGLE)
    or double buffering (GLUT_DOUBLE). Applications that use both front and back color buffers are double-buffered. Smooth animation
    is accomplished by rendering into only the back buffer (which isn't displayed), then causing the front and back buffers to be swapped.
    If you aren't using annimation, stick with single buffering, which is the default.
	*/
	glutSwapBuffers();
}


void animate(){
	//angle+=0.05;
	//codes for any changes in Models, Camera
	glutPostRedisplay();
}

void init(){
	//codes for initialization
	//drawgrid=0;
	drawaxes=1;
	//cameraHeight=150.0;
	//cameraAngle=1.0;

	//clear the screen
	glClearColor(0,0,0,0);

	/************************
	/ set-up projection here
	************************/
	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);

	//initialize the matrix
	glLoadIdentity();

	//give PERSPECTIVE parameters
	gluPerspective(80,	1,	1,	1000.0);
	//field of view in the Y (vertically)
	//aspect ratio that determines the field of view in the X direction (horizontally)
	//near distance
	//far distance
}

int main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0, 0);
	/*
	The next thing we need to do is call the glutInitDisplayMode() procedure to specify the display mode for a window. You must first decide whether you want to use an RGBA (GLUT_RGBA) or color-index (GLUT_INDEX) color model.
	The RGBA mode stores its color buffers as red, green, blue, and alpha color components. The forth color component, alpha, corresponds to the notion of opacity. An alpha value of 1.0 implies complete opacity, and an alpha value of 0.0 complete transparancy.
    Color-index mode, in contrast, stores color buffers in indicies. Your decision on color mode should be based on hardware availability and what you application requires. More colors can usually be simultaneously represented with
    RGBA mode than with color-index mode. And for special effects, such as shading, lighting, and fog, RGBA mode provides more flexibility. In general, use RGBA mode whenever possible. RGBA mode is the default.
	*/
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	//Depth, Double buffer, RGB color

	glutCreateWindow("My OpenGL Program");

	init();

	glEnable(GL_DEPTH_TEST);	//enable Depth Testing

	glutDisplayFunc(display);	//display callback function
	glutIdleFunc(animate);		//what you want to do in the idle time (when no drawing is occuring)



	glutMainLoop();		//The main loop of OpenGL

	return 0;
}

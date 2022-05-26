#include<GL/glut.h>
#include<stdlib.h>
void myInit(void)
	{
	glClearColor(2.0,2.0,2.0,4.0);
	glColor3f(0.0f,0.0f,0.0f);	
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,640.0,0.0,480.0);
	}

void display(void)
	{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2i(100,200);
	glVertex2i(400, 200);
        glVertex2i(250,100);
	glVertex2i(250,400);
	glEnd();
	glFlush();
	}

int main(int argc, char** argv)
	{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,150);
	glutCreateWindow("My First ATTEMPT");
	glutDisplayFunc(display);
	myInit();
	glutMainLoop();
	}

		

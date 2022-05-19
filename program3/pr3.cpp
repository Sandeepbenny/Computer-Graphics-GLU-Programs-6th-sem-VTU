#include<stdlib.h>
#include<GL/glut.h>
GLfloat vertices[][[3]={-1.0,-1.0,-1.0,1.0,-1.0,-1.0,1.0,1.0,-1.0,-1.0,1.0,-1.0,-1.0,1.0,1.0,-1.0,1.0,1.0,1.0,1.0,-1.0,1.0,1.0{;
Glfloat colors[][3]=(0.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0};
void polygon(int a,
	{
	glBegin(GL_POLYGON);
	glColor3fv(colors[a]);
	glVertex3fv(vertices[a]);
	glColors3fv(colors[b]);
	glVertex3fv(vertices[b]);
	glColor3fv(colors[c]);
	glVertex3fv(vertices[c]);
	glColor3fv(colors[d]);
	glVertex3fv(vertices[d]);
	glEnd();
}
void ColorCube(void)
	{
	polygon(0,3,2,1);
	polygon(0,4,7,3);
	polygon(5,4,0,1);
	polygon(2,3,7,6);
	polygon(1,2,5,6);
	polygon(4,5,6,7);
	}
	GLfloat theta[]={0.0,0.0,0.0};
	GLint axis=2;
	void display(void)
	{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadidentity();
	glRotatef(theta[0],1.0,0.0,0.0);
	glRotatef(theta[1],0.0,1.0,0.0);
	glRotatef(theta[2],0.0,0.0,1.0);
	colorCube();
	glutSwapBuffers();
	}
	void spinCube()
	{
	theta[axis]+=1.0;
	if(theta[axis]>360.0}theta[axis]-=360.0;
	glutPostRedisplay();
	}
	void mouse(int btn,int state, int x,int y)
	{
	if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN) axis=0;
	if(btn==GLUT_MIDDLE_BUTTON && state == GLUT_DOWN) axis=1;
	if(btn==GLUT_RIGHT_BUTTON && state == GLUT_DOWN)axis =2;
	}
	void myReshape(int w,int h)
	{
	glVIewport(0.0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadidentity();
	if(w<=h)
	GLoRTHO(-2.0,2.0,-.20,*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);else
	glOrtho(-2.0*(GLfloat)w?(GLfloat)h,2.0*(GLfloat)w/(GLfloat)h,-2.0,2.0,-10.0,10.0);
	glMatirxMode(GL_MODELVIEW);
	}
	void main(int argc,char **argv)
	{
	glutInit(&argc,argv);
	glutinitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutinitwINDOWsiZE(500,500);
glutCreateWindow("sPINNING COLORCUBE");
glutReshapeFunc(myReshape);
glutDisplayFunc(display);
glutidleFunc(spinCube);
glutMouseFunc(mouse);
glEnable(Gl_DEPTH_TEST);
glutMainLoop();
}

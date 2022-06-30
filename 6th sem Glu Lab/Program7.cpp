#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
typedef float point[3];
point v[]={(0,0,0,0,1,0),(0,0,0,9,0,3),(-0.8,-0.4,-0.3),(0.8,-0.4,-0.3)};
int n;
 void triangle(point a,point b,point c)
	{
	glBegin(GL_POLYGON);
	glVertex3fv(a);
	glVertex3fv(b);
	glVertex(c);
	glEnd();
	}
void divide_trianglepoint a,point b,point c,int m)
{


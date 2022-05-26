#include <GL/glut.h>
#include<stdlib.h>

void init(void)
{
 glClearColor(1.0, 1.0, 1.0, 0.0); // Set display window colour to white

 glMatrixMode(GL_PROJECTION);  // Set projection parameters
 gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void)
{
 glClear(GL_COLOR_BUFFER_BIT); // Clear display window



 glColor3f(1.0, 0.0, 0.0);  //Set line colour to red

 glBegin(GL_LINES);    //Specify line segment geometry
  glVertex2i(180, 15);
  glVertex2i(10, 145);
  glVertex2i(15,180);
  glVertex2i(145,10);
 glEnd();

 glFlush(); // Process all OpenGL routines

}

int main(int argc, char* argv[])
{
 glutInit(&argc, argv);      // Initalise GLUT
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); // Set display mode
 
 glutInitWindowPosition(50, 100);    // Set window position
 glutInitWindowSize(400, 300);     // Set window size
 glutCreateWindow("An Example OpenGL Program"); // Create display window

 init();       // Execute initialisation procedure
 glutDisplayFunc(lineSegment); // Send graphics to display window
 glutMainLoop();     // Display everything and wait
 
 return 0;
}

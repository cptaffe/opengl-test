
// OpenGL test program

#include <stdio.h>
#include <stdlib.h>

#ifdef __APPLE__
#include "OpenGL/gl.h"
#include "OpenGL/glu.h"
#include "GLUT/glut.h"
#else
// Linux should go here.
#endif

void setup() {
	glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(512,512);
	glutCreateWindow("Hello World");

	setup();
	glutDisplayFunc(display);

	glutMainLoop();

	//getch();//pause here to see results or lack there of
 	return 0;
}

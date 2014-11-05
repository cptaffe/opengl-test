
// OpenGL test program

#include <stdio.h>
#include <stdlib.h>
#include "OpenGL/gl.h"
#include "OpenGL/glu.h"
#include "GLUT/glut.h"

void setup() {}

void display() {}

int main(int argc, char *argv[])
{
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

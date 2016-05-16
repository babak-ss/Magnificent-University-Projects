/*
 * Project design:
 * A dark background.
 * One or two movable light sources.
 * One movable camera.
 * One checkered plane (the floor).
 * One sphere (a ball preferably bouncing on the floor).
 */

#include "setup.hpp"
#include "object.hpp"
#include "light.hpp"
#include "ball.hpp"
#include "floor.hpp"
#include "io.hpp"

void drawScene();

// Main routine.
int main(int argc, char **argv) 
{
   printInteraction('r');
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH); 
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (50, 50);
   glutCreateWindow ("Graphics II Project");
   setup();
   glutDisplayFunc(drawScene);
   glutReshapeFunc(resize);
   glutKeyboardFunc(keyInput);
   glutSpecialFunc(specialKeyInput);
   glutMainLoop();
   
   return 0;
}

void drawScene()
{
	
}

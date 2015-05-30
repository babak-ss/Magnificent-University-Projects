#include <GL/glut.h>
#include <cmath>

#define PI 3.14159265359

using namespace std;

int deg = 0;

void radioactive();
void rotate();
void init();

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Radioactive");
	glutIdleFunc(rotate);
	glutDisplayFunc(radioactive);
	init();
	glutMainLoop();
}

void init()
{
	glClearColor(1.0 ,1.0 ,0.0 ,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
}

void radioactive()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f((deg/360.0), 0.0, 0.0);
	glRotatef(deg, 0.0, 0.0, 1.0);
	for (double d = PI/2.0; d < 2.0*PI; d += 2*PI/3.0)
	{
		glBegin(GL_TRIANGLE_FAN);
			glVertex2d(0.0,0.0);
			for (double dis = -PI/6; dis < PI/6; dis += 0.1)
			{
				glVertex2d(cos(d + dis), sin(d + dis));
			}
		glEnd();
	}
	glLoadIdentity();
	glutSwapBuffers();
}

void rotate()
{
	deg = (deg < 360) ? deg + 1 : 0;
	glutPostRedisplay();
}

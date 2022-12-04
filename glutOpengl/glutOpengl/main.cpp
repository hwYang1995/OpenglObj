#include "GL\glut.h"
#include "math.h"

int n = 3600;
float PI = 3.1415926f;
float R = 0.8f;

void myDisplay(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 0);
	glColor4f(1, 0, 0, 0);
	glBegin(GL_LINE_LOOP);

	float a[5], b[5];
	for (int i = 0; i < 5; i += 1)
	{
		a[i] = R * cos(i / 5.0 * 2.0 * PI);
		b[i] = R * sin(i / 5.0 * 2.0 * PI);
	}
	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(a[0], b[0]);
	glColor3f(0.0f, 1.0f, 0.0f); glVertex2f(a[2], b[2]);
	glColor3f(0.0f, 0.0f, 1.0f); glVertex2f(a[4], b[4]);
	glColor3f(0.0f, 1.0f, 1.0f); glVertex2f(a[1], b[1]);
	glColor3f(1.0f, 0.0f, 1.0f); glVertex2f(a[3], b[3]);

	glEnd();
	glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Hello World!");
	glutDisplayFunc(&myDisplay);
	glutMainLoop();
	return 0;
}


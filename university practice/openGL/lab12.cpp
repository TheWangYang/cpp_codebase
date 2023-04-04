#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>
#include<iostream>
#include<GL/glut.h>

#include <stdio.h>

GLfloat d = 0.1;
GLfloat translateX = 0, translateY = 0;
int halfLength = 20;
GLfloat ratio;

class Point {
public:
	GLfloat x, y, z;
	Point(GLfloat x = 0.0, GLfloat y = 0.0, GLfloat z = 0.0) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
};

typedef Point Color;
GLfloat light_position[] = { 1.0,1.0,1.0,0.0 };
GLfloat blackColor[] = { 0.0,0.0,0.0,1.0 };
GLfloat greyColor[] = { 0.5, 0.5, 0.5, 1.0 };
GLfloat whiteColor[] = { 1.0,1.0,1.0,1.0 };
GLfloat redColor[] = { 1.0,0.0,0.0,1.0 };
GLfloat no_mat[] = { 0.0,0.0,0.0,1.0 };
GLfloat mat_ambient[] = { 0.7,0.7,0.7,1.0 };
GLfloat mat_diffuse[] = { 0.1,0.5,0.8,1.0 };
GLfloat mat_specular[] = { 1.0,1.0,1.0,1.0 };
GLfloat no_shininess[] = { 0.0 };
GLfloat low_shininess[] = { 5.0 };
GLfloat high_shininess[] = { 100.0 };

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	//远光源照射
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	//启用光照
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);
}

void drawCoord() {
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
	glVertex2f(-halfLength, 0.0);
	glVertex2f(halfLength, 0.0);
	glVertex2f(0.0, -halfLength);
	glVertex2f(0.0, halfLength);
	glEnd();
}

void changeSize(GLsizei w, GLsizei h) {
	glViewport(0.0, 0.0, w, h);
	if (h == 0)
		h = 1;

	ratio = (GLfloat)w / (GLfloat)h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	if (w < h)
		glOrtho(-halfLength, halfLength, -halfLength / ratio, halfLength / ratio, -halfLength, halfLength);
	else
		glOrtho(-halfLength * ratio, halfLength * ratio, -halfLength, halfLength, -halfLength, halfLength);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

}

void renderScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glEnable(GL_LIGHTING);

	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, high_shininess);

	glColor3f(1.0, 0, 0);
	glMatrixMode(GL_MODELVIEW);
	glTranslatef(0.0, 0.0, -5.0);
	//glRotatef(15.0, 1.0, 1.0, 1.0);

	glutSolidTeapot(7.0);
	glFlush();

}


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("template");
	init();
	glutDisplayFunc(renderScene);
	glutReshapeFunc(changeSize);
	glutMainLoop();
	return 0;
}

//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include<iostream>
//#include<GL/glut.h>
//    
//#include <math.h>      
//#include <gl/GL.h>      
//
//
//GLfloat ctrlPoints[4][2] =
//{
//	{ -0.8f, 0.1f }, { -0.4f, 0.6f }, { 0.2f, 0.8f }, { 0.7f, 0.2f }
//};
//
//void myDisplay(void) {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glPointSize(3);
//	glColor3f(1.0, 0.0, 0.0);
//
//	for (int i = 0; i < 4; i++) {
//		glBegin(GL_POINTS);
//		glVertex2fv(&ctrlPoints[i][0]);
//		glEnd();
//	}
//	glColor3f(0.0, 0.0, 1.0);
//	glBegin(GL_LINE_STRIP);
//	for (int i = 0; i < 4; i++) {
//		glVertex2fv(&ctrlPoints[i][0]);
//	}
//	glEnd();
//
//	float xarray[11];
//	float yarray[11];
//	int n = 4;
//	GLfloat ps[11][2];
//
//	int u = 0;
//	for (double t = 0.0; t <= 1; t += 0.1)
//	{
//		for (int i = 1; i < n; ++i)
//		{
//			for (int j = 0; j < n - i; ++j)
//			{
//				if (i == 1)
//				{
//					xarray[j] = ctrlPoints[j][0] * (1 - t) + ctrlPoints[j + 1][0] * t;
//					yarray[j] = ctrlPoints[j][1] * (1 - t) + ctrlPoints[j + 1][1] * t;
//					continue;
//				}
//
//				xarray[j] = xarray[j] * (1 - t) + xarray[j + 1] * t;
//				yarray[j] = yarray[j] * (1 - t) + yarray[j + 1] * t;
//			}
//
//		}
//		ps[u][0] = xarray[0];
//		ps[u][1] = yarray[0];
//		u++;
//	}
//	glColor3f(1.0, 1.0, 0.0);
//	glBegin(GL_LINE_STRIP);
//	for (int i = 0; i < 11; i++)
//	{
//		glVertex2fv(ps[i]);
//	}
//	glEnd();
//	glFlush();
//}
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(400, 400);
//	glutCreateWindow("opengl1");
//	glutDisplayFunc(&myDisplay);
//	glutMainLoop();
//	return 0;
//}

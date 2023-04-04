//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include<iostream>
//#include<GL/glut.h>
//
//using namespace std;
//
//
//int LBLineClipTest(float p, float q, float& umax, float& umin) {
//	float r = 0.0;
//	if (p < 0.0) {
//		r = q / p;
//		if (r > umin) {
//			return 0;
//		}
//		else if (r > umax) {
//			umax = r;
//		}
//	}
//	else if (p > 0.0) {
//		r = q / p;
//		if (r < umax) {
//			return 0;
//		}
//		else if (r < umin) {
//			umin = r;
//		}
//	}
//	else if (q < 0.0) {
//		return 0;
//	}
//	return 1;
//}
//
//void LBLineClip(float xwl, float xwr, float ywb, float ywt, float x1, float y1, float x2, float y2) {
//	float umax, umin, deltax, deltay, xx2, yy2, xx1, yy1;
//	deltax = x2 - x1;
//	deltay = y2 - y1;
//	umax = 0.0;
//	umin = 1.0;
//	if (LBLineClipTest(-deltax, x1 - xwl, umax, umin)) {
//		if (LBLineClipTest(deltax, xwr - x1, umax, umin)) {
//			if (LBLineClipTest(-deltay, y1 - ywb, umax, umin)) {
//				if (LBLineClipTest(deltay, ywt - y1, umax, umin)) {
//					xx1 = int(x1 + umax * deltax + 0.5);
//					yy1 = int(y1 + umax * deltay + 0.5);
//					xx2 = int(x1 + umin * deltax + 0.5);
//					yy2 = int(y1 + umin * deltay + 0.5);
//				}
//				glBegin(GL_LINES);
//				glVertex2f(xx1, yy1);
//				glVertex2f(xx2, yy2);
//				glEnd();
//			}
//		}
//	}
//}
//
//void RenderSence() {
//	glClear(GL_COLOR_BUFFER_BIT);
//	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	glLineWidth(1);
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glBegin(GL_LINES);
//	glVertex2i(180, 50);
//	glVertex2i(180, 380);
//	glEnd();
//	glFlush();
//	glLineWidth(4);
//	glRectf(100, 100, 300, 200);
//	LBLineClip(100, 300, 100, 200, 180, 50, 180, 380);
//	glFlush();
//}
//
//void ChangeSize(GLsizei w, GLsizei h) {
//	if (h == 0) {
//		h = 1;
//	}
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	if (w <= h) {
//		glOrtho(-100.0f, 250.0f, -100.0f, 250.0f * h / w, 1.0f, -1.0f);
//	}
//	else {
//		glOrtho(-100.0f, 250.0f * w / h, -100.0f, 250.0f, 1.0f, -1.0f);
//	}
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//
//}
//
//void SetupRC() {
//	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//}
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(1000, 500);
//	glutCreateWindow("GLLine");
//	glutDisplayFunc(RenderSence);
//	glutReshapeFunc(ChangeSize);
//	SetupRC();
//	glutMainLoop();
//	return 0;
//}
//


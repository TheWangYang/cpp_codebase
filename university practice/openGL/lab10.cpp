//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include<iostream>
//#include<GL/glut.h>
//
//#include <cstring>
//
//using namespace std;
//
//const int a = 6;
//const int b = 4;
//float ctrlX[a + 1] = { 10, 48, 120, 216, 324, 480, 600 };
//float ctrlY[a + 1] = { 10, 96, 120, 72, 80, 60, 120 };
//float T[a + b + 1] = { 0, 0, 0, 0, 1.0f / 4, 2.0f / 4, 3.0f / 4, 1, 1, 1, 1 };
//const int N = 200;
//float X[N + 1], Y[N + 1];
//
//int findS(float t, float T[], int n, int k)
//{
//	for (int j = 0; j < n + k; j++)
//	{
//		if (t >= T[j] && t < T[j + 1])
//			return j;
//	}
//	return n;
//}
//
//float deBoor(int n, int k, int j, const float T[], const float x[], float t)
//{
//	float* p = new float[k];
//	memcpy(p, x + j - k + 1, k * sizeof(float));
//	for (int r = 1; r <= k - 1; r++)
//	{
//		for (int i = j; i >= j - k + r + 1; i--)
//		{
//			float tt = (T[i + k - r] - t) / (T[i + k - r] - T[i]);
//			p[i - j + k - 1] = (1 - tt) * p[i - j + k - 1] + tt * p[i - j + k - 2];
//		}
//	}
//	float result = p[k - 1];
//	delete[]p;
//	return result;
//}
//
//
//void cur()
//{
//	for (int i = 0; i <= N; i++)
//	{
//		float t = 1.0f * i / N;
//		int j = findS(t, T, a, b);
//		X[i] = deBoor(a, b, j, T, ctrlX, t);
//		Y[i] = deBoor(a, b, j, T, ctrlY, t);
//	}
//}
//
//
//void init(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 1.0);  // 设置背景颜色
//
//	glMatrixMode(GL_PROJECTION);       // 设置投影参数
//	gluOrtho2D(-200.0, 800.0, -100.0, 700); // 设置场景的大小
//}
//
//
//void draw(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glColor3f(1.0, 1.0, 1.0);      // 设置画图颜色
//
//	glPointSize(5);
//	glPushMatrix();
//	glBegin(GL_POINTS);
//	for (int i = 0; i <= a; i++)
//	{
//		glVertex2f(ctrlX[i], ctrlY[i]);
//	}
//	glEnd();
//
//	glColor3f(1.0, 0.5, 1.0);
//	glLineWidth(3);
//	glBegin(GL_LINES);
//	for (int i = 0; i < a; i++)
//	{
//		glVertex2f(ctrlX[i], ctrlY[i]);
//		glVertex2f(ctrlX[i + 1], ctrlY[i + 1]);
//	}
//	glEnd();
//	cur();
//	glColor3f(1.0, 0.0, 0.0);
//	glLineWidth(1);
//	glBegin(GL_LINE_STRIP);
//	for (int i = 1; i < N; i++)
//	{
//		glVertex2f(X[i], Y[i]);
//		glVertex2f(X[i + 1], Y[i + 1]);
//	}
//	glEnd();
//	glPopMatrix();
//	glFlush();     // 处理绘图pipeLine
//}
//
//int main(int argc, char** argv){
//
//	glutInit(&argc, argv);  // 初始化GLUT环境
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // GLUT显示模式：单缓冲区、RGB颜色模型
//	glutInitWindowPosition(50, 100);   // 窗口左上角的位置
//	glutInitWindowSize(800, 600);      // 显示窗口的大小
//	glutCreateWindow("MYF"); // 创建显示窗口，加上标题
//
//	init();
//	glutDisplayFunc(draw);           // 调用绘图函数
//
//	glutMainLoop();				 // 进入事件处理循环
//	return 0;
//}


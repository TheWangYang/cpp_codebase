//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include<iostream>
//#include<GL/glut.h>
//
//
//#include<cmath>
//#include<memory.h>
//
//using namespace std;
//
//
//const int n = 8;
//const int k = 3;
//float ctrlX[n + 1] = { 600,600,400,200,200,200,400,600,600 };
//float ctrlY[n + 1] = { 400,600,600,600,400,200,200,200,400 };
//float T[n + k + 1] = { 0,0,0,0.25,0.25,0.5,0.5,0.75,0.75,1,1,1 };
//float power[n + 1] = { 1,0.707,1,0.707,1,0.707,1,0.707,1 };
//
//const int N = 300;
//float X[N + 1], Y[N + 1], P[N + 1];
//int findflag(float t, float T[], int n, int k)
//{
//	for (int j = 0; j < n + k; j++)
//		if (t >= T[j] && t < T[j + 1])
//			return j;
//	return n;
//}
//
//float deBoorCompute(int n, int k, int j, const float T[], const float x[], float t)
//{
//
//
//	float* p = new float[k];
//	memcpy(p, x + j - k + 1, k * sizeof(float));
//	for (int r = 1; r < k; r++)
//	{
//		for (int i = j; i >= j - k + r + 1; i--)
//		{
//			float tt = (T[i + k - r] - t) / (T[i + k - r] - T[i]);
//			p[i - j + k - 1] = (1 - tt) * p[i - j + k - 1] + tt * p[i - j + k - 2];
//		}
//	}
//
//	float result = p[k - 1];
//	delete[]p;
//	//result=result;
//	return result;
//}
//void curveSampling()
//{
//	float h[9], v[9];
//	for (int i = 0; i < 9; i++)
//	{
//		h[i] = ctrlX[i] * power[i];
//		v[i] = ctrlY[i] * power[i];
//	}
//	for (int i = 0; i <= N; i++)
//	{
//		float t = 1.0f * i / N;
//		int j = findflag(t, T, n, k);
//		X[i] = power[j] * deBoorCompute(n, k, j, T, h, t);
//		Y[i] = power[j] * deBoorCompute(n, k, j, T, v, t);
//		P[i] = deBoorCompute(n, k, j, T, power, t);
//	}
//	for (int i = 0; i <= N; i++)
//	{
//		X[i] = X[i] / P[i];
//		Y[i] = Y[i] / P[i];
//	}
//}
//void init(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);  // 设置背景颜色
//	glMatrixMode(GL_PROJECTION);       // 设置投影参数
//	gluOrtho2D(0.0, 1000.0, 0.0, 1000.0); // 设置场景的大小
//}
//
//void draw(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glEnable(GL_DEPTH_TEST);
//	curveSampling();
//	glPushMatrix();
//	glLineWidth(3);
//	//glPointSize(4);
//	glColor3f(1.0, 0.0, 0.0);
//	glBegin(GL_LINE_STRIP);
//	for (int i = 0; i <= n; i++)
//	{
//		glVertex2f(ctrlX[i], ctrlY[i]);
//	}
//	glEnd();
//	glLineWidth(2);
//	glBegin(GL_LINE_STRIP);
//	for (int i = 0; i <= N; i++)
//	{
//		glVertex2f(X[i], Y[i]);
//	}
//	glEnd();
//	glPopMatrix();
//	glFlush();
//}
//
//int main(int argc, char** argv){
//	glutInit(&argc, argv);  // 初始化GLUT环境
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // GLUT显示模式：单缓冲区、RGB颜色模型
//	glutInitWindowPosition(100, 100);   // 窗口左上角的位置
//	glutInitWindowSize(600, 600);      // 显示窗口的大小
//	glutCreateWindow("An Example of OpenGL"); // 创建显示窗口，加上标题
//	init();
//	glutDisplayFunc(draw);           // 调用绘图函数
//	glutMainLoop();				 // 进入事件处理循环
//	return 0; 
//}

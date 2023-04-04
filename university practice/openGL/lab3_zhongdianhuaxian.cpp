//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>      // OPenGL实用工具库
//#include "stdio.h"
//#include "math.h"
// 
//
//int xs, ys, xe, ye;
// 
//void MidpointLine(int x0, int y0, int x1, int y1) {
//	if((x0 != x1) && (y0 != y1)) {  //判断是不是一个点，不是的话进行操作 
//		int a, b, deltal, delta2, d, x, y;
//		a = y0 - y1;
//		b = x1 - x0;
//		d = 2 * a + b;
//		deltal = 2 * a;
//		delta2 = 2 * (a + b);
//		x = x0;
//		y = y0;
//		glVertex2i(x, y);
//		while(x < x1){
//			if(d < 0){
//				x++;
//				y++;
//				d += delta2;
//			}else{
//				x++;
//				d += deltal;
//			}
//			glVertex2i(x, y);
//		}
//	}
//	else
//	{
//		int min, d;
//		if(x0 == x1)
//		{
//			int x = x0, y;
//			y = (y0<=y1) ? y0 : y1;
//			d = fabs((double)(y0 - y1));
//			while (d <= 0)
//			{
//				glVertex2i(x, y);
//				y++;
//				d--;
//			}
//		}
//	}
//}
// 
////画线函数 
//void lineSegment(){
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(0.0, 0.0, 0.0);
//	glBegin(GL_POINTS);
//	MidpointLine(xs, ys, xe, ye);
//	glEnd();
//	glFlush();
//}
// 
//int main(int argc, char * argv[]){
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
//	printf("输入线段起始和终止点坐标（范围为0-500,0-500）");
//	scanf("%d, %d, %d, %d", &xs, &ys, &xe, &ye);
//	glutInitWindowPosition(50, 100);
//	glutInitWindowSize(500, 500);
//	glutCreateWindow("中点划线法练习");
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//	glMatrixMode(GL_PROJECTION);
//	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
//	glutDisplayFunc(lineSegment);
//	glutMainLoop();
//	
//	return 0;
//}
//
//
//


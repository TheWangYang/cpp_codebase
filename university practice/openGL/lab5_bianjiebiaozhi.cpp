//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h> 
//#include <math.h>
//
//using namespace std;
//
//
//bool a[200][200] = { false };
//
//void Line(int x1, int y1, int x2, int y2) {
//    int step;
//    int dx = x2 - x1;
//    int dy = y2 - y1;
//    float xDelta, yDelta, x = x1, y = y1;
//    
//    if (abs(dx) > abs(dy))
//        step = abs(dx);
//    else
//        step = abs(dy);
//        
//	xDelta = float(dx) / step;
//	yDelta = float(dy) / step;
//	
//	float xPre, yPre;
//	for (int i = 0; i < step; i++) {
//	xPre = x; yPre = y;
//	x += xDelta;
//        y += yDelta;
//        if (int(y + 0.5) != int(yPre + 0.5)) { //当此时的值与上一个值部同时，标记上
//            a[int(x + 0.5)][int(y + 0.5)] = !(a[int(x + 0.5)][int(y + 0.5)]);
//            glVertex2i(int(x + 0.5), int(y + 0.5));
//        }
//    }
//}
//
//void edqemark_fill(int Xmin, int Xmax, int Ymin, int Ymax) {
//    for (int i = Ymin + 1; i <= Ymax; i++) {
//        bool inside = false;
//        for (int j = Xmin; j <= Xmax; j++) {
//            if (a[j][i] == true) {//遇到边界就取反
//                inside = !(inside);
//            }
//            if (inside)
//                glVertex2i(j, i);
//        }
//    }
//};
//
//void init(void)
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);  // 设置背景颜色
//    glMatrixMode(GL_PROJECTION);       // 设置投影参数
//    gluOrtho2D(0.0, 600.0, 0.0, 400.0); // 设置场景的大小
//}
//
//void draw(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0.8, 0.3, 0.1);      // 设置画图颜色
//    glLineWidth(3);
//    glPushMatrix();
//    glBegin(GL_POINTS);
//    Line(20, 30, 80, 120);
//    Line(150, 50, 20, 30);
//    Line(150, 50, 80, 120);
//    glEnd();
//
//    glBegin(GL_POINTS);
//    edqemark_fill(20, 150, 30, 120);
//    glEnd();
//    glPopMatrix();
//    glFlush();     // 处理绘图pipeLine
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);  // 初始化GLUT环境
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // GLUT显示模式：单缓冲区、RGB颜色模型
//    glutInitWindowPosition(50, 100);   // 窗口左上角的位置
//    glutInitWindowSize(800, 600);      // 显示窗口的大小
//    glutCreateWindow("An Example of OpenGL"); // 创建显示窗口，加上标题
//    init();
//    glutDisplayFunc(draw);           // 调用绘图函数
//    glutMainLoop();                 // 进入事件处理循环
//    return 0; 
//}
//
//
// 

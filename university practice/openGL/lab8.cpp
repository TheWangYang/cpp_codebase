//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include<iostream>
//#include<GL/glut.h>
//
//#include <cstdio>
//#include <cmath>
//
//const GLfloat Pi = 3.14f;
//
////定义点集
//struct data {
//    GLfloat x;
//    GLfloat y;
//}Point[201];
//
//
////初始化函数
//void init() {
//    glClearColor(1.0, 1.0, 1.0, 0.0);//设置背景颜色
//    glMatrixMode(GL_PROJECTION);//设置投影参数
//    gluOrtho2D(0.0, 600.0, 0.0, 400.0);//设置场景大小
//}
//
////显示函数
//void mydisplay() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0, 0.0, 0.0);//设置线条颜色
//    glPointSize(2);//设置点的大小
//
//    glTranslatef(100.0f, 0.0f, 0.0f);//平移图形
//    glScalef(0.5f, 0.5f, 0.0f);//缩小图像0.5倍
//    glRotatef(60.0f, 1.0f, 0.0f, 0.0f);//沿x轴旋转60度
//
//    glBegin(GL_LINE_STRIP);
//    for (int i = 1; i <= 200; i++) {
//        GLfloat t = i / 200.0;
//        //参数曲线
//        Point[i].x = 200.0 + 50.0 * (2.0 * cos(2.0 * Pi * t) - cos(4.0 * Pi * t));
//        Point[i].y = 150.0 + 50.0 * (2.0 * sin(2.0 * Pi * t) - sin(4.0 * Pi * t));
//        glVertex2i(Point[i].x, Point[i].y);
//    }
//    glEnd();
//    glFlush();
//}
//
//int main(int argc, char *argv[])
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
//    glutInitWindowPosition(100, 100);
//    glutInitWindowSize(400, 400);
//    glutCreateWindow("绘制曲线");
//    init();
//    glutDisplayFunc(&mydisplay);
//    glutMainLoop();
//    return 0;
//}

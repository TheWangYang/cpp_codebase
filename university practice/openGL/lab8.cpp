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
////����㼯
//struct data {
//    GLfloat x;
//    GLfloat y;
//}Point[201];
//
//
////��ʼ������
//void init() {
//    glClearColor(1.0, 1.0, 1.0, 0.0);//���ñ�����ɫ
//    glMatrixMode(GL_PROJECTION);//����ͶӰ����
//    gluOrtho2D(0.0, 600.0, 0.0, 400.0);//���ó�����С
//}
//
////��ʾ����
//void mydisplay() {
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0, 0.0, 0.0);//����������ɫ
//    glPointSize(2);//���õ�Ĵ�С
//
//    glTranslatef(100.0f, 0.0f, 0.0f);//ƽ��ͼ��
//    glScalef(0.5f, 0.5f, 0.0f);//��Сͼ��0.5��
//    glRotatef(60.0f, 1.0f, 0.0f, 0.0f);//��x����ת60��
//
//    glBegin(GL_LINE_STRIP);
//    for (int i = 1; i <= 200; i++) {
//        GLfloat t = i / 200.0;
//        //��������
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
//    glutCreateWindow("��������");
//    init();
//    glutDisplayFunc(&mydisplay);
//    glutMainLoop();
//    return 0;
//}

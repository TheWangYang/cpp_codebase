//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>
//#include <cstdio>
//
//#define LEFT 1
//#define RIGHT 2
//#define BOTTOM 4
//#define TOP 8
//
//using namespace std;
// 
//
//int x1=150,y1=50, x2=50, y2=250, XL=100, XR=300, YB=100, YT=200;  //(x1,y1)��(x2,y2)Ϊֱ�߶εĶ˵㣬XLΪ��߽磬XRΪ�ұ߽磬YBΪ�±߽磬YTΪ�ϱ߽�
//int x1_init = 150, y1_init = 50, x2_init = 50, y2_init = 250;  //��ֱ�߶ζ˵㱸�ݣ��Ա㻭���ü�ǰ��ֱ�߶�
//
//int encode(int x,int y)
//{
//    int c = 0;
//    if (x < XL) c |= LEFT;
//    if (x > XR) c |= RIGHT;
//    if (y < YB) c |= BOTTOM;
//    if (y > YT) c |= TOP;
//    return c;
//}
//
//void CS_LineClip()  //Cohen-Sutherland�ü��㷨
//{
//    int x, y;
//    int code1, code2, code;
//    code1 = encode(x1, y1);
//    code2 = encode(x2, y2);
//
//    while (code1 != 0 || code2 != 0)
//    {
//        if (code1 & code2)
//            return;
//        if (code1 != 0)
//            code = code1;
//        else
//            code = code2;
//
//        if (LEFT & code)
//        {
//            x = XL;
//            y = y1 + (y2 - y1)*(XL - x1) / (x2 - x1);
//        }
//        else if (RIGHT & code)
//        {
//            x = XR;
//            y = y1 + (y2 - y1)*(XR - x1) / (x2 - x1);
//        }
//        else if (BOTTOM & code)
//        {
//            y = YB;
//            x = x1 + (x2 - x1)*(YB - y1) / (y2 - y1);
//        }
//        else if (TOP & code)
//        {
//            y = YT;
//            x = x1 + (x2 - x1)*(YT - y1) / (y2 - y1);
//        }
//        if (code == code1)
//        {
//            x1 = x; y1 = y; code1 = encode(x1, y1);
//        }
//        else
//        {
//            x2 = x; y2 = y; code2 = encode(x2, y2);
//        }
//    }
//
//}
//
//
//void init()  //��ʼ������
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);  //���ñ�����ɫ
//    glMatrixMode(GL_PROJECTION);       // ����ͶӰ����
//    gluOrtho2D(0.0, 600.0, 0.0, 400.0); // ���ó����Ĵ�С
//    CS_LineClip();  //ִ��һ�βü��㷨
//}
//
//void mydisplay()  //��ʾ����
//{
//    //���Ʒ��α߽�
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(1.0, 0.0, 0.0);   
//    glPointSize(2);
//    glBegin(GL_LINE_LOOP);
//        glVertex2i(XL, YT);
//        glVertex2i(XL, YB);
//        glVertex2i(XR, YB);
//        glVertex2i(XR, YT);
//    glEnd();
//    glFlush();
//    //����δ�ü�ǰ���߶�
//    glBegin(GL_LINES);
//        glVertex2i(x1_init, y1_init);
//        glVertex2i(x2_init, y2_init);
//    glEnd();
//    glFlush();
//    //���Ʋü�����߶�
//    glColor3f(0.0, 0.0, 0.0);
//    glBegin(GL_LINES);
//        glVertex2i(x1, y1);
//        glVertex2i(x2, y2);
//    glEnd();
//    glFlush();
//}
//
//int main(int argc, char *argv[])
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//    glutInitWindowPosition(100, 100);
//    glutInitWindowSize(400, 400);
//    glutCreateWindow("Cohen-Sutherland�ü��㷨");
//    init();
//    glutDisplayFunc(&mydisplay);
//    glutMainLoop();
//    return 0;
//}
//
//


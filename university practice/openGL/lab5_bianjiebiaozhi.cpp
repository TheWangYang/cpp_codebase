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
//        if (int(y + 0.5) != int(yPre + 0.5)) { //����ʱ��ֵ����һ��ֵ��ͬʱ�������
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
//            if (a[j][i] == true) {//�����߽��ȡ��
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
//    glClearColor(1.0, 1.0, 1.0, 0.0);  // ���ñ�����ɫ
//    glMatrixMode(GL_PROJECTION);       // ����ͶӰ����
//    gluOrtho2D(0.0, 600.0, 0.0, 400.0); // ���ó����Ĵ�С
//}
//
//void draw(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0.8, 0.3, 0.1);      // ���û�ͼ��ɫ
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
//    glFlush();     // �����ͼpipeLine
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);  // ��ʼ��GLUT����
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // GLUT��ʾģʽ������������RGB��ɫģ��
//    glutInitWindowPosition(50, 100);   // �������Ͻǵ�λ��
//    glutInitWindowSize(800, 600);      // ��ʾ���ڵĴ�С
//    glutCreateWindow("An Example of OpenGL"); // ������ʾ���ڣ����ϱ���
//    init();
//    glutDisplayFunc(draw);           // ���û�ͼ����
//    glutMainLoop();                 // �����¼�����ѭ��
//    return 0; 
//}
//
//
// 

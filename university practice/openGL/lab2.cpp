//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>
//#include <stdlib.h>
//#include <math.h>
//#include <stdio.h>
//
//
////�����PI������ʹ�õ�double˫�������ͣ� 
//const GLfloat PI = 3.14159265357f;
//
////��������Ǻ��� 
//void myDisplay(void) {
//    GLfloat a = 1 / (2 - 2 * cos(72 * PI / 180));
//    GLfloat bx = a*cos(18 * PI / 180);
//    GLfloat by = a*sin(18 * PI / 180);
//    GLfloat cy = -a*cos(18 * PI / 180);
//    //���������������꣨x,y�� 
//    GLfloat pointB[2] = { bx, by },//����B������ 
//        pointC[2] = { 0.5, cy },  //����C������
//        pointD[2] = { -0.5, cy },//ֱ������D�ĺ�������C��Գƣ�������͵�Cһ�� 
//        pointE[2] = { -bx, by },//��ʾ��B��ĺ�����bx����y��Գ� 
//        pointA[2] = { 0,a };  //����A������ 
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    //����A->C->E->B->D->A��˳��һ�ʻ��������
//    glBegin(GL_LINE_LOOP);
//    glVertex2fv(pointA);
//    glVertex2fv(pointC);
//    glVertex2fv(pointE);
//    glVertex2fv(pointB);
//    glVertex2fv(pointD);
//    glVertex2fv(pointA);
//    glEnd();
//    glFlush();
//}
//
//
////main�������� 
//int main(int argc, char *argv[]) { //��������ʵ��glutInit��ʼ�� 
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//    //���ô�����ʾλ�ã������Ͻ�Ϊ��׼�� 
//	glutInitWindowPosition(100, 100);
//	//���ô��ڴ�С 
//    glutInitWindowSize(800, 800);
//    //���û��ƴ��ڱ��� 
//    glutCreateWindow("OpenGL�����������ʾ����");
//    
//    glutDisplayFunc(&myDisplay);  //���û�������Ƿ���ʵ�ֻ���
//	 
//    //glutMainLoop����GLUT�¼�����ѭ���������е��롰�¼����йصĺ�����������ѭ����
//    glutMainLoop();  //��ʾ�����߳�ѭ������������ʾһ�ξ�ȡ����  
//    return 0;
//}
//
//
//
//


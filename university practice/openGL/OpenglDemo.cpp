//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>      // OPenGLʵ�ù��߿�
//
////#include <math.h>
//int dx=0, dy=0; // ƽ�Ʊ���
//float angle=0;  // ��ת�Ƕ�
//int mouseX=0,mouseY=0; //���λ��
//const int XL=100,XR=300,YB=100,YT=300;
//
//void init(void)
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);  // ���ñ�����ɫ
//
//    glMatrixMode(GL_PROJECTION);       // ����ͶӰ����
//    gluOrtho2D(0.0, 600.0, 0.0, 450.0); // ���ó����Ĵ�С
//}
////���������Ҽ��ƶ�ͼ��
//void move(int key,int x,int y) 
//{
//	switch (key)
//	{
//	case GLUT_KEY_LEFT:dx -= 10;break;
//	case GLUT_KEY_RIGHT:dx += 10;break;
//	case GLUT_KEY_UP:dy += 10;break;
//	case GLUT_KEY_DOWN:dy -= 10;break;
//	}			
//	glutPostRedisplay();
//}
//// �������������µ�ǰλ��
//void mouseButtonDown(int key,int action,int x,int y)
//{
//	if(key==GLUT_LEFT_BUTTON && action==GLUT_DOWN)
//	{
//		mouseX=x;
//		mouseY=y;
//	}
//}
//// �ƶ����ȷ����ת�Ƕ�
//void mouseMotion(int x,int y) 
//{
//	angle+=360*(mouseY-y)/1600;
//	mouseX=x;
//	mouseY=y;
//	glutPostRedisplay();
//}
//
//void draw(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);  
//
//	int x0 = 220, y0 = 400, x1 = 320, y1 = 200;
//	
//    glColor3f(1.0, 0.0, 0.0);      // ���û�ͼ��ɫ
//    glLineWidth(3);                // ���ñ߿���
//	glPointSize(3);
//	glPushMatrix();    
//	glTranslatef(dx,dy,0); //ͼ�α任��������ڻ���֮ǰ
//	glRotatef(angle,0,0,1);
//	glBegin(GL_LINE_LOOP);
//		glVertex2i(XL,YT);
//		glVertex2i(XL,YB);
//        glVertex2i(XR,YB);
//		glVertex2i(XR,YT);
//    glEnd( );	
//	
//	glPopMatrix();
//    glFlush( );     // �����ͼpipeLine
//	//glutSwapBuffers(); //GLUT_DOUBLE
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);  // ��ʼ��GLUT����
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // GLUT��ʾģʽ������������RGB��ɫģ��
//    //glutInitWindowPosition(50, 100);   // �������Ͻǵ�λ��
//    glutInitWindowSize(800, 600);      // ��ʾ���ڵĴ�С
//    glutCreateWindow("An Example of OpenGL"); // ������ʾ���ڣ����ϱ���
//
//    init( );                            
//    glutDisplayFunc(draw);           // ���û�ͼ����
//	glutSpecialFunc(move);			 // ���ܼ���Ӧ
//	glutMouseFunc(mouseButtonDown);  // ��갴����Ӧ
//	glutMotionFunc(mouseMotion);     // ����ƶ���Ӧ
//    glutMainLoop( );				 // �����¼�����ѭ��
//    return 0;
//}

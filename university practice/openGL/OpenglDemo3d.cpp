//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>      // OPenGLʵ�ù��߿�
//
//int winWidth=800, winHeight=600;		// ��Ļ��С
//float dx=0, dy=0, dz=0;							// ƽ�Ʊ���
//float angleX=0, angleY=0, angleZ=0;    // ��ת�Ƕ�
//int mouseX, mouseY;                            //���λ��
//
//void init(void)
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);  // ���ñ�����ɫ
///*
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(0, 0, 500, 0, 0, -60, 0, 1, 0);
//	glMatrixMode(GL_PROJECTION);       // ����ͶӰ����
//	// gluOrtho2D(0, 400, 0,300); // ��ά�������ó����Ĵ�С
//	glOrtho(-100,100,-100,100,0.1,1000);
//	//gluPerspective(30,1,0.1,100);
//	*/
//}
//
//void resize(int newWidth, int newHeight)
//{
//	glViewport(0,0,newWidth,newHeight);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	winWidth=newWidth;
//	winHeight=newHeight;
//	if(newWidth<=newHeight)
//		glOrtho(-100,100, -100*newHeight/newWidth, 100*newHeight/newWidth, 0.1, 1000);
//	else
//		glOrtho(-100*newWidth/newHeight, 100*newWidth/newHeight,-100,100,0.1, 1000);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(100, 100, 500, 0, 0, -60, 0, 1, 0);
//}
//
//void draw(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
//	glEnable(GL_DEPTH_TEST); 
//
//	glColor3f(0.0, 0.4, 0.2);      // ���û�ͼ��ɫ
//
//	GLfloat light_position[] = {50.0f, 50.0f, 50.0f, 1.0f};  
//	GLfloat light_ambient[]  = {0.5f, 0.5f, 0.5f, 1.0f};  
//	GLfloat light_diffuse[]  = {1.0f, 0.5f, 0.5f, 1.0f};  
//	GLfloat light_specular[] = {0.0f, 0.0f, 1.0f, 1.0f};  
//
//	glLightfv(GL_LIGHT0, GL_POSITION, light_position); //ָ����0�Ź�Դ��λ��   
//	glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient); //GL_AMBIENT��ʾ���ֹ������䵽�ò�����	
//	glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse); //�������~~  
//	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);//���淴���~~~  
//
//	glEnable(GL_LIGHT0); //ʹ�õ�0�Ź���  
//	glEnable(GL_LIGHTING); //�ں������Ⱦ��ʹ�ù���  
//	
//	glPushMatrix();
//	glTranslatef(dx, dy, 0);
//	glRotatef(angleY, 0,1,0);
//	glRotatef(angleX, 1,0,0);
//	
//	glutSolidTeapot(50.0);
//
//	glPopMatrix();
//	
//    glFlush( );     // �����ͼpipeLine
//}
//
//void move(int key, int x, int y)
//{
//	switch(key)
//	{
//	case GLUT_KEY_UP: dy += 10;	break;	
//	case GLUT_KEY_DOWN: dy -= 10;	break;	
//	case GLUT_KEY_LEFT: dx -= 10;	break;	
//	case GLUT_KEY_RIGHT: dx += 10;	 break;
//	}
//	glutPostRedisplay();  
//}
//
//void moseButtonDown(int button, int action, int x, int y){
//	if (button == GLUT_LEFT_BUTTON && action == GLUT_DOWN)  
//	{  
//		mouseX = x;//���������ʱ��¼�������  
//		mouseY = y;  
//	}  
//}
//
//void mouseMove(int x, int y)  {  
//	GLint deltax = mouseX - x;  
//	GLint deltay = mouseY - y;  
//	angleY += 360*(GLfloat)deltax / (GLfloat)winWidth;//������Ļ����껬���ľ�����������ת�ĽǶ�  
//	angleX += 360*(GLfloat)deltay / (GLfloat)winHeight;  
//	mouseX = x;//��¼��ʱ��������꣬�����������  
//	mouseY = y;//����û����������䣬��������ת���ò��ɿ�  
//	glutPostRedisplay();  
//}  
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);  // ��ʼ��GLUT����
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // GLUT��ʾģʽ������������RGB��ɫģ��
//    //glutInitWindowPosition(50, 100);   // �������Ͻǵ�λ��
//    glutInitWindowSize(winWidth,winHeight);      // ��ʾ���ڵĴ�С
//    glutCreateWindow("An Example of OpenGL"); // ������ʾ���ڣ����ϱ���
//
//    init( );                            
//    glutDisplayFunc(draw);       // ���û�ͼ����
//	glutReshapeFunc(resize);    // �ı���ʾ����ʱ����
//	glutSpecialFunc(move);     // ���ܼ�����
//	glutMouseFunc(moseButtonDown); //������갴��
//	glutMotionFunc(mouseMove); //��������ƶ�
//    glutMainLoop( );                // �����¼�����ѭ��
//    return 0;
//}

//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>      // OPenGL实用工具库
//
//int winWidth=800, winHeight=600;		// 屏幕大小
//float dx=0, dy=0, dz=0;							// 平移变量
//float angleX=0, angleY=0, angleZ=0;    // 旋转角度
//int mouseX, mouseY;                            //鼠标位置
//
//void init(void)
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);  // 设置背景颜色
///*
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	gluLookAt(0, 0, 500, 0, 0, -60, 0, 1, 0);
//	glMatrixMode(GL_PROJECTION);       // 设置投影参数
//	// gluOrtho2D(0, 400, 0,300); // 二维情形设置场景的大小
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
//	glColor3f(0.0, 0.4, 0.2);      // 设置画图颜色
//
//	GLfloat light_position[] = {50.0f, 50.0f, 50.0f, 1.0f};  
//	GLfloat light_ambient[]  = {0.5f, 0.5f, 0.5f, 1.0f};  
//	GLfloat light_diffuse[]  = {1.0f, 0.5f, 0.5f, 1.0f};  
//	GLfloat light_specular[] = {0.0f, 0.0f, 1.0f, 1.0f};  
//
//	glLightfv(GL_LIGHT0, GL_POSITION, light_position); //指定第0号光源的位置   
//	glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient); //GL_AMBIENT表示各种光线照射到该材质上	
//	glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse); //漫反射后~~  
//	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);//镜面反射后~~~  
//
//	glEnable(GL_LIGHT0); //使用第0号光照  
//	glEnable(GL_LIGHTING); //在后面的渲染中使用光照  
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
//    glFlush( );     // 处理绘图pipeLine
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
//		mouseX = x;//当左键按下时记录鼠标坐标  
//		mouseY = y;  
//	}  
//}
//
//void mouseMove(int x, int y)  {  
//	GLint deltax = mouseX - x;  
//	GLint deltay = mouseY - y;  
//	angleY += 360*(GLfloat)deltax / (GLfloat)winWidth;//根据屏幕上鼠标滑动的距离来设置旋转的角度  
//	angleX += 360*(GLfloat)deltay / (GLfloat)winHeight;  
//	mouseX = x;//记录此时的鼠标坐标，更新鼠标坐标  
//	mouseY = y;//若是没有这两句语句，滑动是旋转会变得不可控  
//	glutPostRedisplay();  
//}  
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);  // 初始化GLUT环境
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // GLUT显示模式：单缓冲区、RGB颜色模型
//    //glutInitWindowPosition(50, 100);   // 窗口左上角的位置
//    glutInitWindowSize(winWidth,winHeight);      // 显示窗口的大小
//    glutCreateWindow("An Example of OpenGL"); // 创建显示窗口，加上标题
//
//    init( );                            
//    glutDisplayFunc(draw);       // 调用绘图函数
//	glutReshapeFunc(resize);    // 改变显示窗口时调用
//	glutSpecialFunc(move);     // 功能键处理
//	glutMouseFunc(moseButtonDown); //处理鼠标按键
//	glutMotionFunc(mouseMove); //处理鼠标移动
//    glutMainLoop( );                // 进入事件处理循环
//    return 0;
//}

//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>      // OPenGL实用工具库
//
////#include <math.h>
//int dx=0, dy=0; // 平移变量
//float angle=0;  // 旋转角度
//int mouseX=0,mouseY=0; //鼠标位置
//const int XL=100,XR=300,YB=100,YT=300;
//
//void init(void)
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);  // 设置背景颜色
//
//    glMatrixMode(GL_PROJECTION);       // 设置投影参数
//    gluOrtho2D(0.0, 600.0, 0.0, 450.0); // 设置场景的大小
//}
////按上下左右键移动图形
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
//// 按下鼠标左键记下当前位置
//void mouseButtonDown(int key,int action,int x,int y)
//{
//	if(key==GLUT_LEFT_BUTTON && action==GLUT_DOWN)
//	{
//		mouseX=x;
//		mouseY=y;
//	}
//}
//// 移动鼠标确定旋转角度
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
//    glColor3f(1.0, 0.0, 0.0);      // 设置画图颜色
//    glLineWidth(3);                // 设置边框宽度
//	glPointSize(3);
//	glPushMatrix();    
//	glTranslatef(dx,dy,0); //图形变换操作须放在绘制之前
//	glRotatef(angle,0,0,1);
//	glBegin(GL_LINE_LOOP);
//		glVertex2i(XL,YT);
//		glVertex2i(XL,YB);
//        glVertex2i(XR,YB);
//		glVertex2i(XR,YT);
//    glEnd( );	
//	
//	glPopMatrix();
//    glFlush( );     // 处理绘图pipeLine
//	//glutSwapBuffers(); //GLUT_DOUBLE
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);  // 初始化GLUT环境
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);   // GLUT显示模式：单缓冲区、RGB颜色模型
//    //glutInitWindowPosition(50, 100);   // 窗口左上角的位置
//    glutInitWindowSize(800, 600);      // 显示窗口的大小
//    glutCreateWindow("An Example of OpenGL"); // 创建显示窗口，加上标题
//
//    init( );                            
//    glutDisplayFunc(draw);           // 调用绘图函数
//	glutSpecialFunc(move);			 // 功能键响应
//	glutMouseFunc(mouseButtonDown);  // 鼠标按键响应
//	glutMotionFunc(mouseMotion);     // 鼠标移动响应
//    glutMainLoop( );				 // 进入事件处理循环
//    return 0;
//}

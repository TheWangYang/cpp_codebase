//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>
//#include <stdlib.h>
//#include <math.h>
//#include <stdio.h>
//
//
////定义的PI常量（使用的double双精度类型） 
//const GLfloat PI = 3.14159265357f;
//
////绘制五角星函数 
//void myDisplay(void) {
//    GLfloat a = 1 / (2 - 2 * cos(72 * PI / 180));
//    GLfloat bx = a*cos(18 * PI / 180);
//    GLfloat by = a*sin(18 * PI / 180);
//    GLfloat cy = -a*cos(18 * PI / 180);
//    //定义五个顶点的坐标（x,y） 
//    GLfloat pointB[2] = { bx, by },//设置B点坐标 
//        pointC[2] = { 0.5, cy },  //设置C点坐标
//        pointD[2] = { -0.5, cy },//直接设置D的横坐标与C点对称，纵坐标和点C一样 
//        pointE[2] = { -bx, by },//表示和B点的横坐标bx关于y轴对称 
//        pointA[2] = { 0,a };  //设置A点坐标 
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    //依据A->C->E->B->D->A的顺序一笔绘制五角星
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
////main方法调用 
//int main(int argc, char *argv[]) { //参数用来实现glutInit初始化 
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//    //设置窗口显示位置（按左上角为基准） 
//	glutInitWindowPosition(100, 100);
//	//设置窗口大小 
//    glutInitWindowSize(800, 800);
//    //设置绘制窗口标题 
//    glutCreateWindow("OpenGL绘制五角星显示窗口");
//    
//    glutDisplayFunc(&myDisplay);  //调用绘制五角星方法实现绘制
//	 
//    //glutMainLoop进入GLUT事件处理循环，让所有的与“事件”有关的函数调用无限循环。
//    glutMainLoop();  //表示设置线程循环（不至于显示一次就取消）  
//    return 0;
//}
//
//
//
//


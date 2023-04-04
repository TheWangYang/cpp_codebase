//#define GLUT_DISABLE_ATEXIT_HACK
//#include <iostream>
//#include <windows.h>
//#include <math.h>
//#include <GL/glut.h>      // OPenGL实用工具库
//#include <gl\GL.h>
//#include <gl\GLU.h>
//
//using namespace std;
//
//#define pi 3.1415926
//
//
//void init(void){
//    glClearColor(1.0, 1.0, 1.0, 0.0);  
//    glMatrixMode(GL_PROJECTION);      
//    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
//}
//
//void ChangeSize(GLsizei w, GLsizei h) {
//    if (h == 0)
//        h = 1;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    if (w <= h)
//        glOrtho(0.0f, 600.0f, 0.0f, 600.0f * h / w, 1.0, -1.0);
//    else
//        glOrtho(0.0f, 600.0f * w / h, 0.0f, 600.0f,1.0, -1.0);
//}
//
//void CirclePoint(int x0, int y0, int x, int y) {
//    glColor3f(0.0, 0.0, 1.0);  
//    glVertex2f(x, y); glVertex2f(y - (y0 - x0), x + (y0 - x0));
//    glVertex2f(y - (y0 - x0), x0 + y0 - x); glVertex2f(x, 2 * y0 - y);
//    glVertex2f(2 * x0 - x, 2 * y0 - y); glVertex2f(x0 + y0 - y, x0 + y0 - x);
//    glVertex2f(x0 + y0 - y, x + (y0 - x0)); glVertex2f(2 * x0 - x, y);
//}
//
////中点画圆算法
//void MidPointCircle(int x0, int y0, int r){
//    glColor3f(0.0, 0.0, 1.0);  
//    glPointSize(2.0f);       
//    glVertex2f(x0, y0);  //圆心      
//    int x, y;
//    int d, b;
//    x = x0; y = r + y0; d = 5 - 4 * r; b = y0 - x0;
//    CirclePoint(x0, y0, x, y);
//    while (x + b <= y){
//        if (d < 0)
//            d += 8 * (x - x0) + 12;
//        else {
//            d += 8 * x - 8 * y + 8 * b + 16;
//            y--;
//        }
//        x++;
//        CirclePoint(x0, y0, x, y);
//    } 
//}
//
//void display(){
//    glClear(GL_COLOR_BUFFER_BIT);
//    glBegin(GL_POINTS);
//    MidPointCircle(300, 200, 50);
//    glEnd();
//    glFlush();
//}
//
//int main(int argc, char** argv){
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); 
//    glutInitWindowPosition(100, 100);            
//    glutInitWindowSize(500, 500);               
//    glutCreateWindow("Line Algorithm");           
//    glutDisplayFunc(display);                  
//    glutReshapeFunc(ChangeSize);
//    init();
//    glutMainLoop();             
//    return 0;
//}
//
//


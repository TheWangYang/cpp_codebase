//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <iostream>
//#include <GL/glut.h>
//
//
//using namespace std;
//
//const int POINTNUM = 3;
//
////链表的实现
//typedef struct XET {
// float x;
// float dx, ymax;
// XET* next;
//}AET, NET;
//
////结构体对于某一个点的实现
//struct point {
// float x;
// float y;
//};
//
//point polypoint[POINTNUM]; //定义Student类型的数组stu
//
////扫描线算法绘制三角形函数 
//void PolyScan() {
// int MaxY = 0;
// int i;
// for (i = 0; i < POINTNUM; i++) {
//  if (polypoint[i].y > MaxY)
//   MaxY = polypoint[i].y;
// }
// //选出最大的顶点所对应的y值
// AET* pAET = new AET;
// pAET->next = NULL;
// NET* pNET[1024];
// for (i = 0; i <= MaxY; i++) {
//  pNET[i] = new NET;
//  pNET[i]->next = NULL;
// }//初始化扫描边的活性边表
// glClear(GL_COLOR_BUFFER_BIT);
// glColor3f(0.0, 0.0, 0.0);
// glBegin(GL_POINTS);
// //一个点跟前面的点形成一条线段,同时跟后面一个点形成线段
// for (i = 0; i < MaxY; i++) {
//  for (int j = 0; j < POINTNUM; j++) {
//   if (polypoint[j].y == i) {
//    if (polypoint[(j - 1 + POINTNUM) % POINTNUM].y > polypoint[j].y) {
//     NET* p = new NET;
//     p->x = polypoint[j].x;
//     p->ymax = polypoint[(j - 1 + POINTNUM) % POINTNUM].y;
//     p->dx = (polypoint[(j - 1 + POINTNUM) % POINTNUM].x - polypoint[j].x) / (polypoint[(j - 1 + POINTNUM) % POINTNUM].y - polypoint[j].y);
//     p->next = pNET[i]->next;
//     pNET[i]->next = p;
//    }
//    if (polypoint[(j + 1 + POINTNUM) % POINTNUM].y > polypoint[j].y) {
//     NET* p = new NET;
//     p->x = polypoint[j].x;
//     p->ymax = polypoint[(j + 1 + POINTNUM) % POINTNUM].y;
//     p->dx = (polypoint[(j + 1 + POINTNUM) % POINTNUM].x - polypoint[j].x) / (polypoint[(j + 1 + POINTNUM) % POINTNUM].y - polypoint[j].y);
//     p->next = pNET[i]->next;
//     pNET[i]->next = p;
//    }
//   }
//  }
// }
// 
// //把新边表net[i]中的边节点用插入排序法插入AET表，使之按照x的坐标递增顺序排序
//  for (i = 0; i <= MaxY; i++) {
//  NET* p = pAET->next;
//  while (p) {
//   p->x = p->x + p->dx;
//   p = p->next;
//  }
//  AET* tq = pAET;
//  p = pAET->next;
//  tq->next = NULL;
//  while (p) {
//   while (tq->next && p->x >= tq->next->x)//重新排序
//    tq = tq->next;
//   NET* s = p->next;
//   p->next = tq->next;
//   tq->next = p;
//   p = s;
//   tq = pAET;
//  }
//  //遍历AET表，把配对交点的区间(左闭右开）上的像素(x,y)
//  AET* q = pAET;
//  p = q->next;
//  while (p) {
//   if (p->ymax == i) {
//    q->next = p->next;
//    delete p;
//    p = q->next;
//   }
//   else {
//    q = q->next;
//    p = q->next;
//   }
//  }
//  p = pNET[i]->next;
//  q = pAET;
//  while (p) {
//   while (q->next && p->x >= q->next->x)
//    q = q->next;
//   NET* s = p->next;
//   p->next = q->next;
//   q->next = p;
//   p = s;
//   q = pAET;
//  }
//  p = pAET->next;
//  while (p && p->next) {
//   for (float j = p->x; j <= p->next->x; j++) {
//    glVertex2i(static_cast<int>(j), i);//改写像素的颜色值
//   }
//   p = p->next->next;
//  }
// }
// glEnd();
// glFlush();
//}
//
//int main(int argc, char** argv) {
// glutInit(&argc, argv);//窗口的初始化
// glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//窗口谋模式的设定
// glutInitWindowPosition(50, 100);//窗口位置的设定
// glutInitWindowSize(400, 300);//窗口大小的设定
// glutCreateWindow("多边形扫描转换算法");
// glClearColor(1.0, 1.0, 1.0, 0.0);
// glMatrixMode(GL_PROJECTION);
// gluOrtho2D(0.0, 600.0, 0.0, 450.0);
// glutDisplayFunc(PolyScan);//调用函数
// glutMainLoop();
// 
// return 0;
//}
//
//
//


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
////�����ʵ��
//typedef struct XET {
// float x;
// float dx, ymax;
// XET* next;
//}AET, NET;
//
////�ṹ�����ĳһ�����ʵ��
//struct point {
// float x;
// float y;
//};
//
//point polypoint[POINTNUM]; //����Student���͵�����stu
//
////ɨ�����㷨���������κ��� 
//void PolyScan() {
// int MaxY = 0;
// int i;
// for (i = 0; i < POINTNUM; i++) {
//  if (polypoint[i].y > MaxY)
//   MaxY = polypoint[i].y;
// }
// //ѡ�����Ķ�������Ӧ��yֵ
// AET* pAET = new AET;
// pAET->next = NULL;
// NET* pNET[1024];
// for (i = 0; i <= MaxY; i++) {
//  pNET[i] = new NET;
//  pNET[i]->next = NULL;
// }//��ʼ��ɨ��ߵĻ��Ա߱�
// glClear(GL_COLOR_BUFFER_BIT);
// glColor3f(0.0, 0.0, 0.0);
// glBegin(GL_POINTS);
// //һ�����ǰ��ĵ��γ�һ���߶�,ͬʱ������һ�����γ��߶�
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
// //���±߱�net[i]�еı߽ڵ��ò������򷨲���AET��ʹ֮����x���������˳������
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
//   while (tq->next && p->x >= tq->next->x)//��������
//    tq = tq->next;
//   NET* s = p->next;
//   p->next = tq->next;
//   tq->next = p;
//   p = s;
//   tq = pAET;
//  }
//  //����AET������Խ��������(����ҿ����ϵ�����(x,y)
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
//    glVertex2i(static_cast<int>(j), i);//��д���ص���ɫֵ
//   }
//   p = p->next->next;
//  }
// }
// glEnd();
// glFlush();
//}
//
//int main(int argc, char** argv) {
// glutInit(&argc, argv);//���ڵĳ�ʼ��
// glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//����ıģʽ���趨
// glutInitWindowPosition(50, 100);//����λ�õ��趨
// glutInitWindowSize(400, 300);//���ڴ�С���趨
// glutCreateWindow("�����ɨ��ת���㷨");
// glClearColor(1.0, 1.0, 1.0, 0.0);
// glMatrixMode(GL_PROJECTION);
// gluOrtho2D(0.0, 600.0, 0.0, 450.0);
// glutDisplayFunc(PolyScan);//���ú���
// glutMainLoop();
// 
// return 0;
//}
//
//
//


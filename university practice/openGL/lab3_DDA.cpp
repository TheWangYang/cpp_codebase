//#define GLUT_DISABLE_ATEXIT_HACK
//#include <windows.h>
//#include <GL/glut.h>      // OPenGLʵ�ù��߿�
//
////���к������� 
//void myDisplay(void);//���������������lineDDA
//void setPixel(int x,int y);//�̿����ﻭ��ĺ�������OpenGL�п�����glVertex��ʵ��
//int round(const float a);
//void ChangeSize(GLsizei w, GLsizei h);
//void lineDDA(int x0,int y0,int xEnd,int yEnd);
// 
//void myDisplay(void){
//    //glClear(GL_COLOR_BUFFER_BIT);  //��仰������Ҳ���� 
//	lineDDA(55,55,200,260);  //���û��ߵ���ʼ�����ֹ�� 
//}
// 
//void setPixel(int x,int y){
//	//��OpenGL�Լ��ĺ���ʵ�����ϵ�setPixel
//	glPointSize(5.0f);
//	glBegin(GL_POINTS);
//	glVertex2i(x,y);
//	glEnd();
//	glFlush();
//}
// 
////ȡ����ֵ��Լ�� 
//int round(const float a){
//	return int(a+0.5);
//}
// 
////���ڴ�С�ı�ʱ���õĵǼǺ���
//void ChangeSize(GLsizei w, GLsizei h){
//    if(h==0)     
//		h=1;
//    glViewport(0,0,w,h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    if (w <= h)
//        glOrtho(0.0f,250.0f,0.0f,250.0f*h/w,1.0,-1.0);
//    else
//        glOrtho(0.0f,250.0f*w/h,0.0f,250.0f,1.0,-1.0);
//}
//
////���õĻ��ߺ����������Ƿֱ��ǿ�ʼ�ͽ����㣩 
//void lineDDA(int x0,int y0,int xEnd,int yEnd){
//	glPointSize(3.0f);//�������ص��С
//	int dx=xEnd-x0,dy=yEnd-y0,steps,k;
//	float xIncrement,yIncrement,x=x0,y=y0;
//	if(abs(dx)>abs(dy))//ȷ��������˭���ȡ˭
//		steps=abs(dx);
//	else
//		steps=abs(dy);
//	xIncrement=float(dx)/float(steps);//����������һ����Ϊ1����һ����Ϊб��k
//	yIncrement=float(dy)/float(steps);
//	setPixel(round(x),round(y));//����ÿ�ζ�����С��1��������������Ҫȡ��
//	for(k=0;k<steps;k++){
//		/*
//		glBegin(GL_POINTS);
//		glVertex2i((int)x,(int)y);
//		glEnd();
//		glFlush();
//		*/
//		x+=xIncrement;
//		y+=yIncrement;
//		setPixel(round(x),round(y));
//	}
//}
//
////main����ʵ�ֻ��� 
//int main(int argc,char* argv[]){
//	glutInit(&argc,argv);
//	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
//	glutInitWindowPosition(250,200);
//	glutInitWindowSize(600,600);
//	glutCreateWindow("DDA Practice");
//	glutDisplayFunc(&myDisplay);
//	glutReshapeFunc(ChangeSize);
//	glutMainLoop();
//	return 0;
//}
//


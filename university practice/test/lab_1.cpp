#include <iostream>
#include <math.h>

using namespace std;


//����Point �ṹ��
struct Point{
	float x;
	float y;	
}; 

//����������֮��ľ��� 
double Distance(struct Point p1,struct Point p2){
	float dis;
	dis = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	return dis;
} 



int main (){
	struct Point p1,p2;
	cout << "������p1�������" << endl;
	cin >> p1.x >> p1.y;
	cout << "������p2�������" << endl;
	cin >> p2.x >> p2.y;
	
	cout << "�õ������ľ����ǣ�" << Distance(p1,p2) << endl;
	return 0;
}



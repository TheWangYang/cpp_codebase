#include <iostream>
#include <math.h>

using namespace std;


//定义Point 结构体
struct Point{
	float x;
	float y;	
}; 

//定义两个点之间的距离 
double Distance(struct Point p1,struct Point p2){
	float dis;
	dis = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	return dis;
} 



int main (){
	struct Point p1,p2;
	cout << "请输入p1点的坐标" << endl;
	cin >> p1.x >> p1.y;
	cout << "请输入p2点的坐标" << endl;
	cin >> p2.x >> p2.y;
	
	cout << "得到两点间的距离是：" << Distance(p1,p2) << endl;
	return 0;
}



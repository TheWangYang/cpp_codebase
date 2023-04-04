#include <iostream>
#include <string.h> 
using namespace std;

int main(){
	//测试数组的赋值
	int a[5] = {1,2,3,4,5};
	//赋0
	memset (a,-1,sizeof(a));
	
	for(int i = 0;i < 5;i ++){
		cout << a[i] << " " ;
	} 
	
	return 0;
}

#include <iostream>
#include <stdio.h> 

using namespace std;


void swapByAddress(int* a,int* b){
		int tmp = *a;
		*a = *b;
		*b = tmp; 
} 
	
int main(){
   	//cout << "我一定能行！" << endl;
	
	//回顾c语法
	/*int a, b;
	scanf("%d %d",&a,&b);
	printf("%d",a + b);
	return 0;*/
	
	//2021.4.11 下午 15:06训练
	
	//测试使用指针变量实现两个数的交换
	/*int a = 10,b=  11;
	cout << a <<  " " << b << endl;
	swapByAddress(&a,&b);
	cout << a << " " << b << endl;*/
	
	
	// 
	
}





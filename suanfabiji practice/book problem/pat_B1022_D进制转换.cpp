#include <iostream>

using namespace std;


//题目：先得到十进制的两个数A+B的和，然后进行m进制转换 
int main(){
	//定义变量接受输入 
	int a,b,d;
	 
	 scanf("%d %d %d",&a,&b,&d);
	 //得到sum总和 
	 int sum  = a + b;
	 
	 int ans [31], num = 0;  //定义数组保存转换后的d进制数；num表示第几个位置的转换后的数字
	 do{
	 	ans[num++] = sum % d;
	 	sum /= d;
	 }while(sum != 0); //当sum不等于0的时候再次进入循环 
	 
	 
	 //输出结果
	 for(int i = num - 1 ;i >= 0;i -- ){  //倒序输出数组元素，即是结果 
	 	printf("%d",ans[i]);
	 } 
	return 0;
}




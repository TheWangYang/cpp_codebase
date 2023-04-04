#include <iostream>
#define MAX (-2147483647L - 1)

using namespace std;
int main (){
	int l;
	int k[100];
	 
	cin >> l;
	
	for(int i = 0;i < l;i ++){  //循环初始化数组
		cin >> k[i];
	}
	
	int max = MAX;  //表示先将max变量赋值为最小值 MAX(宏定义)
	int index;
	 
	//寻找数组最大值
	for(int i = 0;i < l;i ++){
		if(max < k[i]){
			max = k[i];
			index = i;
		}
	} 
	 
	 cout << max << " " << index << endl; 
	return 0;
} 



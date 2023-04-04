#include <iostream>
#define N   1005

using namespace std;

int main(){
	int l;  //定义存储数组长度的变量l 
	cin >> l;  //输入数组长度 
	
	int  v[N];  //创造一个长度为l的数组
	
	for(int i = 0; i < l;i ++){
		cin >> v[i];  //得到初始化数组 
	}
	
	int n; //设置的存储测试次数的变量 
	cin >> n;  //输入得到测试次数 
	
	
	int begin = 0;//设置的每一次开始的下标 
	int end = 0; //设置的每一次结束的下标 
	int idx = 0;//设置的需要得到第idx大元素 
		
	for (int i = 0;i < n ;i ++){//外层循环实现所有次数测试 
		 
	    cin >> begin >> end >> idx;
	    
	    int inner_v[N];
	    
		int inner_i = 0;
		
	    for(int ind = begin - 1; ind <= end - 1;ind ++ ){ //得到截取的数组元素
			inner_v[inner_i] = v[ind];
			inner_i ++;
		}
		
		//调用冒泡排序算法
		for(int index = 0;index < inner_i - 1;index ++){
			for (int j = index + 1;j < inner_i;j ++){
				if(inner_v[index] < inner_v[j]){
					int temp = inner_v[index];
					inner_v[index] = inner_v[j];
					inner_v[j] = temp;
				}
			}
		}
		
		//输出第idx大的元素 
		cout << inner_v[idx - 1] << endl;
		
	}
	
	return 0;
}
  



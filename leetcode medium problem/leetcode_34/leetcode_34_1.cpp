#include <iostream>

using namespace std;


//设置的返回开始和结束下标地址的数组 
vector<int> searchRange(vector<int>& nums, int target) {
	//设置开始坐标 
	int begin = -1;
	
	//设置结束坐标 
	int end = -1;
	
	//将坐标变量设置为成员变量
	int i; 
	
	//设置看是否包含元素
	int flag = 0;
	 
	for(i = 0;i < nums.size();i ++){  //循环得到数组坐标 
		
		if(nums[i] == target){  //表示第一次相等那么实现
			begin = i; 
			flag = 1;  //表示包含元素 
			break;
		} 
	}
	
	
	//定义结果返回数组
	vector<int> result; 
	//如果flag == 1表示包含元素在内 
	if(flag == 1){
		//继续循环 
		for(;i < nums.size();i++){
			if(nums[i] == target){
				end = i;
			}	
		}
	}
	
	//结果返回数组赋值 
		result.push_back(begin);
		result.push_back(end); 
	
	return result;
}

 
int main(){
	
	return 0;
}





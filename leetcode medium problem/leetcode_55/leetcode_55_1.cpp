#include <iostream>

using namespace std;


//实现判断是否可以到达最后一个元素的位置的函数 
bool canJump(vector<int>& nums) {
        int position =  nums.size();//记载数组的长度 
        int farest = 0;//设置可以到达的最远距离是0; 
        
        for(int i = 0;i < position;i ++ ){//循环判断从0开始之后可以达到的最远距离 
        	if(i <= farest){//如果当前的坐标小于最远距离，那么表示是可以达到的 
        		if(i + nums[i] > farest){//判断当前的坐标加上本身的值，是不是大于最远距离 
        			farest = i + nums[i];//更新最远距离 
				}
				
				if(farest >= position - 1){ //如果最远距离大于数组的最大下标 
					return true;//返回可以达到 
				}
			}
		}
		
		return false;
}



int main (){
	
	
	return 0;
}



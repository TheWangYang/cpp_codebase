#include<iostream>


using namespace std;


//实现跳转的函数 
int jump(vector<int>& nums) {
	
	int position = nums.size() - 1;
	int step  = 0;
	
	while (position > 0){ //表示还没有完成跳转
		for(int i = 0;i < position;i ++){
			if(i + nums[i] >= position){
				position = i;
				step ++;
				break;  //表示本次跳出循环，继续进行 
			}
		} 
		return step;
	} 
}
    
    
int main(){
	return 0;
}



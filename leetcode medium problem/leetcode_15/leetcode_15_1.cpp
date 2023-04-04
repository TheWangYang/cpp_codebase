#include <iostream>

using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
	//直接暴力循环实现
	//设置一个保存结果的数组
	vector<vector<int>> keep;
	
	//得到nums数组的长度
	int n =  nums.size(); 
	
	//先将给的数组进行排序
	sort(nums.begin(),nums.end()); 
	 
	//第一层循环找到第一个数 
	for(int i = 0;i < n;i ++){
		
		//需要判断和上一次的数不同，否则得到的结果重复
		if(i> 0 && nums[i] == nums[i - 1]){
			continue;  //那么这种情况一定是重复的，那么直接跳过即可 
		} 
		
		int z = n - 1;//表示得到第三个元素的指针指向最右端
		
		//并且设置此次需要找到的两个指针相加的和
		int inner_sum = -nums[i];
		 
		//第二层循环找到第二个数
		//下标从i + 1开始
		for(int j = i + 1;j < n;j++){
			
			if(j > i + 1 && nums[j] == nums[j - 1]){
				continue; //表示和上一次的第二个数相同那么直接跳过，否则得到的一定相同 
			}
			
			//得到第三个元素的指针从右向左滑动 
			while(j < z && nums[z] + nums[j] > inner_sum){
				z--;//表示内层的指针向左滑动 
			}
			
			if(j == z){ //表示指针重复，那么跳出本层循环
				break;
			}
			
			if(nums[j] + nums[z] == inner_sum){
				vector<int> inner_keep;
				inner_keep.push_back(nums[i]);
				inner_keep.push_back(nums[j]);
				inner_keep.push_back(nums[z]);
				
				keep.push_back(inner_keep);
			} 
		}
	}
	
	return keep;
}
    
    
int main(){
	
	return 0;
}



#include <iostream>

using namespace std;

int n;
vector<int> p;
vector<int> numbers;
vector<bool> hashTable;
vector<vector<int>> keep;

//得到全排列的入口函数 
vector<vector<int>> permute(vector<int>& nums) {
		numbers = nums;
		//得到数组的长度 
		 n = nums.size();
		 
		//得到nums数组中最大数
		if(n == 1){
			return {{nums[0]}};
		}
	
		//定义一个当前排列的数组
		 p = vector<int>(n,0);
		//定义一个hashTable哈希映射表
		 hashTable = vector<bool>(21,false);
		 generateP(0);
		 return keep;
}


//得到全排列的计算函数
void generateP(int index){
	
	if(index == n){ //表示已经处理完排列的1-n位
	 //保存当前排列
	vector<int> inner_keep;
	for(int i = 0;i < n;i++){
		inner_keep.push_back(p[i]);
	}
	keep.push_back(inner_keep);
	return;	
	}
	
	//表示由映射表格得到的全排列 
	for(int  i = 0;i < n;i++){  //表示nums的数组下标 
		//得到当前的下标对应的数字
		int x = nums[i];
		
		if(x < 0){ //表示小于0的时候将x + 30;
			x = x + 21;//表示换成了数据中间
		} 
		
		if(hashTable[x] == false){  //表示当前的hashTable中没有存在当前的数，可以加进去
			
			if(x >= 11){//表示数值是小于0的
				p[index] = x - 21;  //得到原来的值 
			}else{
				p[index]  = x;  //表示将x对应的数值加入到暂时的数组中
			} 
		
			hashTable[x]  = true; //表示加入进去之后，将 	
			generate(index + 1);
			hashTable[x] = false;
		}
		
	}
	
} 

int main(){
	
	return 0;
}



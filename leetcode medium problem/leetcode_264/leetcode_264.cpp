#include <iostream>

using namespace std;


//定义的判断第n个丑数是几的函数 
bool is_uglyNumber(int n){
	if(n < 0){  //如果n小于0，那么返回-1； 
		return false; 
	}
	
	while(n % 2 == 0){  //表示当n取模2的结果是0的时候将n除以2
		n = n / 2; 
	}
	
	while(n % 3 == 0){  //当n取模3的结果是0的时候将n除以3
		n = n / 3; 
	}
	
	while(n % 5 == 0){ //当n取5的结果是0的时候将n除以3
		n = n / 5; 
	}
	
	//最后判断n是不是1，是1的话返回true，否则返回false
	if(n == 1){
		return true;
	} else{
		return false;
	}
	 
}

int main(){
	
	//设置初始化的自增加变量（用来计数）,初始值从第1个开始 
	int num = 1;
	
	//表示从1开始逐个判断 
	int m = 1;
	int uglym = 1;
	int current = 1; 
	
	while(num <= 10){
		bool is_ugly = is_uglyNumber(m);
		
		if(is_ugly){  //表示是丑数，那么num ++
			num ++;
			current = m;
		}
		m++; 
	} 
	
	cout << current << endl; 
		
	return 0;
}



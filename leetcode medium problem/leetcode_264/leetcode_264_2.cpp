#include <iostream>
#include <math.h>
#include <vector>

using namespace std;



 
//使用动态规划解决问题 
int uglyNumber(int n){
	//定义用于动态规划的vector容器
	vector<int> dp(n + 1);
	//设置初值dp[1]
	dp [1] = 1;  //直接在1的位置上设置初始值 
	//设置指针
	int p2 = 2,p3 = 1,p5 = 1;
	for(int i = 2;i <= n;i ++){  //循环实现dp数组的赋值
		//得到当前下标的数字分别和2 3 5相乘之后的最小值
		int num2 = dp[p2] * 2;
		int num3 = dp[p3] * 3;
		int num5 = dp[p5] * 5;
		
		//调用得最小值函数给下一个数组赋值 
		dp[i] = min(min(num2,num3),num5);
		
		if(dp[i] == num2){
			p2++; 
		} 
		 
		 if(dp[i] == num3){
			p3++; 
		} 
		if(dp[i] == num5){
			p5++; 
		}
	}
	return dp[n];
}


int main (){
	int result = uglyNumber(10);
	cout << result << endl;
	return 0;
} 




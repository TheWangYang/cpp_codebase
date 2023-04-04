#include <iostream>

using namespace std;

//不同路径问题 
//使用动态规划实现 
int main(){
	//每一次向下或向右走一步，那么分别有：从i-1走过来；j-1走过来
	//动态规划方程为：f(i,j) = f(i - 1 + j) + f(i ,j - 1) (已理解)
	//那么初始化f(0,0) = 1;表示从左上角到左上角有一种方法
	//将i = 0 或 j = 0的函数值都设置为1（因为只有一种方法） 
	//使用vector数组保存对应格子可以到达的路径数，那么最后就可以得到最后的m * n位置的到达方案数目
	
	
	//定义保存方案数目的数组 
	vector<vector<int>> k(m, vector<int>(n));
	//使用for循环实现第一行和第一列的元素都设置为了1。
	for(int j = 0;j < n;j ++){
		k[0][j] = 0;
	} 
	
	for(int i = 0;i < m;i ++){
		k[i][0] = 1;
	}
	
	
	//然后进行动态规划
	for(int i = 1; i < m;i++){
		for(int j = 1;j < n;j++){
			k[i][j] = k[i - 1][j] + k[i][j - 1]; 
		}
	}
	
	return  k[m - 1][n - 1]; 
	 
}



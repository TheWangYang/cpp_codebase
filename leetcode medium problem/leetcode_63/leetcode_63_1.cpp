#include <iostream>

using namespace std;


//设置的实现有障碍物的时候的最短路径规划算法
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	//每一次向下或向右走一步，那么分别有：从i-1走过来；j-1走过来
	//动态规划方程为：f(i,j) = f(i - 1 + j) + f(i ,j - 1) (已理解)
	//那么初始化f(0,0) = 1;表示从左上角到左上角有一种方法
	//将i = 0 或 j = 0的函数值都设置为1（因为只有一种方法） 
	//使用vector数组保存对应格子可以到达的路径数，那么最后就可以得到最后的m * n位置的到达方案数目
	
	 //得到i的范围 
	 int n = obstacleGrid.size();
	 //得到j的范围 
	 int m = obstacleGrid.at(0).size();
	
	vector<int> f(m);
	
	//表示将计数的f的第一个位置的元素设置为对应的图中的第一个元素，如果是0那么设置为1，如果是1设置为0 
	f[0] =  (obstacleGrid[0][0] == 0);
	
		
	//然后进行动态规划
	for(int i = 0; i < n;i++){
		for(int j = 0;j < m;j++){
			
			if(obstacleGrid[i][j] == 1){
				f[j] = 0;//表示此路不通，设置滚动数组为0 
				continue;
			}
			
			//表示判断该位置的上一行坐标大于0，对应的元素为0 
			if(j - 1 >= 0 && obstacleGrid[i][j - 1] == 0){
				f[j] += f[j - 1];//表示此路畅通，那么设置对应道路的总数为上一个数组元素加1 
			}
		}
	}
	
	return  f.back(); //返回数组的最后一个元素 

}
    




int main(){
	
	
	return 0;
}




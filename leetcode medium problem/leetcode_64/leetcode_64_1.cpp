#include <iostream>

using namespace std;

//���õĵõ����·��������
int minPathSum(vector<vector<int>>& grid) {
	int n = grid.size();
	
	int m  = grid.at(0).size();
	
	if(n == 0 || m == 0){
		return 0;
	}
	
	auto dp = vector<vector<int>>(n,vector<int> (m));
	
	dp[0][0] = grid[0][0]; 
	
	
	for(int i = 1;i < n;i ++){
		dp[i][0] = dp[i - 1][0] + grid[i][0];
	}
	
	for(int j = 1; j < m;j++){
		dp[0][j] = dp[0][j - 1] + grid[0][j];
	}
	
	for(int i = 1;i < n;i++){
		for(int j = 1;j < m;j++){
			dp[i][j] = min(dp[i - 1][j],dp[i][j - 1]) + grid[i][j]; 
		}
	}
	
	return dp[n - 1][m - 1]; 
}



int main (){
	
	return 0;
} 



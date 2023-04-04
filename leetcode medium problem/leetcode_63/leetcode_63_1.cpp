#include <iostream>

using namespace std;


//���õ�ʵ�����ϰ����ʱ������·���滮�㷨
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	//ÿһ�����»�������һ������ô�ֱ��У���i-1�߹�����j-1�߹���
	//��̬�滮����Ϊ��f(i,j) = f(i - 1 + j) + f(i ,j - 1) (�����)
	//��ô��ʼ��f(0,0) = 1;��ʾ�����Ͻǵ����Ͻ���һ�ַ���
	//��i = 0 �� j = 0�ĺ���ֵ������Ϊ1����Ϊֻ��һ�ַ����� 
	//ʹ��vector���鱣���Ӧ���ӿ��Ե����·��������ô���Ϳ��Եõ�����m * nλ�õĵ��﷽����Ŀ
	
	 //�õ�i�ķ�Χ 
	 int n = obstacleGrid.size();
	 //�õ�j�ķ�Χ 
	 int m = obstacleGrid.at(0).size();
	
	vector<int> f(m);
	
	//��ʾ��������f�ĵ�һ��λ�õ�Ԫ������Ϊ��Ӧ��ͼ�еĵ�һ��Ԫ�أ������0��ô����Ϊ1�������1����Ϊ0 
	f[0] =  (obstacleGrid[0][0] == 0);
	
		
	//Ȼ����ж�̬�滮
	for(int i = 0; i < n;i++){
		for(int j = 0;j < m;j++){
			
			if(obstacleGrid[i][j] == 1){
				f[j] = 0;//��ʾ��·��ͨ�����ù�������Ϊ0 
				continue;
			}
			
			//��ʾ�жϸ�λ�õ���һ���������0����Ӧ��Ԫ��Ϊ0 
			if(j - 1 >= 0 && obstacleGrid[i][j - 1] == 0){
				f[j] += f[j - 1];//��ʾ��·��ͨ����ô���ö�Ӧ��·������Ϊ��һ������Ԫ�ؼ�1 
			}
		}
	}
	
	return  f.back(); //������������һ��Ԫ�� 

}
    




int main(){
	
	
	return 0;
}




#include <iostream>
#include <math.h>
#include <vector>

using namespace std;



 
//ʹ�ö�̬�滮������� 
int uglyNumber(int n){
	//�������ڶ�̬�滮��vector����
	vector<int> dp(n + 1);
	//���ó�ֵdp[1]
	dp [1] = 1;  //ֱ����1��λ�������ó�ʼֵ 
	//����ָ��
	int p2 = 2,p3 = 1,p5 = 1;
	for(int i = 2;i <= n;i ++){  //ѭ��ʵ��dp����ĸ�ֵ
		//�õ���ǰ�±�����ֱַ��2 3 5���֮�����Сֵ
		int num2 = dp[p2] * 2;
		int num3 = dp[p3] * 3;
		int num5 = dp[p5] * 5;
		
		//���õ���Сֵ��������һ�����鸳ֵ 
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




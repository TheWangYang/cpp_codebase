#include <iostream>
#include <cstdio>

using namespace std;

//题目：pat_B1032_挖掘机技术哪家强
//定义常量并设置为最大值，表示最大是10 ^ 5 
const int maxn = 100010;
//定义数组保存学校的总分
int school [maxn] = {0};  //初始值设置为0

int main (){
	int n, schId,score;  //定义n个学生，学生的id，学生的分数
	scanf("%d",&n);  //得到n的具体值
	//循环得到每一个学生的分数
	for(int i = 0;i < n;i ++){
		scanf("%d %d",&schId,&score);
		school[schId] += score;  //根据学校的id得到总分 
	}
	
	int k = 1,MAX = 1;  //记录最高分的学校id以及对应的分数
	for(int i = 1;i <= n;i ++){  //遍历数组得到最高分
		if(school[i] > MAX){  //表示将原来的最大值进行替换
			MAX  = school[i];
			k = i; 
		} 
	}
	
	printf("%d %d\n",k,MAX);  //输出结果 
	
	return 0;
}




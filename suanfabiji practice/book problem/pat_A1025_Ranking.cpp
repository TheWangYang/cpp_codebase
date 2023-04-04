#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;


//定义结构体实现学生个体的实现
struct student{
	char id[15];  //保存学生的注册账号的字符数组
	int score; // 保存学生的分数
	int location_number; //考场号
	int location_rank;  //考场内排名	
}keepstus[30010];  //注意看题目中的范围 

//排序规则函数 
int cmp(student a,student b){
	if(a.score != b.score){  //分数不同时按照分数从大到小排列
		return  a.score > b.score;
	} else{  //分数相同时按照id从小到达排列（） 
		return strcmp(a.id,b.id) < 0;
	}
}


int main(){
	int n,k,num = 0;// num表示考生总数
	
	scanf("%d",&n);  //表示获得考场总数
	
	//for循环读入考场中的所有考生信息 
	for(int i = 1;i <= n;i ++){
		//先得到每一个考场中的考生数
		scanf("%d",&k);
		//内部for循环得到每一个考生的信息
		for(int j  = 0 ;j < k;j ++){
			scanf("%s %d",keepstus[num].id,keepstus[num].score);  //得到考生的信息 
			keepstus[num].location_number = 1;  //表示将考生的考场号设置为i 
		}
		
		//对该考场内考生进行排名 
		sort(keepstus + num - k,keepstus + num,cmp);
		keepstus[num - k].location_rank = 1;  //设置该考场考生第一名
		
		//循环将该考场中所有考生进行排名
		for(int j = num - k + 1;j < num;j ++){  //表示从第2名开始判断名次 
			if(keepstus[j].score == keepstus[j - 1].score){ //表示两个考生的分数相同时，设置location_rank也相同
				keepstus[j].location_rank  = keepstus[j - 1].location_rank; 
			}else{//表示不相同的时候
			 	//设置的location_rank为本考生之前的人数
				keepstus[j].location_rank = j - (num - k) + 1;  
			}
		}
	} 
	
	//得到考生总数
	printf("%d\n",num);
	//将所有考生排序
	sort(keepstus,keepstus + num,cmp);  //这里使用了指针
	int r = 1; //当前考生的排名
	//for循环打印出来考生信息
	for(int j = 0;j < num;j++){
		if(j > 0 && keepstus[j].score != keepstus[j - 1].score){  //表示两个考生的分数不一样
			 r  = j + 1;// 表示将当前考生的名次加法1 
		}
		
		//打印输出考生的名词
		printf("%s",keepstus[j].id);
		printf("%d %d %d\n",r,keepstus[j].location_number,keepstus[j].location_rank); 
	} 
	return 0;
}




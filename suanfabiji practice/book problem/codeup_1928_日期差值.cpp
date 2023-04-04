#include <iostream>
#include <cstdio>

 
using namespace std;


	//定义的闰年和平年的每一个月的天数 
	int  month [13][2]  = {
		{0,0},
		{31,31},
		{28,29},
		{31,31},
		{30,30},
		{31,31},
		{30,30},
		{31,31},
		{31,31},
		{30,30},
		{31,31},
		{30,30},
		{31,31}	
	};
	
	//判断是否是闰年的函数
bool isLeap(int year){
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);	
} 


int main (){
	//定义变量保存两个日期 
	int time1,y1,m1,d1;
	int time2,y2,m2,d2;
	
	//循环得到两个日期
	while (scanf("%d%d",&time1,&time2) != EOF){  //使用该接受方法可以接受多组数据 
		if(time1 > time2){  //表示第一个日期晚于第二个日期 
			int temp = time2;
			time2 = time1;
			time1 = temp;
		}
		
		//得到两个日期的年月日 
		y1 =  time1 / 10000,m1 = time1 % 10000 / 100, d1 = time1 % 100;
		y2 = time2 / 10000,m2 = time2 % 10000 / 100, d2 = time2 % 100;
		
		
		//记录结果的变量(初始化为1)
		int ans = 1;
		 
		//第一个日期没有达到第二个日期时进行循环
		while(!((y1 == y2) && (m1 == m2) && (d1 == d2))){
			d1++;// 表示天数加1
			//判断天数是不是超过了当月的最大天数 
			if(d1 == month[m1][isLeap(y1)] + 1){  //表示当天数等于当月的最大天数 + 1的时候 
				m1 ++;  //日期设置为下个月 
				d1 = 1;
			}
			
			
			//判断月份是否等于13，如果等于13那么将年份加1 
			if(m1 == 13){
				y1 ++;
				m1 = 1;
			}
			
			ans ++; 
		}
		//最后结果输出
		printf("%d\n",ans); 
		
	}  
	return 0;
}




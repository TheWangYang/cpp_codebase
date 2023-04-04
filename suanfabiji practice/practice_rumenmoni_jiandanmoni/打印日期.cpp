#include <iostream>

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
	
	
//判断year是否是闰年 
bool isLeap(int year){
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); 
}
 
int main(){
	//定义保存年份 总天数的变量
	int year,days;
	//循环得到输入和输出结果 
	/**
	while(scanf("%d %d",&year,&days) != EOF){  //使用该种循环表示可以接受用户输入
		//定义一个天数记载变量
		int sum = 0; 
		//记载的是几月份 
		int i;
		
		if(isLeap(year)){  //是闰年
		
			//使用循环实现具体日期的确定
			for(i = 1;i < 13;i++){ 
				sum += month[i][1];
				if(sum >= days){  //表示此时已经接近days 
					  break;
				}
			}
			
			//得到前i - 1个月的天数总和
			int front_days = sum - month[i - 1][0];
			//使用days - front_days
			int current_days = days - front_days;
			printf("%04d-%02d-%02d\n", year, i, current_days);
		
		}else{
			
			//使用循环实现具体日期的确定
			for(i = 1;i < 13;i++){ 
				sum += month[i][0];
				if(sum >= days){  //表示此时已经接近days 
					  break;
				}
			}
			
			//得到前i - 1个月的天数总和
			int front_days = sum - month[i - 1][0];
			//使用days - front_days
			int current_days = days - front_days;
			
			printf("%04d-%02d-%02d\n", year, i, current_days);
			
		}
	}
	**/
	
	//定义当前的天数 
	int d = 0; 
	//定义的月份 
	int m = 1;
	
	//循环实现天数的增加 
	while(scanf("%d%d", &year, &days)!=EOF){
		while(days>0){   //以n的剩余天数作为循环条件 
			d++;  //加上一天 
			
			if(d == month[m][isLeap(year)]+1){  //直接判断是否是leap闰年 
				m++;
				d=1;
			}
			
			if(m==13){
				year++;
				m=1;
			}
			
			days--;
		}
		
		printf("%04d-%02d-%02d\n", year, m, d);
		m=1, d=0;
	}

	
	return 0;
} 





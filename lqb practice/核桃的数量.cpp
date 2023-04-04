#include <iostream>


using namespace std;

int main(){
	//定义三个变量保存用户输入的三个变量 
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	//先得到abc三个数的最大值
	int max  = 0;
	if(a > b){
		max = a;
		if(max < c){
			max = c;
		}
	}
		
		
	int rate  = 1;  //倍率 
	int result = 0; //结果
	 
	while(1){  //一直循环得到 
		result = max * rate;
		if(result % a  == 0 && result % b == 0 && result % c == 0){
			break;
		}
		rate ++;
	}
	
	printf("%d",result);
	 
	return 0;
} 




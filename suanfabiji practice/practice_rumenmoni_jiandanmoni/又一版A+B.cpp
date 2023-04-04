#include <iostream>
#include <string.h>

using namespace std;


int main(){
	//定义变量接受输入
	long  m;
	long long a,b;  //定义a b 都是long long 型的 
	
	//循环得到用户输入 
	while(scanf("%lld %lld %lld",&m,&a,&b)) {
		if(m == 0){ //当m为0时结束循环
			break; 
		} 
		//得到a b 的和 
		long long sum = a + b;
		
		
		//定义一个保存结果的数组
		int keep [50],num = 0;  //其中num表示数组下标
		
		//进制转换
		do{
			keep[num ++ ] = sum % m;
			sum  /= m;
		}while(sum != 0); 
		
	//输出结果
	 for(int i = num - 1 ;i >= 0;i -- ){  //倒序输出数组元素，即是结果 
	 	printf("%d",keep[i]);
	 }
	 printf("\n");
	 
//	 //重新清理数组和num
//	 memset(keep,0,sizeof(keep));
//	 num = 0; 
		
	} 
	return 0;
}





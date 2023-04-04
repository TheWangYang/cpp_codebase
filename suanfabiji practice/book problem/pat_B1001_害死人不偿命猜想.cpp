#include <iostream>

using namespace std;


//实现害死人不偿命猜想的函数
int main (){
	//定义n和step(计步变量) 
	int n ,step = 0; 
	//得到用户输入
	scanf("%d",&n);
	//while循环实现问题的解决
	while(n != 1){  //表示当n != 1的时候进入循环，否则就是答案 
		if(n % 2 == 0){  //表示是偶数，此时n = n / 2;
			n = n / 2; 
		}else {
			n = (3 * n + 1) / 2;
		}
		step ++;  //计步变量自增 
	} 
	
	//输出结果(并换行)
	printf("%d\n",step); 
	return 0;
}

#include <iostream>

using namespace std;

int main (){
	int n;
	cin >> n;
	 
	long chengji = 1;
	
	int num = 0;  //表示计第几个质数 
	 
	for(int i = 2;i <= 10000000;i ++){  //外层循环判断n（n个数字） 
		
		int flag = 0;
		
		for(int j = 2;j < i;j ++){ //内层判断是否是质数
			if(i % j == 0){
				flag = 1;
				break;
			} 
		}

		if(flag == 0){  //表示是质数 
			chengji = chengji * i;
			//cout << "此时值是：" << chengji << endl; 
			num++; 
		}
		
		
		if(num == n){ //表示等于n时跳出 
			break; 
		}
		
	}
	
	cout << (chengji % 50000) << endl;
	
	return 0;
} 



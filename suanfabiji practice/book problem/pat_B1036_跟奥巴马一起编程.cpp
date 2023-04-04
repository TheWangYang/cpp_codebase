#include <iostream>

using namespace std;

//题目：pat_B1036_跟奥巴马一起编程
int main(){
	//定义行 列变量
	int column ,row;
	
	char c;  //定义得到用户输入的字符
	//获得用户输入的列数 和 字符
	scanf("%d %c",&column,&c);
	//判断是不是偶数 
	if(column % 2 == 1){  //列数是奇数
		row = column / 2 + 1; 
	}else{
		row = column / 2;
	}
	
	//打印第一行
	for(int i = 0; i < column;i ++){
		printf("%c",c);
	} 
	
	//换行
	printf("\n"); 
	
	//打印第2 - (row - 1) 行
	for(int i = 2;i < row;i ++){  //循环表示第几行 
		//打印每一行的字符 
		printf("%c",c);
	
	//然后从第2列开始到column - 1列表结束都是空格
	for(int j = 2;j < column; j ++){
		printf(" ");  
	} 
	
	printf("%c\n",c);  //表示打印最后一列的字符，然后换行 
	
	}
	
	
	//打印row行
	for(int i = 0;i < column;i ++){
		printf("%c",c);
	} 
	
	return 0;
}




#include <iostream>
#include <string.h>

using namespace std;


//题目：说反话 解答代码（第二种方法（不适用EOF的方法）） 
int main(){
	//定义字符数组
	char  str[90];
	gets(str);  //得到用户输入
	
	int len = strlen(str), row = 0,column  = 0;  //row为行 column为列
	char keep [90][90];  //keep数组保存得到的划分单词
	
	//循环实现单词的分割
	for(int i =0 ;i < len;i ++){
		if(str[i] != ' '){  //表示不等于空格（还是一个单词） 
			keep[row][column ++] = str[i];
		}else{ //表示是空格，那么将row加上1，column = 0，注意加上结束符'\0'
			keep[row][column] = '\0'; 
			row++;
			column  = 0; 
		}
	} 
	
	//使用for循环倒序打印单词
	for(int r = row;r >=0;r--){
		printf("%s",keep[r]);
		if(r > 0){
			printf(" ");
		}	
	} 
	return 0;
}




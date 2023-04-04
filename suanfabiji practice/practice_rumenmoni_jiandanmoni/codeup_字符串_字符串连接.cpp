#include <iostream>
#include <string.h> 


//题目：字符串连接 
int main(){
	//由于有多组测试数据，那么使用while (scanf() != EOF)
	char str[200];  //表示接收字符串长度不超过100
	 
	while(gets(str) != NULL){ //表示当接收输入到每一行的尾部的时候跳转到下一行
		//处理每一行得到的字符
		//得到每一行的长度
		int len = strlen(str);
		int i;
		//第一个循环得到第一个单词 
		for(i = 0;i < len;i ++){  //循环得到两个字符串单词并拼接 
			if(str[i] != ' '){  //表示不等于空格，也就是先得到第一个单词 
				printf("%c",str[i]);  //直接打印字符 
			}else{
				continue;  //表示遇到空格直接跳过 
			} 
		}
		printf("\n");//打印完一组结果之后换行 
		
	}
	
	return 0;
}
 



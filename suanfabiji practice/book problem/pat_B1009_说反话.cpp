#include <iostream>

using namespace std;


//题目：pat_B1009_说反话-解答代码 
int main(){
	int num = 0; //单词的个数
	//用来保存单词字符的数组 
	char keep [90][90];
	//使用while循环得到用户输入
	while(scanf("%s",keep[num]) != EOF){  //一直输入到文件的末尾
		num ++; 
	}
	
	//for循环实现倒序输出
	for(int i = num - 1;i >= 0;i --){
		printf("%s",keep[i]); 
		if(i > 0){ //判断是否是最后一次输出，不是的话直接输出空格 
			printf(" "); 
		} 
	} 
	 
	return 0;
}




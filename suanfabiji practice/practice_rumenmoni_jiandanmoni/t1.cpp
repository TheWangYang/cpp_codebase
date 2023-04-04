#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include<cstring>//**<string.h>是不包括strlen的，要使用cstring**

using namespace std;

//定义实现从字符向long型数的转变函数
long transform(char *a,int len){
	//定义两个数的相加的和sum；定义下标j表示当前数字的所在位置（即是十位数还是个位数还是...）；
	//定义的i表示数组循环的下标 
    int sum=0,j=1,i;
    
    for(i=len-1; i>=0; i--){  //循环实现将char数组转换为long型数 
        if(a[i]>='0'&&a[i]<='9'){  //这里使用了ascii码，同时该判断还直接去除了,带来的干扰 
            sum+=(a[i]-48)*j;  //表示转换为数字 
            j*=10;
        }
    }
    
    
    //判断是否是负数，也就是char数字的第一个字符 
    if(a[0]=='-'){ 
        sum=-sum;
    } 
    return sum;  //返回结果 
}
 

//实现A+B结果运算 
int main(){
	//定义一个vector数组保存用户输入
	 
	//定义每一行的两个char类型的数组
	//长度设置为12（涵盖了最大数的范围） 
	char a [12];
	char b[12];
	
	//定义保存实际输入字符的长度
	int lena,lenb;
	//定义long型的 A 和 B 
	long A,B;
	
	//for循环实现结果输出 
	while(scanf("%s%s",&a,&b) != -1){  //当题中没有说输入数量的时候使用本方法接受输入 
		lena = strlen(a);
		lenb = strlen(b);
		
		A =  transform(a,lena);
		B = transform(b,lenb);
		
		//输出结果和换行 
		printf("%ld\n",A + B); 
	} 
	return 0;
}






#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include<cstring>//**<string.h>�ǲ�����strlen�ģ�Ҫʹ��cstring**

using namespace std;

//����ʵ�ִ��ַ���long������ת�亯��
long transform(char *a,int len){
	//��������������ӵĺ�sum�������±�j��ʾ��ǰ���ֵ�����λ�ã�����ʮλ�����Ǹ�λ������...����
	//�����i��ʾ����ѭ�����±� 
    int sum=0,j=1,i;
    
    for(i=len-1; i>=0; i--){  //ѭ��ʵ�ֽ�char����ת��Ϊlong���� 
        if(a[i]>='0'&&a[i]<='9'){  //����ʹ����ascii�룬ͬʱ���жϻ�ֱ��ȥ����,�����ĸ��� 
            sum+=(a[i]-48)*j;  //��ʾת��Ϊ���� 
            j*=10;
        }
    }
    
    
    //�ж��Ƿ��Ǹ�����Ҳ����char���ֵĵ�һ���ַ� 
    if(a[0]=='-'){ 
        sum=-sum;
    } 
    return sum;  //���ؽ�� 
}
 

//ʵ��A+B������� 
int main(){
	//����һ��vector���鱣���û�����
	 
	//����ÿһ�е�����char���͵�����
	//��������Ϊ12��������������ķ�Χ�� 
	char a [12];
	char b[12];
	
	//���屣��ʵ�������ַ��ĳ���
	int lena,lenb;
	//����long�͵� A �� B 
	long A,B;
	
	//forѭ��ʵ�ֽ����� 
	while(scanf("%s%s",&a,&b) != -1){  //������û��˵����������ʱ��ʹ�ñ������������� 
		lena = strlen(a);
		lenb = strlen(b);
		
		A =  transform(a,lena);
		B = transform(b,lenb);
		
		//�������ͻ��� 
		printf("%ld\n",A + B); 
	} 
	return 0;
}






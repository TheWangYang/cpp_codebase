#include <iostream>
#include <string.h>

using namespace std;


//��Ŀ��˵���� �����루�ڶ��ַ�����������EOF�ķ������� 
int main(){
	//�����ַ�����
	char  str[90];
	gets(str);  //�õ��û�����
	
	int len = strlen(str), row = 0,column  = 0;  //rowΪ�� columnΪ��
	char keep [90][90];  //keep���鱣��õ��Ļ��ֵ���
	
	//ѭ��ʵ�ֵ��ʵķָ�
	for(int i =0 ;i < len;i ++){
		if(str[i] != ' '){  //��ʾ�����ڿո񣨻���һ�����ʣ� 
			keep[row][column ++] = str[i];
		}else{ //��ʾ�ǿո���ô��row����1��column = 0��ע����Ͻ�����'\0'
			keep[row][column] = '\0'; 
			row++;
			column  = 0; 
		}
	} 
	
	//ʹ��forѭ�������ӡ����
	for(int r = row;r >=0;r--){
		printf("%s",keep[r]);
		if(r > 0){
			printf(" ");
		}	
	} 
	return 0;
}




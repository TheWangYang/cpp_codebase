#include <iostream>

using namespace std;

//��Ŀ��pat_B1036_���°���һ����
int main(){
	//������ �б���
	int column ,row;
	
	char c;  //����õ��û�������ַ�
	//����û���������� �� �ַ�
	scanf("%d %c",&column,&c);
	//�ж��ǲ���ż�� 
	if(column % 2 == 1){  //����������
		row = column / 2 + 1; 
	}else{
		row = column / 2;
	}
	
	//��ӡ��һ��
	for(int i = 0; i < column;i ++){
		printf("%c",c);
	} 
	
	//����
	printf("\n"); 
	
	//��ӡ��2 - (row - 1) ��
	for(int i = 2;i < row;i ++){  //ѭ����ʾ�ڼ��� 
		//��ӡÿһ�е��ַ� 
		printf("%c",c);
	
	//Ȼ��ӵ�2�п�ʼ��column - 1�б�������ǿո�
	for(int j = 2;j < column; j ++){
		printf(" ");  
	} 
	
	printf("%c\n",c);  //��ʾ��ӡ���һ�е��ַ���Ȼ���� 
	
	}
	
	
	//��ӡrow��
	for(int i = 0;i < column;i ++){
		printf("%c",c);
	} 
	
	return 0;
}




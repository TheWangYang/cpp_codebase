#include <iostream>

using namespace std;


//��Ŀ��pat_B1009_˵����-������ 
int main(){
	int num = 0; //���ʵĸ���
	//�������浥���ַ������� 
	char keep [90][90];
	//ʹ��whileѭ���õ��û�����
	while(scanf("%s",keep[num]) != EOF){  //һֱ���뵽�ļ���ĩβ
		num ++; 
	}
	
	//forѭ��ʵ�ֵ������
	for(int i = num - 1;i >= 0;i --){
		printf("%s",keep[i]); 
		if(i > 0){ //�ж��Ƿ������һ����������ǵĻ�ֱ������ո� 
			printf(" "); 
		} 
	} 
	 
	return 0;
}




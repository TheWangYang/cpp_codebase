#include <iostream>

using namespace std;


//ʵ�ֺ����˲���������ĺ���
int main (){
	//����n��step(�Ʋ�����) 
	int n ,step = 0; 
	//�õ��û�����
	scanf("%d",&n);
	//whileѭ��ʵ������Ľ��
	while(n != 1){  //��ʾ��n != 1��ʱ�����ѭ����������Ǵ� 
		if(n % 2 == 0){  //��ʾ��ż������ʱn = n / 2;
			n = n / 2; 
		}else {
			n = (3 * n + 1) / 2;
		}
		step ++;  //�Ʋ��������� 
	} 
	
	//������(������)
	printf("%d\n",step); 
	return 0;
}

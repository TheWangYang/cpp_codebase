#include <iostream>

using namespace std;

int main (){
	int n;
	cin >> n;
	 
	long chengji = 1;
	
	int num = 0;  //��ʾ�Ƶڼ������� 
	 
	for(int i = 2;i <= 10000000;i ++){  //���ѭ���ж�n��n�����֣� 
		
		int flag = 0;
		
		for(int j = 2;j < i;j ++){ //�ڲ��ж��Ƿ�������
			if(i % j == 0){
				flag = 1;
				break;
			} 
		}

		if(flag == 0){  //��ʾ������ 
			chengji = chengji * i;
			//cout << "��ʱֵ�ǣ�" << chengji << endl; 
			num++; 
		}
		
		
		if(num == n){ //��ʾ����nʱ���� 
			break; 
		}
		
	}
	
	cout << (chengji % 50000) << endl;
	
	return 0;
} 



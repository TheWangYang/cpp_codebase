#include <iostream>

using namespace std;


//������жϵ�n�������Ǽ��ĺ��� 
bool is_uglyNumber(int n){
	if(n < 0){  //���nС��0����ô����-1�� 
		return false; 
	}
	
	while(n % 2 == 0){  //��ʾ��nȡģ2�Ľ����0��ʱ��n����2
		n = n / 2; 
	}
	
	while(n % 3 == 0){  //��nȡģ3�Ľ����0��ʱ��n����3
		n = n / 3; 
	}
	
	while(n % 5 == 0){ //��nȡ5�Ľ����0��ʱ��n����3
		n = n / 5; 
	}
	
	//����ж�n�ǲ���1����1�Ļ�����true�����򷵻�false
	if(n == 1){
		return true;
	} else{
		return false;
	}
	 
}

int main(){
	
	//���ó�ʼ���������ӱ���������������,��ʼֵ�ӵ�1����ʼ 
	int num = 1;
	
	//��ʾ��1��ʼ����ж� 
	int m = 1;
	int uglym = 1;
	int current = 1; 
	
	while(num <= 10){
		bool is_ugly = is_uglyNumber(m);
		
		if(is_ugly){  //��ʾ�ǳ�������ônum ++
			num ++;
			current = m;
		}
		m++; 
	} 
	
	cout << current << endl; 
		
	return 0;
}



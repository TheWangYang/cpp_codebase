#include <iostream>
#define MAX (-2147483647L - 1)

using namespace std;
int main (){
	int l;
	int k[100];
	 
	cin >> l;
	
	for(int i = 0;i < l;i ++){  //ѭ����ʼ������
		cin >> k[i];
	}
	
	int max = MAX;  //��ʾ�Ƚ�max������ֵΪ��Сֵ MAX(�궨��)
	int index;
	 
	//Ѱ���������ֵ
	for(int i = 0;i < l;i ++){
		if(max < k[i]){
			max = k[i];
			index = i;
		}
	} 
	 
	 cout << max << " " << index << endl; 
	return 0;
} 



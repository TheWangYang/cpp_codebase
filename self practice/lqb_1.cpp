#include <iostream>
#define N   1005

using namespace std;

int main(){
	int l;  //����洢���鳤�ȵı���l 
	cin >> l;  //�������鳤�� 
	
	int  v[N];  //����һ������Ϊl������
	
	for(int i = 0; i < l;i ++){
		cin >> v[i];  //�õ���ʼ������ 
	}
	
	int n; //���õĴ洢���Դ����ı��� 
	cin >> n;  //����õ����Դ��� 
	
	
	int begin = 0;//���õ�ÿһ�ο�ʼ���±� 
	int end = 0; //���õ�ÿһ�ν������±� 
	int idx = 0;//���õ���Ҫ�õ���idx��Ԫ�� 
		
	for (int i = 0;i < n ;i ++){//���ѭ��ʵ�����д������� 
		 
	    cin >> begin >> end >> idx;
	    
	    int inner_v[N];
	    
		int inner_i = 0;
		
	    for(int ind = begin - 1; ind <= end - 1;ind ++ ){ //�õ���ȡ������Ԫ��
			inner_v[inner_i] = v[ind];
			inner_i ++;
		}
		
		//����ð�������㷨
		for(int index = 0;index < inner_i - 1;index ++){
			for (int j = index + 1;j < inner_i;j ++){
				if(inner_v[index] < inner_v[j]){
					int temp = inner_v[index];
					inner_v[index] = inner_v[j];
					inner_v[j] = temp;
				}
			}
		}
		
		//�����idx���Ԫ�� 
		cout << inner_v[idx - 1] << endl;
		
	}
	
	return 0;
}
  



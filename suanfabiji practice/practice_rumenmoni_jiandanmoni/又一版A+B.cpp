#include <iostream>
#include <string.h>

using namespace std;


int main(){
	//���������������
	long  m;
	long long a,b;  //����a b ����long long �͵� 
	
	//ѭ���õ��û����� 
	while(scanf("%lld %lld %lld",&m,&a,&b)) {
		if(m == 0){ //��mΪ0ʱ����ѭ��
			break; 
		} 
		//�õ�a b �ĺ� 
		long long sum = a + b;
		
		
		//����һ��������������
		int keep [50],num = 0;  //����num��ʾ�����±�
		
		//����ת��
		do{
			keep[num ++ ] = sum % m;
			sum  /= m;
		}while(sum != 0); 
		
	//������
	 for(int i = num - 1 ;i >= 0;i -- ){  //�����������Ԫ�أ����ǽ�� 
	 	printf("%d",keep[i]);
	 }
	 printf("\n");
	 
//	 //�������������num
//	 memset(keep,0,sizeof(keep));
//	 num = 0; 
		
	} 
	return 0;
}





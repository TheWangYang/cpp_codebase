#include <iostream>


using namespace std;

int main(){
	//�����������������û�������������� 
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	//�ȵõ�abc�����������ֵ
	int max  = 0;
	if(a > b){
		max = a;
		if(max < c){
			max = c;
		}
	}
		
		
	int rate  = 1;  //���� 
	int result = 0; //���
	 
	while(1){  //һֱѭ���õ� 
		result = max * rate;
		if(result % a  == 0 && result % b == 0 && result % c == 0){
			break;
		}
		rate ++;
	}
	
	printf("%d",result);
	 
	return 0;
} 




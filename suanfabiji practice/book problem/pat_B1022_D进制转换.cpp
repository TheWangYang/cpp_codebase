#include <iostream>

using namespace std;


//��Ŀ���ȵõ�ʮ���Ƶ�������A+B�ĺͣ�Ȼ�����m����ת�� 
int main(){
	//��������������� 
	int a,b,d;
	 
	 scanf("%d %d %d",&a,&b,&d);
	 //�õ�sum�ܺ� 
	 int sum  = a + b;
	 
	 int ans [31], num = 0;  //�������鱣��ת�����d��������num��ʾ�ڼ���λ�õ�ת���������
	 do{
	 	ans[num++] = sum % d;
	 	sum /= d;
	 }while(sum != 0); //��sum������0��ʱ���ٴν���ѭ�� 
	 
	 
	 //������
	 for(int i = num - 1 ;i >= 0;i -- ){  //�����������Ԫ�أ����ǽ�� 
	 	printf("%d",ans[i]);
	 } 
	return 0;
}




#include <iostream>
#include <cstdio>

using namespace std;

//��Ŀ��pat_B1032_�ھ�������ļ�ǿ
//���峣��������Ϊ���ֵ����ʾ�����10 ^ 5 
const int maxn = 100010;
//�������鱣��ѧУ���ܷ�
int school [maxn] = {0};  //��ʼֵ����Ϊ0

int main (){
	int n, schId,score;  //����n��ѧ����ѧ����id��ѧ���ķ���
	scanf("%d",&n);  //�õ�n�ľ���ֵ
	//ѭ���õ�ÿһ��ѧ���ķ���
	for(int i = 0;i < n;i ++){
		scanf("%d %d",&schId,&score);
		school[schId] += score;  //����ѧУ��id�õ��ܷ� 
	}
	
	int k = 1,MAX = 1;  //��¼��߷ֵ�ѧУid�Լ���Ӧ�ķ���
	for(int i = 1;i <= n;i ++){  //��������õ���߷�
		if(school[i] > MAX){  //��ʾ��ԭ�������ֵ�����滻
			MAX  = school[i];
			k = i; 
		} 
	}
	
	printf("%d %d\n",k,MAX);  //������ 
	
	return 0;
}




#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;


//����ṹ��ʵ��ѧ�������ʵ��
struct student{
	char id[15];  //����ѧ����ע���˺ŵ��ַ�����
	int score; // ����ѧ���ķ���
	int location_number; //������
	int location_rank;  //����������	
}keepstus[30010];  //ע�⿴��Ŀ�еķ�Χ 

//��������� 
int cmp(student a,student b){
	if(a.score != b.score){  //������ͬʱ���շ����Ӵ�С����
		return  a.score > b.score;
	} else{  //������ͬʱ����id��С�������У��� 
		return strcmp(a.id,b.id) < 0;
	}
}


int main(){
	int n,k,num = 0;// num��ʾ��������
	
	scanf("%d",&n);  //��ʾ��ÿ�������
	
	//forѭ�����뿼���е����п�����Ϣ 
	for(int i = 1;i <= n;i ++){
		//�ȵõ�ÿһ�������еĿ�����
		scanf("%d",&k);
		//�ڲ�forѭ���õ�ÿһ����������Ϣ
		for(int j  = 0 ;j < k;j ++){
			scanf("%s %d",keepstus[num].id,keepstus[num].score);  //�õ���������Ϣ 
			keepstus[num].location_number = 1;  //��ʾ�������Ŀ���������Ϊi 
		}
		
		//�Ըÿ����ڿ����������� 
		sort(keepstus + num - k,keepstus + num,cmp);
		keepstus[num - k].location_rank = 1;  //���øÿ���������һ��
		
		//ѭ�����ÿ��������п�����������
		for(int j = num - k + 1;j < num;j ++){  //��ʾ�ӵ�2����ʼ�ж����� 
			if(keepstus[j].score == keepstus[j - 1].score){ //��ʾ���������ķ�����ͬʱ������location_rankҲ��ͬ
				keepstus[j].location_rank  = keepstus[j - 1].location_rank; 
			}else{//��ʾ����ͬ��ʱ��
			 	//���õ�location_rankΪ������֮ǰ������
				keepstus[j].location_rank = j - (num - k) + 1;  
			}
		}
	} 
	
	//�õ���������
	printf("%d\n",num);
	//�����п�������
	sort(keepstus,keepstus + num,cmp);  //����ʹ����ָ��
	int r = 1; //��ǰ����������
	//forѭ����ӡ����������Ϣ
	for(int j = 0;j < num;j++){
		if(j > 0 && keepstus[j].score != keepstus[j - 1].score){  //��ʾ���������ķ�����һ��
			 r  = j + 1;// ��ʾ����ǰ���������μӷ�1 
		}
		
		//��ӡ�������������
		printf("%s",keepstus[j].id);
		printf("%d %d %d\n",r,keepstus[j].location_number,keepstus[j].location_rank); 
	} 
	return 0;
}




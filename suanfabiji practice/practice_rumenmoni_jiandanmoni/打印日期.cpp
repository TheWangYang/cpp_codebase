#include <iostream>

using namespace std;

//����������ƽ���ÿһ���µ����� 
int  month [13][2]  = {
		{0,0},
		{31,31},
		{28,29},
		{31,31},
		{30,30},
		{31,31},
		{30,30},
		{31,31},
		{31,31},
		{30,30},
		{31,31},
		{30,30},
		{31,31}	
};
	
	
//�ж�year�Ƿ������� 
bool isLeap(int year){
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); 
}
 
int main(){
	//���屣����� �������ı���
	int year,days;
	//ѭ���õ������������ 
	/**
	while(scanf("%d %d",&year,&days) != EOF){  //ʹ�ø���ѭ����ʾ���Խ����û�����
		//����һ���������ر���
		int sum = 0; 
		//���ص��Ǽ��·� 
		int i;
		
		if(isLeap(year)){  //������
		
			//ʹ��ѭ��ʵ�־������ڵ�ȷ��
			for(i = 1;i < 13;i++){ 
				sum += month[i][1];
				if(sum >= days){  //��ʾ��ʱ�Ѿ��ӽ�days 
					  break;
				}
			}
			
			//�õ�ǰi - 1���µ������ܺ�
			int front_days = sum - month[i - 1][0];
			//ʹ��days - front_days
			int current_days = days - front_days;
			printf("%04d-%02d-%02d\n", year, i, current_days);
		
		}else{
			
			//ʹ��ѭ��ʵ�־������ڵ�ȷ��
			for(i = 1;i < 13;i++){ 
				sum += month[i][0];
				if(sum >= days){  //��ʾ��ʱ�Ѿ��ӽ�days 
					  break;
				}
			}
			
			//�õ�ǰi - 1���µ������ܺ�
			int front_days = sum - month[i - 1][0];
			//ʹ��days - front_days
			int current_days = days - front_days;
			
			printf("%04d-%02d-%02d\n", year, i, current_days);
			
		}
	}
	**/
	
	//���嵱ǰ������ 
	int d = 0; 
	//������·� 
	int m = 1;
	
	//ѭ��ʵ������������ 
	while(scanf("%d%d", &year, &days)!=EOF){
		while(days>0){   //��n��ʣ��������Ϊѭ������ 
			d++;  //����һ�� 
			
			if(d == month[m][isLeap(year)]+1){  //ֱ���ж��Ƿ���leap���� 
				m++;
				d=1;
			}
			
			if(m==13){
				year++;
				m=1;
			}
			
			days--;
		}
		
		printf("%04d-%02d-%02d\n", year, m, d);
		m=1, d=0;
	}

	
	return 0;
} 





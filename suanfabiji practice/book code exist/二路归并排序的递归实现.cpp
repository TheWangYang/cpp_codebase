#include <iostream>

using namespace std;


//���峣����������ĳ�ʼ������
const int maxn = 100;
 

//ʵ�ֶ�·�鲢�������
//���õĺϲ����� 
void merge (int a[],int l1,int r1,int l2,int r2){
	
	int i=  l1;
	int j = l2;  //��ʾ������ʼ���±�
	
	//���õ��м�����������źϲ�֮�������
	int [] temp =  new int [maxn] ,index =  0;
	
	//ʹ��whileѭ���õ����
	while (i <= r1 && j <= r2){  //��ʾû�г������ԵĽ��޵Ļ�����ѭ��
		if(a[i] <= a[j]){  //��ô��a[i]�ŵ� temp������
			temp[index ++ ] = a[i++];
		} else{
			temp[index ++] =  a[j ++];
		}
	}
	
	//while������ʣ�µ�����Ԫ�ؼ��뵽temp������
	while(i <= r1){  //��ʾʼ��û�г��������±�
		temp[index ++]  = a[i++];
	} 
	
	while(j <= r2){
		temp[index ++ ] = a[j++]; 
	}
	
	//ʹ��forѭ��ʵ�ֽ�temp�����a����
	for(int  i = 0;i < index;i++){
		a[l1 + 1]  = temp [i];  //��ʾ���ϲ�����ʱ����temp���տ�ʼ��l1�����긳ֵ��ԭ�������� 
	} 
	 
} 


//ʵ�ֵĵݹ麯��
void mergeSort(int a[],int left,int right){
	if(left < right ){ //ֻҪ��leftС��right���ͽ��й鲢������Ҳ�Ǹõݹ�Ľ���
		int mid  = (left + right) / 2; //�õ��м��±��ֵ 
		mergeSort(a,left,mid);  //��ʾ��ߵĿ�ʼ���� 
		mergeSort(a,mid + 1,right);  //��ʾ�ұߵĿ�ʼ���� 
		merge(a,left,mid,mid + 1,right);
	}
} 


int main (){
	
	return 0;
}



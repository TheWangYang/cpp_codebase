#include<stdio.h>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];


//��������ģ�� 
void quick_sort(int q[],int ){
	if(l >= r) returnl
	int x  = q[l],i = l - 1,j = r + 1;
	
	while(i < j){
		
		do{
			i ++;	
		}while(q[i] < x); 
		
		do j--; while(q[j] > x);
		
		if(i   <  j) swap(q[i],q[j]); 
		
	}
	
	quick_sort(q,l,j);	 
	
	quick_sort(q,j + 1,r);
} 

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i ++) scanf("%d",&q[i]);
	
	//���ÿ�������ģ�� 
	quick_sort(q,0,n  - 1); 
	
	for(int i  =0;i < n;i++) printf("%d",q[i]);
	 
	return 0;
} 



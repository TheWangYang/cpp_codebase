#include <iostream>

using namespace std;


//定义常量定义数组的初始化长度
const int maxn = 100;
 

//实现二路归并排序代码
//设置的合并函数 
void merge (int a[],int l1,int r1,int l2,int r2){
	
	int i=  l1;
	int j = l2;  //表示两个开始的下标
	
	//设置的中间数组用来存放合并之后的数组
	int [] temp =  new int [maxn] ,index =  0;
	
	//使用while循环得到结果
	while (i <= r1 && j <= r2){  //表示没有超过各自的界限的话继续循环
		if(a[i] <= a[j]){  //那么将a[i]放到 temp数组中
			temp[index ++ ] = a[i++];
		} else{
			temp[index ++] =  a[j ++];
		}
	}
	
	//while将各自剩下的数组元素加入到temp数组中
	while(i <= r1){  //表示始终没有超过索引下标
		temp[index ++]  = a[i++];
	} 
	
	while(j <= r2){
		temp[index ++ ] = a[j++]; 
	}
	
	//使用for循环实现将temp数组给a数组
	for(int  i = 0;i < index;i++){
		a[l1 + 1]  = temp [i];  //表示将合并的暂时数组temp按照开始的l1的坐标赋值给原来的数组 
	} 
	 
} 


//实现的递归函数
void mergeSort(int a[],int left,int right){
	if(left < right ){ //只要是left小于right，就进行归并排序，这也是该递归的界限
		int mid  = (left + right) / 2; //得到中间下标的值 
		mergeSort(a,left,mid);  //表示左边的开始区间 
		mergeSort(a,mid + 1,right);  //表示右边的开始区间 
		merge(a,left,mid,mid + 1,right);
	}
} 


int main (){
	
	return 0;
}



#include<iostream>


using namespace std;


//ʵ����ת�ĺ��� 
int jump(vector<int>& nums) {
	
	int position = nums.size() - 1;
	int step  = 0;
	
	while (position > 0){ //��ʾ��û�������ת
		for(int i = 0;i < position;i ++){
			if(i + nums[i] >= position){
				position = i;
				step ++;
				break;  //��ʾ��������ѭ������������ 
			}
		} 
		return step;
	} 
}
    
    
int main(){
	return 0;
}



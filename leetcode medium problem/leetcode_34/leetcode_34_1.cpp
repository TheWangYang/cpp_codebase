#include <iostream>

using namespace std;


//���õķ��ؿ�ʼ�ͽ����±��ַ������ 
vector<int> searchRange(vector<int>& nums, int target) {
	//���ÿ�ʼ���� 
	int begin = -1;
	
	//���ý������� 
	int end = -1;
	
	//�������������Ϊ��Ա����
	int i; 
	
	//���ÿ��Ƿ����Ԫ��
	int flag = 0;
	 
	for(i = 0;i < nums.size();i ++){  //ѭ���õ��������� 
		
		if(nums[i] == target){  //��ʾ��һ�������ôʵ��
			begin = i; 
			flag = 1;  //��ʾ����Ԫ�� 
			break;
		} 
	}
	
	
	//��������������
	vector<int> result; 
	//���flag == 1��ʾ����Ԫ������ 
	if(flag == 1){
		//����ѭ�� 
		for(;i < nums.size();i++){
			if(nums[i] == target){
				end = i;
			}	
		}
	}
	
	//����������鸳ֵ 
		result.push_back(begin);
		result.push_back(end); 
	
	return result;
}

 
int main(){
	
	return 0;
}





#include <iostream>

using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
	//ֱ�ӱ���ѭ��ʵ��
	//����һ��������������
	vector<vector<int>> keep;
	
	//�õ�nums����ĳ���
	int n =  nums.size(); 
	
	//�Ƚ����������������
	sort(nums.begin(),nums.end()); 
	 
	//��һ��ѭ���ҵ���һ���� 
	for(int i = 0;i < n;i ++){
		
		//��Ҫ�жϺ���һ�ε�����ͬ������õ��Ľ���ظ�
		if(i> 0 && nums[i] == nums[i - 1]){
			continue;  //��ô�������һ�����ظ��ģ���ôֱ���������� 
		} 
		
		int z = n - 1;//��ʾ�õ�������Ԫ�ص�ָ��ָ�����Ҷ�
		
		//�������ô˴���Ҫ�ҵ�������ָ����ӵĺ�
		int inner_sum = -nums[i];
		 
		//�ڶ���ѭ���ҵ��ڶ�����
		//�±��i + 1��ʼ
		for(int j = i + 1;j < n;j++){
			
			if(j > i + 1 && nums[j] == nums[j - 1]){
				continue; //��ʾ����һ�εĵڶ�������ͬ��ôֱ������������õ���һ����ͬ 
			}
			
			//�õ�������Ԫ�ص�ָ��������󻬶� 
			while(j < z && nums[z] + nums[j] > inner_sum){
				z--;//��ʾ�ڲ��ָ�����󻬶� 
			}
			
			if(j == z){ //��ʾָ���ظ�����ô��������ѭ��
				break;
			}
			
			if(nums[j] + nums[z] == inner_sum){
				vector<int> inner_keep;
				inner_keep.push_back(nums[i]);
				inner_keep.push_back(nums[j]);
				inner_keep.push_back(nums[z]);
				
				keep.push_back(inner_keep);
			} 
		}
	}
	
	return keep;
}
    
    
int main(){
	
	return 0;
}



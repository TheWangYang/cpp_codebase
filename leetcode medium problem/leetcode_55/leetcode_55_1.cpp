#include <iostream>

using namespace std;


//ʵ���ж��Ƿ���Ե������һ��Ԫ�ص�λ�õĺ��� 
bool canJump(vector<int>& nums) {
        int position =  nums.size();//��������ĳ��� 
        int farest = 0;//���ÿ��Ե������Զ������0; 
        
        for(int i = 0;i < position;i ++ ){//ѭ���жϴ�0��ʼ֮����Դﵽ����Զ���� 
        	if(i <= farest){//�����ǰ������С����Զ���룬��ô��ʾ�ǿ��Դﵽ�� 
        		if(i + nums[i] > farest){//�жϵ�ǰ��������ϱ����ֵ���ǲ��Ǵ�����Զ���� 
        			farest = i + nums[i];//������Զ���� 
				}
				
				if(farest >= position - 1){ //�����Զ����������������±� 
					return true;//���ؿ��Դﵽ 
				}
			}
		}
		
		return false;
}



int main (){
	
	
	return 0;
}



#include <iostream>

using namespace std;



int maxArea(vector<int>& height){  //�����Ǳ��洹ֱ��x����߶εĸ߶�����
	  //��������ָ��ֱ�ָ������ĵ�һ�������һ�� 
//����area��ֵ������̵��߶ξ�������ô���ƶ�ָ���ʱ��һ���ƶ����ǵ�ǰָ��Ľ�СԪ�ص�ָ�� 
	  int l = 0;
	  int r = height.size() - 1;   //��ʾ�õ����ұߵ�����
	  //ʹ��whileѭ����l < rʱ����ѭ�� 
	  int ans = 0;//��ʾ��ǰ���ֵ 
	while(l < r){
		int area  = min(height[l],height[r]) * (r - l);
		ans = max(ans,area);
		if(height[l] <= height[r]){
			l++;
		} else{
			r--;
		}
	} 
	
	return ans;
}

int main(){
	
	return 0;
}



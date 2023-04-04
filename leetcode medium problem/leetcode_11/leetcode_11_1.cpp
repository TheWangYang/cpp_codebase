#include <iostream>

using namespace std;



int maxArea(vector<int>& height){  //参数是保存垂直于x轴的线段的高度数组
	  //定义两个指针分别指向数组的第一个和最后一个 
//由于area的值是由最短的线段决定的那么在移动指针的时候一定移动的是当前指向的较小元素的指针 
	  int l = 0;
	  int r = height.size() - 1;   //表示得到最右边的数组
	  //使用while循环当l < r时进行循环 
	  int ans = 0;//表示当前最大值 
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



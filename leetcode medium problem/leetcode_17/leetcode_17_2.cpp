#include <iostream>
#include <vector>
#include <string.h>
 
using namespace std;


//定义的使用字符串拼接方法
vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> res = {""};
        vector<string> dict = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (int i=0;i<digits.length();i++)
        {
            string str = dict[digits[i]-'0'];
            vector<string> tmp;
            for (int j=0;j<str.length();j++)
            {
                for (string s:res)
                    tmp.push_back(s+str[j]);
            }
            res = tmp;
        }
        return res;
}



//自己写的 
vector<string> getResult(string nums){ //参数是用户输入的数字字符串
	if(nums.empty()){ //表示数字字符串是空
	return {}; 
	} 
	//定义返回结果的字符数组 
	vector<string> result = {""};
	vector<string> dict = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};  //定义的字典
	
	for(int i = 0;i < nums.length();i ++) { // 外层循环得到每一个数字对应的字符数组 
		//得到每一个数字对应的字符
		string str = dict[nums[i] - '0'] //表示得到对应下标的字符数组
		//定义一个暂时的vector数组保存每一次更新后的字符串
		vector<string> tmp ;
		//内层循环实现字符数组的更新 
		for(int j = 0;j < str.length();j ++){
			//最内层for循环将最终保存结果的字符串进行更新 
			for(string s : result){
				tmp.push_back(s + str[j]);  //组合更新 
			}	
		}
		result = tmp; 
	}
	return result;
}
 
 
int main (){
	
	
	return 0;
} 




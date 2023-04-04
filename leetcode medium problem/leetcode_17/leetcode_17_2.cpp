#include <iostream>
#include <vector>
#include <string.h>
 
using namespace std;


//�����ʹ���ַ���ƴ�ӷ���
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



//�Լ�д�� 
vector<string> getResult(string nums){ //�������û�����������ַ���
	if(nums.empty()){ //��ʾ�����ַ����ǿ�
	return {}; 
	} 
	//���巵�ؽ�����ַ����� 
	vector<string> result = {""};
	vector<string> dict = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};  //������ֵ�
	
	for(int i = 0;i < nums.length();i ++) { // ���ѭ���õ�ÿһ�����ֶ�Ӧ���ַ����� 
		//�õ�ÿһ�����ֶ�Ӧ���ַ�
		string str = dict[nums[i] - '0'] //��ʾ�õ���Ӧ�±���ַ�����
		//����һ����ʱ��vector���鱣��ÿһ�θ��º���ַ���
		vector<string> tmp ;
		//�ڲ�ѭ��ʵ���ַ�����ĸ��� 
		for(int j = 0;j < str.length();j ++){
			//���ڲ�forѭ�������ձ��������ַ������и��� 
			for(string s : result){
				tmp.push_back(s + str[j]);  //��ϸ��� 
			}	
		}
		result = tmp; 
	}
	return result;
}
 
 
int main (){
	
	
	return 0;
} 




#include<iostream>

using namespace std;

//生成所以括号的有效组合的函数 

 void backtrack(vector<string>& ans, string& cur, int open, int close, int n) {
 	
//自己默写模板 
//	if(n * 2 == cur.size()){  //表示结果
//		ans.push_back(cur);
//		return;
//	}
//	
//	if(open < n){
//		cur += "(";
//		backtrack(ans,cur,open+1,close,n);
//		cur.pop_back();
//	}
//	
//	if(close < open){
//		cur += ")";
//		backtrack(ans,cur,open,close+1);
//		cur.pop_back(); 
//	}
	
		 if(n * 2 == curr.size()){  //表示括号等于 
			ans.push_back(cur); 
			return; //表示得到匹配结果 
		}
		
        if (open < n) { //表示判断左括号数是否小于n，如果是加入左括号 
            cur.push_back('(');
            backtrack(ans, cur, open + 1, close, n); //然后将oen + 1 
            cur.pop_back();//然后将本次加入的左括号提出，为了后面加入右括号 
        }
        
        if (close < open) {//表示判断右括号数是否小于左括号是的话，直接加入一个右括号 
            cur.push_back(')');
            backtrack(ans, cur, open, close + 1, n);
            cur.pop_back();//然后将本次加入的右括号提出 
        }
	
    }
    
public:
vector<string> generateParenthesis(int n) {
	vector<string> result; //设置一个保存结果的数组
	string curr;
	//调用函数得到结果
	backtrack(result,curr,0,0,n);
	return result;
}
    
int main(){
	return 0;
}



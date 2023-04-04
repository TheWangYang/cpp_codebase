#include<iostream>

using namespace std;

//�����������ŵ���Ч��ϵĺ��� 

 void backtrack(vector<string>& ans, string& cur, int open, int close, int n) {
 	
//�Լ�Ĭдģ�� 
//	if(n * 2 == cur.size()){  //��ʾ���
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
	
		 if(n * 2 == curr.size()){  //��ʾ���ŵ��� 
			ans.push_back(cur); 
			return; //��ʾ�õ�ƥ���� 
		}
		
        if (open < n) { //��ʾ�ж����������Ƿ�С��n������Ǽ��������� 
            cur.push_back('(');
            backtrack(ans, cur, open + 1, close, n); //Ȼ��oen + 1 
            cur.pop_back();//Ȼ�󽫱��μ���������������Ϊ�˺������������ 
        }
        
        if (close < open) {//��ʾ�ж����������Ƿ�С���������ǵĻ���ֱ�Ӽ���һ�������� 
            cur.push_back(')');
            backtrack(ans, cur, open, close + 1, n);
            cur.pop_back();//Ȼ�󽫱��μ������������� 
        }
	
    }
    
public:
vector<string> generateParenthesis(int n) {
	vector<string> result; //����һ��������������
	string curr;
	//���ú����õ����
	backtrack(result,curr,0,0,n);
	return result;
}
    
int main(){
	return 0;
}



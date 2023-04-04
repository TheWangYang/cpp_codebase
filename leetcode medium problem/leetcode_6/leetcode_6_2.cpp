#include<iostream>
 
using namespace std;
 

 
 string convert(string s, int numRows) {

        if(numRows == 1){
		return s;
		}
        
        vector<string> keep (min(numRows,s.length()));
        
        bool changeDirect = false;
        
        int row = 0;
        for(char c : s){
        		keep[row] += c;
        		if(row ==0 || row == numRows - 1){
        			changeDirect  = !changeDirect;
				}
				
				if(changeDirect){
					row++;
				}else{
					row--;
				}
		}
		
		string result = "";
		for(string c : keep){
			result += c;
		}
		
		return c;
		
		
}

   if (numRows == 1) return s;

        vector<string> rows(min(numRows, int(s.size())));
        int curRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }

        string ret;
        for (string row : rows) ret += row;
        return ret;




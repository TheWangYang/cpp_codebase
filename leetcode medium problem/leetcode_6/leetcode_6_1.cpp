#include <iostream>

using namespace std;


//将给定的s字符串按照行数输出对应的Z字形变换 
string convert(string s, int numRows) {　 
	//根据对应的s字符串的长度l，首先计算z字型的转折边对应的个数
	//经找规律得到对应的个数为：numRows - 2;
	//那么这样来说一组字符的长度为：numRows + (numRows - 2) = 2 * numRows - 2;
	//得到共几组，count = s.size() / (2 * numRows - 2) 然后得到存储字符对应的矩阵前边的完成组的矩阵
	//int num [numRows] [count * (numRows - 1)];
	//然后矩阵最后部分的规模计算方法是：remain = s.size() % (s * numRows - 2);
	//然后比较remain 和 numRows的大小。如果remain 大于 numRows，那么得到最后的矩阵的列数为：
	//(1 + remain % numRows) ;否则为：1列；
	//columns = (count * (numRows - 1));
	
	
	//得到string的长度
	int sl = s.length();
	 //定义结果输出
	 string result = "";
	  
	//定义矩阵的列数
	int column = 0; 
	//得到每一组字符的长度 
	int per_l = numRows + (numRows - 2) = 2 * numRows - 2; 
	//得到可以分为几组 
	int count = s.length() / per_l;
	//得到分组后还有多少个
	int remain  = s.length() % per_l;
	//计算矩阵的总的列数
	if(remain == 0){ //表示没有得到剩下的字符，那么矩阵的列数为
		 column = count * (numRows - 1); 
	} else if(remain > numRows){
		column = (1 + remain % numRows) + count * (numRows - 1);
	}else if(remain < numRows){	
		column = 1 + count * (numRows - 1);
	}
	
	
	//定义一个matrix矩阵 
	char matrix [numRows][column];
	
	int index = 0; //定义s字符串的下标
	 
	 //定义行变量
	 int i;
	//定义一个flag变量表示index已经到头了
	bool is_end = false;
	 
	//然后初始化矩阵
	//外层以列循环 
	for(int j = 0;j < column;j ++){
		
		//内层以行循环
		if(j % (numRows - 1) == 0){  //竖直向下初始化 
			for(i = 0;i < numRows;i++){
				if(index < sl){
					matrix[i][j] = s[index++];
				}else{
					is_end = true;
					break;
				}	
			}
		}else{
			i--;//表示先减少1
			if(index < sl){
				matrix[i] [j] = s[index++]; 
			}else{
				is_end  =true;
			}
		}
		
		if(is_end){
			break;
		}
	 
	}
	
	//然后输出对应的新的string数组
	for(int i = 0;i < numRows;i ++){
		for(int j = 0;j < column;j++){
			if(matrix[i][j] != ' '){
				result += matrix[i][j];
			}
		}
	}
	
	return result; 
	
}

int main(){
	
	return 0;
}



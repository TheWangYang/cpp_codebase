#include <iostream>

using namespace std;


//��������s�ַ����������������Ӧ��Z���α任 
string convert(string s, int numRows) {�� 
	//���ݶ�Ӧ��s�ַ����ĳ���l�����ȼ���z���͵�ת�۱߶�Ӧ�ĸ���
	//���ҹ��ɵõ���Ӧ�ĸ���Ϊ��numRows - 2;
	//��ô������˵һ���ַ��ĳ���Ϊ��numRows + (numRows - 2) = 2 * numRows - 2;
	//�õ������飬count = s.size() / (2 * numRows - 2) Ȼ��õ��洢�ַ���Ӧ�ľ���ǰ�ߵ������ľ���
	//int num [numRows] [count * (numRows - 1)];
	//Ȼ�������󲿷ֵĹ�ģ���㷽���ǣ�remain = s.size() % (s * numRows - 2);
	//Ȼ��Ƚ�remain �� numRows�Ĵ�С�����remain ���� numRows����ô�õ����ľ��������Ϊ��
	//(1 + remain % numRows) ;����Ϊ��1�У�
	//columns = (count * (numRows - 1));
	
	
	//�õ�string�ĳ���
	int sl = s.length();
	 //���������
	 string result = "";
	  
	//������������
	int column = 0; 
	//�õ�ÿһ���ַ��ĳ��� 
	int per_l = numRows + (numRows - 2) = 2 * numRows - 2; 
	//�õ����Է�Ϊ���� 
	int count = s.length() / per_l;
	//�õ�������ж��ٸ�
	int remain  = s.length() % per_l;
	//���������ܵ�����
	if(remain == 0){ //��ʾû�еõ�ʣ�µ��ַ�����ô���������Ϊ
		 column = count * (numRows - 1); 
	} else if(remain > numRows){
		column = (1 + remain % numRows) + count * (numRows - 1);
	}else if(remain < numRows){	
		column = 1 + count * (numRows - 1);
	}
	
	
	//����һ��matrix���� 
	char matrix [numRows][column];
	
	int index = 0; //����s�ַ������±�
	 
	 //�����б���
	 int i;
	//����һ��flag������ʾindex�Ѿ���ͷ��
	bool is_end = false;
	 
	//Ȼ���ʼ������
	//�������ѭ�� 
	for(int j = 0;j < column;j ++){
		
		//�ڲ�����ѭ��
		if(j % (numRows - 1) == 0){  //��ֱ���³�ʼ�� 
			for(i = 0;i < numRows;i++){
				if(index < sl){
					matrix[i][j] = s[index++];
				}else{
					is_end = true;
					break;
				}	
			}
		}else{
			i--;//��ʾ�ȼ���1
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
	
	//Ȼ�������Ӧ���µ�string����
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



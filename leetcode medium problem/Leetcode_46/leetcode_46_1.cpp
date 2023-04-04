#include <iostream>

using namespace std;

int n;
vector<int> p;
vector<int> numbers;
vector<bool> hashTable;
vector<vector<int>> keep;

//�õ�ȫ���е���ں��� 
vector<vector<int>> permute(vector<int>& nums) {
		numbers = nums;
		//�õ�����ĳ��� 
		 n = nums.size();
		 
		//�õ�nums�����������
		if(n == 1){
			return {{nums[0]}};
		}
	
		//����һ����ǰ���е�����
		 p = vector<int>(n,0);
		//����һ��hashTable��ϣӳ���
		 hashTable = vector<bool>(21,false);
		 generateP(0);
		 return keep;
}


//�õ�ȫ���еļ��㺯��
void generateP(int index){
	
	if(index == n){ //��ʾ�Ѿ����������е�1-nλ
	 //���浱ǰ����
	vector<int> inner_keep;
	for(int i = 0;i < n;i++){
		inner_keep.push_back(p[i]);
	}
	keep.push_back(inner_keep);
	return;	
	}
	
	//��ʾ��ӳ����õ���ȫ���� 
	for(int  i = 0;i < n;i++){  //��ʾnums�������±� 
		//�õ���ǰ���±��Ӧ������
		int x = nums[i];
		
		if(x < 0){ //��ʾС��0��ʱ��x + 30;
			x = x + 21;//��ʾ�����������м�
		} 
		
		if(hashTable[x] == false){  //��ʾ��ǰ��hashTable��û�д��ڵ�ǰ���������Լӽ�ȥ
			
			if(x >= 11){//��ʾ��ֵ��С��0��
				p[index] = x - 21;  //�õ�ԭ����ֵ 
			}else{
				p[index]  = x;  //��ʾ��x��Ӧ����ֵ���뵽��ʱ��������
			} 
		
			hashTable[x]  = true; //��ʾ�����ȥ֮�󣬽� 	
			generate(index + 1);
			hashTable[x] = false;
		}
		
	}
	
} 

int main(){
	
	return 0;
}



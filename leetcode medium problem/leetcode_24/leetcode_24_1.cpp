#include <iostream>

using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//��������������������� 
ListNode* swapPairs(ListNode* head) {
	if(head == NULL || (head != NULL && head -> next == NULL)){ //��ʾ�ս��
		return head; 
	}
	
	//�����������
	ListNode* p1 = head;
	ListNode* p2 = p1 -> next;
	
	ListNode* lastNode = NULL;
	
	ListNode* reNode = p1 -> next;
	
	//ʹ��whileѭ��ʵ�ֽ������
	while(p2 != NULL){  //��ʾp1����һ����㲻��null�ľͿ��Խ���
		
		if(lastNode != NULL){  //��ʾ����һ����㣬��ô��nextָ��ָ��p1
			 lastNode -> next = p2; 
		}
		
		//��p1������һ������Ϊp2����һ��
		p1 -> next = p2 -> next;
		//��p2������һ��ָ��p1
		p2 -> next = p1;
		
		lasNode = p1;  //��¼p1���λ�ã�Ϊ��һ��ѭ����׼�� 
		
		//����p1���
		p1 = p1 -> next;
		if(p1 == NULL){//��ʾû����һ���ˣ�ֱ������ѭ��
			break;
		}
		
		//����p2��� 
		p2 = p1 -> next;
		if(p2 == NULL){//���p2����null����ʾ�����ǵ������ȣ�ֱ������ѭ��
			break; 
		} 
		
	} 
	
	return reNode;
}
    

int main(){
	
	return 0; 
}




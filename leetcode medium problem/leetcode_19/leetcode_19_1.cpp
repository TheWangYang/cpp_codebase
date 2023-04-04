#include <iostream>
#include <vector>


using namespace std;


//Definition for singly-linked list.
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  

//ɾ������ĵ�����n�����ķ���
ListNode* removeNthFromEnd(ListNode* head,int n){
	ListNode* p = head;
	
	 //ѭ���ҵ���n����� 
	 //ʹ��һ��vector���鱣���Ӧ�����±�
	 vector<ListNode*> keep ;
	 //ѭ������ʵ�ֶ�����vector�����ĳ�ʼ�� 
	 while(p != nullptr){
	 	keep.push_back(p);
	 	p = p -> next; // ��ʾ�õ���һ����� 
	 }
	 
	 int l = keep.size();  //�õ�������ܳ���
	 int lastIndex = l - n - 1;	 //�õ�������n��������һ������������е�index���� 
	 
	 if(lastIndex < 0){  //��ʾ�±�С��0 
	 	return head.next;
	 } 
	 
	 //Ȼ��õ�����ĵ�����n��������һ����� 
	 ListNode* headFront = keep[lastIndex];
	 //�õ�������n������ַ 
	 ListNode* currNode = headFront -> next;
	 //Ȼ���õ�����n-1��������һ����ַָ������n��������һ�����ĵ�ַ
	 headFront -> next = currNode -> next;
	 
	 return head;
}
 
int main (){
	
	return 0;
}




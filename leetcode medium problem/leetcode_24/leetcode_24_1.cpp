#include <iostream>

using namespace std;


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//交换链表相连的两个结点 
ListNode* swapPairs(ListNode* head) {
	if(head == NULL || (head != NULL && head -> next == NULL)){ //表示空结点
		return head; 
	}
	
	//交换两个结点
	ListNode* p1 = head;
	ListNode* p2 = p1 -> next;
	
	ListNode* lastNode = NULL;
	
	ListNode* reNode = p1 -> next;
	
	//使用while循环实现交换结点
	while(p2 != NULL){  //表示p1的下一个结点不是null的就可以交换
		
		if(lastNode != NULL){  //表示有上一个结点，那么其next指针指向p1
			 lastNode -> next = p2; 
		}
		
		//将p1结点的下一个设置为p2的下一个
		p1 -> next = p2 -> next;
		//将p2结点的下一个指向p1
		p2 -> next = p1;
		
		lasNode = p1;  //记录p1结点位置，为下一次循环做准备 
		
		//更新p1结点
		p1 = p1 -> next;
		if(p1 == NULL){//表示没有下一个了，直接跳出循环
			break;
		}
		
		//更新p2结点 
		p2 = p1 -> next;
		if(p2 == NULL){//如果p2等于null，表示链表是单数长度，直接跳出循环
			break; 
		} 
		
	} 
	
	return reNode;
}
    

int main(){
	
	return 0; 
}




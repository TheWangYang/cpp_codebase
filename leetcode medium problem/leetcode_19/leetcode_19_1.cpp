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
  

//删除链表的倒数后n个结点的方法
ListNode* removeNthFromEnd(ListNode* head,int n){
	ListNode* p = head;
	
	 //循环找到第n个结点 
	 //使用一个vector数组保存对应结点的下标
	 vector<ListNode*> keep ;
	 //循环遍历实现对上述vector容器的初始化 
	 while(p != nullptr){
	 	keep.push_back(p);
	 	p = p -> next; // 表示得到下一个结点 
	 }
	 
	 int l = keep.size();  //得到数组的总长度
	 int lastIndex = l - n - 1;	 //得到倒数第n个结点的上一个结点在数组中的index索引 
	 
	 if(lastIndex < 0){  //表示下标小于0 
	 	return head.next;
	 } 
	 
	 //然后得到数组的倒数第n个结点的上一个结点 
	 ListNode* headFront = keep[lastIndex];
	 //得到到数第n个结点地址 
	 ListNode* currNode = headFront -> next;
	 //然后让到数第n-1个结点的下一个地址指向倒数第n个结点的下一个结点的地址
	 headFront -> next = currNode -> next;
	 
	 return head;
}
 
int main (){
	
	return 0;
}




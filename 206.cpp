
//206. Reverse Linked List

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
	ListNode* reverseList(ListNode* head)
	{
		ListNode* p=NULL;
		while (head)
		{
			ListNode *p_next;
			p_next= head->next;
			head->next = p;
			p = head;
			head = p_next;
		}
		return p;
	}
};




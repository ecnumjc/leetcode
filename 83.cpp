/**83Definition for singly-linked list.*/
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode *p;
		p = head;
		while (p != NULL && p->next != NULL)
		{
			ListNode *q;
			q = p->next;
			if (p->val == q->val)
			{
				if (q->next != NULL)
				{
					p->next = q->next;
					delete q;
				}
				else
				{
					p->next = NULL;
					delete q;
				}
			}
			else
			{
				p = p->next;
			}

		}
		return head;
	}
};

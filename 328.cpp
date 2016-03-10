struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		if (!head)
			return head;
		ListNode *p, *q, *temp;
		p = head;
		q = p->next;
		temp = q;
		while (q != NULL && q->next != NULL)
		{
			p->next = q->next;
			p = p->next;
			q->next = p->next;
			q = q->next;
		}
		p->next = temp;
		return head;

	}
};

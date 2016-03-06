
//100  Same Tree

/* Definition for a binary tree node.*/
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) 
	{
		if (!q && !q)//¶¼Îª¿ÕÊ÷true
		{
			return true;
		}
		if (p&&!q || !p&&q)
		{
			return false;
		}
		if (p->val != q->val)
		{
			return false;
		}
		bool leftlabel = isSameTree(p->left, q->left);
		bool rightlabel = isSameTree(p->right, q->right);

		return leftlabel && rightlabel;

	}
};
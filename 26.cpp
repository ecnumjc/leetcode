
//26. Remove Duplicates from Sorted Array
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		set<int> numset(nums.begin(),nums.end());
		nums.clear();
		set<int>::iterator it;
		for ( it = numset.begin(); it != numset.end(); it++)
		{
			nums.push_back(*it);
		}
		return nums.size();
	}
};


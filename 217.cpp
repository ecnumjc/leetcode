//217. Contains Duplicate
class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		set<int> duplicateset(nums.begin(),nums.end());
		if (duplicateset.size()==nums.size())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
};
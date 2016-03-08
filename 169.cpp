//169. Majority Element
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		set<int> eleset(nums.begin(), nums.end());
		int n = nums.size();
		int ele_appears = n / 2;
		set<int>::iterator it;
		for (it = eleset.begin(); it != eleset.end(); it++)
		{
			int k = 0;
			for (int j = 0; j < n; j++)
			{
				if (*it == nums[j])
				{
					k++;
				}
			}
			if (k>ele_appears)
			{
				return *it;
			}
		}

	}
};

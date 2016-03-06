//283 move zeros
class Solution {
public:
	void moveZeroes(vector<int>& nums)
	{
		vector<int> numcopy;
		vector<int> zeroarray;
		//numcopy = nums;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != 0 && nums[i] % 10 != 0)
			{
				numcopy.push_back(nums[i]);
			}
			else
			{
				zeroarray.push_back(nums[i]);
			}
		}
		for (int i = 0; i < numcopy.size(); i++)
		{
			nums[i] = numcopy[i];
		}

		for (int i = numcopy.size(); i < zeroarray.size(); i++)
		{
			nums[i] = zeroarray[i];
		}
	}
};

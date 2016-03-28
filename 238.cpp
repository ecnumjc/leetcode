
//238. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
		int nums_size = nums.size();
		vector<int> product_result(nums_size,1);
		for (int i = 1; i < nums_size; i++)
		{
			product_result[i] = nums[i-1]*product_result[i-1];
		}

		int product = 1;
		for (int j = nums_size - 1; j >= 0; j--)
		{ 
			product_result[j] = product_result[j] * product;
			product = product * nums[j];
		}

		return product_result;
    }
};
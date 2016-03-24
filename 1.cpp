class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		multimap<int, int> num_index;
		vector<int> result;
		for (int i = 0; i <nums.size(); i++)
		{
			num_index.insert(pair<int, int>(nums[i], i));
		}
		multimap<int, int >::iterator start, end;
		start = num_index.begin();
		end = num_index.end();
		end--;
		while (*start <= *end)
		{
			if (start->first + end->first == target)
			{
				result.push_back(start->second);
				result.push_back(end->second);
				return result;
			}
			else
			{
				if (start->first + end->first > target)
				{
					end--;
				}
				else
				{
					start++;
				}
			}
		}
    }
};
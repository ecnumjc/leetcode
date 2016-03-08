//191. Number of 1 Bits
class Solution {
public:
	int hammingWeight(int n) {
		int temp;
		vector<int> s;
		while (n!=0)
		{
			temp = n % 2;
			n = n / 2;		
			s.push_back(temp);
		}
		int result = 0;
		for (int i = 0; i < s.size(); i++)
		{
			result += s[i];
		}

		return result;
	}
};

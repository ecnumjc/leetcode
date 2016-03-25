//7. Reverse Integer
class Solution {
public:
	int reverse(int x) 
	{
		vector<int> reverseint;
		int temp = abs(x);
		while (temp)
		{
			reverseint.push_back(temp % 10);
			temp /= 10;
		}

	    int sum = 0;
		int size_int = reverseint.size();
		for (int i = 0; i < size_int; i++)
		{
			if (sum<INT_MAX)
			{
				sum += reverseint[i] * pow(10, size_int - i - 1);
			}
			else
			{
				return 0;
			}
		}
		if (sum<0)
		{
			return 0;
		}
		return x>=0 ? sum : 0 - sum;

	}
};
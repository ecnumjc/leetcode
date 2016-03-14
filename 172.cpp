//172. Factorial Trailing Zeroes
class Solution {
public:
	int trailingZeroes(int n) {
		int result = 0;
		for (int i = 5; i <= n; i=i*5)
		{
			result += n / i;
		}
		return result;
	}
};

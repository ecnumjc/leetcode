////66. Plus One
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		vector<int> digits_temp;
//		vector<int> result;
//		int endnum;
//		int digitsize = digits.size();
//		int temp = digits[digitsize - 1]+1;
//		for (int i = digitsize-2; i >=0; i--)
//		{
//			digits[i] = digits[i] + temp / 10;
//			endnum = temp % 10;
//		    digits_temp.push_back(endnum);
//		    temp = digits[i];
//		}
//		digits_temp.push_back(temp%10);
//		if (temp/10)
//		{
//			digits_temp.push_back(temp / 10);
//		}
//		
//		for (int i = digits_temp.size()-1; i >=0; i--)
//		{
//			result.push_back(digits_temp[i]);
//		}
//		return result;
//	}
//};
//
//
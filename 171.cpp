
//171. Excel Sheet Column Number
class Solution {
public:
	int titleToNumber(string s) {
		int num = 0;
		for (int i = s.size()-1; i >= 0; i--)
		{
			num+= ((int)s[i] - 64)*pow(26,i);
		}
		return num;
	}
};

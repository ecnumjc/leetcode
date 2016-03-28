//58. Length of Last Word
class Solution {
public:
	int lengthOfLastWord(string s)
	{
		int temp = 1;
		for (auto ch : s)
		{
			if (ch != ' ')
			{
				temp = 0;
			}
		}

		if (s.empty() || temp == 1)
		{
			return 0;
		}
		string word;
		vector<string> vec;
		while (1)
		{
			int pos = s.find(' ');
			if (pos == 0)
			{
				s = s.substr(1);
				continue;
			}
			if (pos < 0)
			{
				vec.push_back(s);
				break;
			}
			word = s.substr(0, pos);
			vec.push_back(word);
			s = s.substr(pos + 1);
		}

		while (vec.back().size() == 0)
		{
			vec.pop_back();
		}
		return vec.back().size();
	}
};


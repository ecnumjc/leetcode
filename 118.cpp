//118. Pascal's Triangle
class Solution {
public:
	vector<vector<int>> generate(int numRows) 
	{
		vector<int> rowvec;
		vector<vector<int>> resultvec;
		for (int i = 0; i < numRows; i++)
		{
			rowvec.clear();
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || j == i)
				{
					rowvec.push_back(1);
				}
				else
				{
					rowvec.push_back(resultvec[i - 1][j - 1] + resultvec[i - 1][j]);
				}
			}
			resultvec.push_back(rowvec);
		}
		return resultvec;
	}
};

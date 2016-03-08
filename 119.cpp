//119. Pascal's Triangle II
class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> rowvec;
		vector<vector<int>> resultvec;
		for (int i = 0; i <= rowIndex; i++)
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
			if (i==rowIndex)
			{
				return rowvec;
			}		
		}
	}
};

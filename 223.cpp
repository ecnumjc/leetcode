class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
		if (E>=A&&E<=C&&G>=A&&G<=C&&F>=B&&H<=D)
		{
			return abs(D - B)*abs(C - A);
		}
		else if (A>=E&&C<=G&&B>=F&&D<=H)
		{
			return abs(G - E)*abs(H - F);
		}

		else if ((A>E&&A >= G) || (B > F&&B >= H) || (E > A&&E >= C) || (F >=D&&F > B))
		{
		    cout<<abs(D - B)*abs(C - A) + abs(G - E)*abs(H - F);
			return abs(D - B)*abs(C - A) + abs(G - E)*abs(H - F);
		}
		else
		{
			vector<int> x;
			vector<int> y;
			x.push_back(A);
			x.push_back(E);
			x.push_back(C);
			x.push_back(G);
			y.push_back(B);
			y.push_back(D);
			y.push_back(F);
			y.push_back(H);
			sort(x.begin(), x.end());//ÉıĞòÅÅÁĞ
			sort(y.begin(), y.end());//ÉıĞòÅÅÁĞ
			int x1 = x[1];
			int y1 = y[1];
			int x2 = x[2];
			int y2 = y[2];
			int a, b;
			if (x1 == x2)
			{
				a = x[3] - x[0];
			}
			else
			{
				a = x2 - x1;
			}
			if (y1 == y2)
			{
				b = y[3] - y[0];
			}
			else
			{
				b = y2 - y1;
			}
			return abs(D - B)*abs(C - A) + abs(G - E)*abs(H - F)-a*b;
		}
    }
};
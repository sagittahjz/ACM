#line 2 "ShoppingSurveyDiv1.cpp"

#include <bits/stdc++.h>

#define LL long long
#define FI first
#define SE second
#define PB push_back
#define MP make_pair
#define VI vector<int> 
#define VP vector<PII>
#define VS vector<string>
#define PII pair<int, int>
#define SZ(a) ((int) a.size())
#define ALL(a) a.begin(), a.end()
#define mem(a) memset(a, 0, sizeof(a))
#define memm(a) memset(a, -1, sizeof(a))
#define DBG(x, s) cout << (x) << ' ' << (s) << endl
#define REP(i, n) for (int i = 0; i < (int) (n); ++i)
#define RED(i, n) for (int i = (int) (n - 1); i >= 0; --i)
#define REPP(i, a, b) for (int i = (int) (a); i <= (int) (b); ++i)
#define REDD(i, a, b) for (int i = (int) (a); i >= (int) (b); --i)
#define INF 0x3f3f3f3f

using namespace std;

class ShoppingSurveyDiv1 {
	public:
	int minValue(int N, int K, vector <int> s) {
		int m = SZ(s);
		int sum = 0;
		REP(i, m) sum += s[i];
		if (sum <= (K - 1) * N) return 0;
		else {
			int tot = N;
			int ans = 0;
			VI q;
			REP(i, m) if (s[i]) q.push_back(s[i]);
			sort(ALL(q));
			reverse(ALL(q));
			while (sum > (K - 1) * N && N > 0) {
				sum -= SZ(q);
				REP(i, SZ(q)) q[i]--;
				while (SZ(q) && q.back() == 0) q.pop_back();
				N--;
				ans++;
			}
			return ans;
		}
	}
	
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 10; int Arg1 = 2; int Arr2[] = {1, 2, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 0; verify_case(0, Arg3, minValue(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 5; int Arg1 = 2; int Arr2[] = {1, 2, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 1; verify_case(1, Arg3, minValue(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 4; int Arg1 = 4; int Arr2[] = {4, 4, 4, 2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; verify_case(2, Arg3, minValue(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 20; int Arg1 = 3; int Arr2[] = {1, 10, 3, 4, 8, 15, 3, 16, 18, 2, 7, 3}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 10; verify_case(3, Arg3, minValue(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 4; int Arg1 = 2; int Arr2[] = {1, 2, 1, 1, 3, 1, 2, 2, 1, 2, 1}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 2; verify_case(4, Arg3, minValue(Arg0, Arg1, Arg2)); }
	void test_case_5() { int Arg0 = 2; int Arg1 = 3; int Arr2[] = {1, 1, 1, 2}; vector <int> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); int Arg3 = 1; verify_case(5, Arg3, minValue(Arg0, Arg1, Arg2)); }

// END CUT HERE

};//Created by yuzhou627

// BEGIN CUT HERE
int main() {
	ShoppingSurveyDiv1 ___test;
	___test.run_test(-1);
	return 0;
}
// END CUT HERE
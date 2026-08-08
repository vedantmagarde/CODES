class Solution {
	public:
	
	int fun(string& s1, string& s2, int i1, int i2, vector<vector<int>> &dp) {
		if (i1 == s1.length() || i2 == s2.length())
			return 0;
		
		if (dp[i1][i2] != -1)return dp[i1][i2];
		
		if (s1[i1] == s2[i2]) {
			return dp[i1][i2] = 1 + fun(s1, s2, i1 + 1, i2 + 1, dp);
		}
			
			return dp[i1][i2] = 0;
			// 			return 0;
// 		}
		// 		return 0;
	}
	
	int longCommSubstr(string& s1, string& s2) {
		vector<vector<int>> dp(s1.length() + 5, vector<int>(s2.length() + 5, -1));
		int ans = 0;
		for (int i = 0; i<s1.length(); i++) {
			for (int j = 0; j<s2.length(); j++) {
				ans = max(ans, fun(s1, s2, i, j, dp));
			}
		}
		return ans;
		
	}
};

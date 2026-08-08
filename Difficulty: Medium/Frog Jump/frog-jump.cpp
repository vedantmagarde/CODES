class Solution {
	public:
	int fun(vector<int>& height, int step, vector<int>&dp) {
		if (step >= height.size() - 1)
			return 0;
		
		if (dp[step] != -1)
			return dp[step];
		
		int ans1 = abs(height[step]-height[step + 1]) + fun(height, step + 1, dp);
		int ans2=INT_MAX;
		if (step + 2 < height.size()) {
			ans2 = abs(height[step] - height[step + 2]) + fun(height, step + 2, dp);
		}
		// 		ans += ;
		// 		cout<<ans<<endl;
		return dp[step] = min(ans1, ans2);
	}
	int minCost(vector<int>& height) {
		vector<int>dp(height.size() + 10, -1);
		return fun(height, 0, dp);
	}
};

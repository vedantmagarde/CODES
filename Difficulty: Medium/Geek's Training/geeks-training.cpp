class Solution {
	public:
	int fun(vector<vector<int>> & mat, int col_itr, int row_itr, int &ans_sum, vector<vector<int>> &dp) {
		if (row_itr == mat.size())
			return 0;
		
		if (dp[row_itr][col_itr] != -1)
			return dp[row_itr][col_itr];
		
		//   temp_sum+=mat[row_itr][col_itr];
		int maxi = 0;
		for (int i = 0; i<3; i++) {
			if (i != col_itr) {
				maxi = max(maxi, fun(mat, i, row_itr + 1, ans_sum, dp));
			}
		}
		return dp[row_itr][col_itr] = mat[row_itr][col_itr]+maxi;
	}
	int maximumPoints(vector<vector<int>> & mat) {
		
		vector<vector<int>> dp(mat.size() + 5, vector<int>(3, -1));
		int ans_sum = 0;
		for (int i = 0; i<3; i++)
			ans_sum = max(ans_sum, fun(mat, i, 0, ans_sum, dp));
		return ans_sum;
	}
};

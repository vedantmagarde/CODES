class Solution {
	public:
	int rowWithMax1s(vector<vector<int>> &arr) {
		int c = arr[0].size() - 1;
		int r = 0;
		int ans = -1;
		while (r<arr.size()) {
			while (r<arr.size() && c >= 0 && arr[r][c] == 1) {
				c--;
				ans = r;
			}
			r++;
		}
		return ans;
		
	}
};

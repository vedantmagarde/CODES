class Solution {
	public:
	
	int preference(char ch) {
		if (ch == '^')return 3;
		if (ch == '*' || ch == '/')return 2;
		if (ch == '+' || ch == '-')return 1;
		return - 1;
	}
	
	string postToPre(string s) {
		string ans = "";
		stack<string>st;
		int i = 0;
		while (i <s.length()) {
			
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
				string s1 = st.top();
				st.pop();
				string s2 = st.top();
				st.pop();
				string final=s[i]+s2+s1;
				st.push(final);
			}
			else {
				string temp = "";
				temp += s[i];
				st.push(temp);
			}
			i++;
		}
// 		cout << "apna---" << ans << endl;
		while (!st.empty()) {
// 			cout << "LL";
			ans += st.top();
			st.pop();
		}
		
		// 		int l = 0;
		// 		int r = s.length() - 1;
		// 		while (l <= r) {
		// 			if (preference(s[l]) != -1) {l++; continue; }
		// 			if (preference(s[r]) != -1) {r--; continue; }
		// 			swap(s[l++], s[r--]);
		// 		}
		
		return ans;
		
	}
};

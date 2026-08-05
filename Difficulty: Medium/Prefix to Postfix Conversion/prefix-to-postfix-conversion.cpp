class Solution {
	public:
	string preToPost(string &s) {
		string ans = "";
		stack<string>st;
		int count = 0;
		int i = s.length() - 1;
		
		while (i >= 0) {
			
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
				string s1 = st.top();
				st.pop();
				string s2 = st.top();
				st.pop();
				string final = s1 + s2 + s[i] ;
				st.push(final);
			}
			else {
				string temp = "";
				temp += s[i];
				st.push(temp);
			}
			
			i--;
		}
		
		while (!st.empty()) {
			ans += st.top();
			st.pop();
		}
		
		return ans;
		
	}
};

class Solution {
	public:
	
	int preference(char ch) {
		if (ch == '^')return 3;
		if (ch == '*' || ch == '/')return 2;
		if (ch == '+' || ch == '-')return 1;
		return - 1;
	}
	string infixToPostfix(string& s) {
		string ans = "";
		stack<char>st;
		
		int i = 0;
		while (i<s.length()) {
			
			if (s[i] == ')') {
				while (st.top() != '(') {
					ans += st.top();
					st.pop();
				}
				st.pop();
			}
			else if (preference(s[i]) != -1) {
				while (!st.empty() && (preference(s[i])<preference(st.top()) || (preference(s[i]) == preference(st.top()) && s[i] != '^'))) {
					ans += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
			else if (s[i] == '(') {
				st.push(s[i]);
			} else {
				ans += s[i];
			}
			i++;
		}
		
		while (!st.empty()) {
			ans += st.top();
			st.pop();
		}
		
		return ans;
	}
};

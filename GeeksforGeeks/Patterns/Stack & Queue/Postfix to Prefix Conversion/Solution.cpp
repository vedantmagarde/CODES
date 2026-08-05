class Solution {
	public:
	
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
				string final = s[i] + s2 + s1;
				st.push(final);
			}
			else {
				string temp = "";
				temp += s[i];
				st.push(temp);
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

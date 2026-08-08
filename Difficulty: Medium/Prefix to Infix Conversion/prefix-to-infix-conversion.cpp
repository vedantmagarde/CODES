class Solution {
	public:
	
	int preference(string ch) {
		if (ch == "^")return 3;
		if (ch == "*" || ch == "/")return 2;
		if (ch == "+" || ch == "-")return 1;
		return - 1;
	}
	string preToInfix(string &s) {
		
		string ans = "";
		stack<string>st;
		
		int count = 0;
		int i = 0;
		while (i<s.length()) {
			string t = "";
			int sym = preference(t + s[i]);
			
			if (sym == -1) { // char
				count++;
			} else {// sign
				if (count != 0)
					count--;
			}
			
			string temp = "";
			temp += s[i];
			st.push(temp);
			
			while (count == 2) {
				string s1 = st.top() + ")";
				st.pop();
				string s2 = "(" + st.top();
				st.pop();
				string s3 = st.top();
				st.pop();
				count = 1;
				if (!st.empty() && preference(st.top()) == -1)
					count = 2;
				string final = s2 + s3 + s1;
				st.push(final);
				
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

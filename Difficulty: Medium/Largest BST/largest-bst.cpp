class Solution {
	public:
	
	struct NodeInfo {
		int size;
		int max_val;
		int min_val;
		bool isbst;
	};
	
	NodeInfo fun(Node*root) {
		if (root == NULL) {
			return {0, INT_MIN, INT_MAX, true};
		}
		NodeInfo left = fun(root->left);
		NodeInfo right = fun(root->right);
		
		NodeInfo curr;
		if (left.isbst && right.isbst && left.max_val<root->data && root->data<right.min_val) {
			curr.max_val = max(root->data, right.max_val);
			curr.min_val = min(root->data, left.min_val);
			curr.size = left.size + right.size + 1;
			curr.isbst = left.isbst & right.isbst;
		} else {
			curr.isbst = false;
			curr.size = max(left.size, right.size);
			curr.max_val = 0;
			curr.min_val = 0;
		}
		
		return curr;
	}
	
	int largestBst(Node *root) {
		
		return fun(root).size;
		
	}
};

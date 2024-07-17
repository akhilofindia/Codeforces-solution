class Solution {
public:
    TreeNode* getLCA(TreeNode* root, int start, int dest) {
        if(!root) return NULL;
        if(root->val == start || root->val == dest) return root;
        TreeNode* left = getLCA(root->left, start, dest);
        TreeNode* right = getLCA(root->right, start, dest);
        if(left && right) return root;
        if(left) return left;
        else return right;
    }
    
    bool traverse(TreeNode* root, string& path, int val) {
        if(!root) return false;
        if(root->val == val) return true;
        //left
        path.push_back('L');
        if(traverse(root->left, path, val)) return true; 
        path.pop_back();  // backtrack 
		//right
        path.push_back('R');
        if(traverse(root->right, path, val)) return true; 
        path.pop_back(); // backtrack
        return false;
    }
    
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* lca = getLCA(root, startValue, destValue);
        string lca1 = "", lca2 = "";
        traverse(lca, lca1, startValue);
        traverse(lca, lca2, destValue);
        for (int i = 0; i < lca1.size(); i++)
        {
        	lca1[i]='U';
        }
        return lca1 + lca2;
    }
};
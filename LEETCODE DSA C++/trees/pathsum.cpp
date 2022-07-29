    //https://leetcode.com/problems/path-sum/
    bool hasPathSum(TreeNode* root, int sum) {
    if (!root) return false;
    sum -= root->val;
    if (!root->left && !root->right) return sum == 0;
    return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
        
    }
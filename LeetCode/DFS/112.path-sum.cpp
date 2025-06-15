class Solution {
public:
    int DFS(TreeNode* root, int targetSum){
        if(root==nullptr) return false;
        targetSum -= root->val;
        // 檢查是否尾吧節點
        if(root->left==nullptr && root->right==nullptr) return targetSum == 0;

        return DFS(root->left, targetSum) || DFS(root->right, targetSum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return DFS(root, targetSum);
    }
};
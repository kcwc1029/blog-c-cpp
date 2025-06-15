class Solution {
public:
    int maxDepth(TreeNode* root) {
        return DFS(root, 0);
    }

    int DFS(TreeNode* root, int ans){
        if(root==nullptr) return ans;
        ans++;
        return max(DFS(root->left, ans), DFS(root->right, ans));
    }
};
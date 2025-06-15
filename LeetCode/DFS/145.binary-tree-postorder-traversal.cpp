class Solution {
public:
    void DFS(TreeNode* root, vector<int>& ans){
        if(root==nullptr) return;
        // 左
        DFS(root->left, ans);
        // 右
        DFS(root->right, ans);
        // 中
        ans.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        DFS(root, ans);
        return ans;
    }
};
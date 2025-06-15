class Solution {
public:
    void DFS(TreeNode* root, vector<int>& ans){
        // 返回條件
        if(root==nullptr) return;
        // 中
        ans.push_back(root->val);
        // 左
        DFS(root->left, ans);
        // 右
        DFS(root->right, ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        DFS(root, ans);
        return ans;
    }
};
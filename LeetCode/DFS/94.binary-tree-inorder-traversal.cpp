
class Solution {
public:
    void DFS(TreeNode* root, vector<int>& ans){
        // 返回條件
        if(root==nullptr) return;
        // 往左走
        DFS(root->left, ans);
        ans.push_back(root->val);
        DFS(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        DFS(root, ans);
        return ans;

    }
};
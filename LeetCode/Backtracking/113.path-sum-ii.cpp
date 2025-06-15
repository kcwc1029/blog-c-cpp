class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void DFS(TreeNode* root, int targetSum){
        if(root==nullptr) return;
        path.push_back(root->val);
        targetSum-=root->val;
        // 判斷是否可以放進ans => 到尾巴節點，targetSum=0
        if(root->left==nullptr && root->right==nullptr && targetSum ==0){
            ans.push_back(path);
        }
        DFS(root->left, targetSum);
        DFS(root->right, targetSum);
        path.pop_back(); // ✅ 回溯，恢复 `path`

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        DFS(root, targetSum);
        return ans;
    }
};
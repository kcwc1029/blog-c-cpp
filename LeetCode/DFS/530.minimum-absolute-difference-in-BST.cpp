// - 中序遍歷 BST，並記錄前一個節點的值。
// - 計算相鄰節點的差值，並更新最小絕對差值。
class Solution {
public:
    void DFS(TreeNode* root, int &ans, int &prev){
        if (!root) return;
        DFS(root->left, ans, prev);
        if(prev!=-1){
            ans =  min(ans, abs(root->val-prev));
        }
        prev = root->val;
        DFS(root->right, ans, prev);
    }
    
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        int prev = -1; // 記錄前一個節點的值
        DFS(root, ans, prev);
        return ans;
    }
};
// 第 K 小的元素就是中序遍历的第 K 个节点
class Solution {
public:
    void DFS(TreeNode* root, int k, int &ans, int &count){
        if(root==nullptr) return;
        // 左
        DFS(root->left, k, ans, count);
        // 中
        count++;
        if(count==k){
            ans = root->val;
            return;
        }
        // 右
        DFS(root->right, k, ans, count);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        int count = 0;
        DFS(root, k, ans, count);
        return ans;
    }
};
class Solution {
public:
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* pre = new TreeNode(INT_MIN);; // 紀錄上一個
    void DFS(TreeNode* root){
        if(root==nullptr) return;
        // 中序：左中右
        DFS(root->left);
        // 遞迴回來，pre應該要有值。然後比當前小
        if(pre && pre->val>root->val){
            if(first==nullptr) first = pre;
            second = root; // 確保第二次近來可以更新到
        }
        // 更新
        pre = root;

        DFS(root->right);
    }
    void recoverTree(TreeNode* root) {
        DFS(root); // 去發現錯誤的兩個結點
        if (first && second) swap(first->val, second->val); // ✅ 交换错误的节点
    }
};
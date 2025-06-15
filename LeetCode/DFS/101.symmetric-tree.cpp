class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        // 兩個都是空 => true
        // 一邊空一邊不空 => false
        // 比較值
        return DFS(root->left, root->right);
    }

    bool DFS(TreeNode* p, TreeNode* q){
        // 比較是否為空節點
        if(p==nullptr && q==nullptr) return true;
        else if(p==nullptr || q==nullptr) return false;
        // 比較值
        else if(p->val != q->val) return false;
        else return DFS(p->left, q->right) && DFS(p->right, q->left);
    }
};
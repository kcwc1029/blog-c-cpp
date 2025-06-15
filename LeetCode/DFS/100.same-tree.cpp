class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return DFS(p, q);
    }

    bool DFS(TreeNode* p, TreeNode* q){
        // 比較會有兩種狀況
        // 1. 其中有一個是空 
        // 2. 兩個都要比較
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        else if(p->val != q->val) return false;
        else{
            return DFS(p->left, q->left) && DFS(p->right, q->right);
        }

    }
};
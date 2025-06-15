class Solution {
public:
    TreeNode* DFS(TreeNode* root){
        if(root==nullptr) return nullptr;
        // 左子樹
        TreeNode* left = DFS(root->left);
        // 右子樹
        TreeNode* right = DFS(root->right);
        // 進行機換
        root->left = right;
        root->right = left;
        
        return root;
    }

    TreeNode* invertTree(TreeNode* root) {
        return DFS(root);
    }
};
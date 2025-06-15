class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        if(root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            TreeNode* node = q.front();
            q.pop();
            if(node->left && node->left->left==nullptr && node->left->right==nullptr) ans+=node->left->val;
            // BFS
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
        }
        return ans;
    }
};
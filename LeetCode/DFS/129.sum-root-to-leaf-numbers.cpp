// 解法01：DFS
class Solution {
public:
    int DFS(TreeNode* root, int n){
        if(root==nullptr) return 0;
        int new_sum = n*10 + root->val;
        // 檢查是否到結尾
        if(root->left==nullptr && root->right==nullptr) return new_sum;
        else{
            return DFS(root->left, new_sum) + DFS(root->right, new_sum);
        }
    }
    int sumNumbers(TreeNode* root) {
        return DFS(root, 0);
    }
};

// 解法02：BFS
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if (root == nullptr) return 0;
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, root->val});
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int sum = q.front().second;
            q.pop();

            // 處理左右子樹
            if(node->left==nullptr && node->right==nullptr){
                ans+=sum;
            }else{
                // 還要繼續蝶帶
                if(node->left!=nullptr) q.push({node->left, sum*10+node->left->val});
                if(node->right!=nullptr) q.push({node->right, sum*10+node->right->val});
            }
        }

        return ans;
    }
};
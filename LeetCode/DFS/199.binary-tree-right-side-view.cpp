// 解法01：DFS
class Solution {
public:
    void DFS(TreeNode* root, vector<int>& ans, int depth){
        if(root==nullptr)return;
        // 这个深度首次遇到
        if(ans.size()==depth) ans.push_back(root->val);
        // 遞迴(先右在左)
        DFS(root->right, ans, depth+1);
        DFS(root->left, ans, depth+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        DFS(root, ans, 0);    
        return ans;
    }
};

// 解法02：BFS
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        if(root==nullptr) return ans;
        q.push(root);   
        while(!q.empty()){
            TreeNode* lastNode = nullptr; // 记录当前层的最后一个节
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* node = q.front(); // 區出當前節點->BFS用
                lastNode = q.front();
                q.pop();    
                
                // BFS
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(lastNode->val);
        }
        return ans;
    }
};
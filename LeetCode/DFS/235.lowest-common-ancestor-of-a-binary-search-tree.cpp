// 解法01：便利兩次
class Solution {
public:
    void DFS(TreeNode* root, TreeNode* target, vector<TreeNode*>& path){
        if(root==nullptr) return;
        path.push_back(root);
        if(root->val==target->val) return;
        
        if(root->val > target->val) DFS(root->left, target, path);
        else DFS(root->right, target, path);
    }

    vector<TreeNode*> getPath(TreeNode* root, TreeNode* target){
        vector<TreeNode*> path;
        DFS(root, target, path);
        return path;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // 便利p，找路徑
        vector<TreeNode*> path_p = getPath(root, p);
        vector<TreeNode*> path_q = getPath(root, q);
        // 比對
        TreeNode* ans = nullptr;
        int i = 0;
        while(i<path_p.size() && i<path_q.size()){
            if(path_p[i]==path_q[i]){
                ans = path_p[i];
            }
            i++;
        }
        return ans;
    }
};


// 解法02：根據解法01，優化成一次便利
class Solution {
public:
    TreeNode* DFS(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==nullptr) return nullptr;

        if(p->val < root->val && q->val < root->val) return DFS(root->left, p, q);
        else if(p->val > root->val && q->val > root->val) return DFS(root->right, p, q);
        else return root;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = DFS(root, p, q);
        return ans;
    }
};
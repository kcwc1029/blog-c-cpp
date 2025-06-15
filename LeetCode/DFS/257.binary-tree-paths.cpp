class Solution {
public:
    void DFS(TreeNode* root, vector<string>& ans, string path){
        if(root==nullptr) return;
        // 拼接值
        path += to_string(root->val);
        // 判斷是否要push back -> 如果當前為最後，就要
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(path);
            return;
        }
        // 判斷是否可以往下
        path+="->";
        DFS(root->left, ans, path);
        DFS(root->right, ans, path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        DFS(root, ans, "");
        return ans;
    }
};
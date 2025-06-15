// 解法跟102差不多，在於用一個flag紀錄順序(正反向)
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(!root) return ans;
        bool flag = true;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;

            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if(!flag) reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            flag = !flag;   
            
        }
        return ans;

    }
};
// 解法01：用DFS
class Solution {
public:
    int DFS(TreeNode* root){
        if(root==nullptr) return 0;
        // 確認他是尾巴節點
        if(root->left==nullptr && root->right==nullptr) return 1;
        // 如果其中一個子樹是空的，直接選擇非空子樹的深度
        if(root->left == nullptr) return DFS(root->right) + 1;
        if(root->right == nullptr) return DFS(root->left) + 1;
        // 兩邊都不是空節點->來比較吧
        return min(DFS(root->left), DFS(root->right)) + 1;

    }
    int minDepth(TreeNode* root) {
        return DFS(root);
    }
};

// 解法02：用BFS(用一個queue輔助)
// 解法02：用BFS
class Solution {
public:
    int BFS(TreeNode* root){
        if(root==nullptr) return 0;
        queue<pair<TreeNode*, int>> que;
        que.push({root, 1});

        while(!que.empty()){
            // 取資料出來
            TreeNode* node = que.front().first;
            int depth = que.front().second;
            que.pop();

            // 檢查：自己是尾巴節點
            if(node->left == nullptr && node->right == nullptr) return depth;
            // 去跑左右子樹
            if(node->left != nullptr) que.push({node->left, depth+1});
            if(node->right != nullptr) que.push({node->right, depth+1});
        }
        return 0;

    }
    int minDepth(TreeNode* root) {
        return BFS(root);
    }
};

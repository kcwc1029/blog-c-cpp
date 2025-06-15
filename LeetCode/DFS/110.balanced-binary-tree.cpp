// 解法01：由尾巴至頭(此方法为本题的最优解法，但剪枝的方法不易第一时间想到。)
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return DFS(root)!=-1;
    }

    int DFS(TreeNode* root){
        // 終止條件
        if(root==nullptr) return 0;
        // 左子樹
        int left = DFS(root->left);
        // 右子樹
        int right = DFS(root->right);
        // 判斷平衡
        if(left == -1 || right == -1 || abs(left - right) >= 2) {
            return -1;
        }
        return max(left, right) + 1;
    }
};

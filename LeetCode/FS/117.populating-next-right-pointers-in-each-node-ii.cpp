// 解法：用BFS
class Solution {
public:
    queue<Node*> q;
    Node* connect(Node* root) {
        if (!root) return nullptr;
        q.push(root);
        while (!q.empty()){
            int size = q.size();
            Node* pre = nullptr; // 记录前一个节点
            for (int i = 0; i < size; i++){
                Node* node = q.front();
                q.pop();
                // 連接
                if(pre) pre->next = node;
                pre = node;
                // 繼續BFS
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return root;
    }
};
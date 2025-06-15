// 解法01：整體大致是前序便利(中左右)
class Solution {
public:
    void DFS(Node* root){
        if(root==nullptr) return;
        if(root->left){
            root->left->next = root->right;
        }
        
        if(root->right && root->next){
            root->right->next = root->next->left;
        }
        DFS(root->left);
        DFS(root->right);
    }
    Node* connect(Node* root) {
        DFS(root);
        return root;
    }
};



// 解法02：用BFS去解
class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size(); // 记录当前层的节点数
            for (int i = 0; i < size; i++) {
                Node* node = q.front();
                q.pop();

                if (i < size - 1) node->next = q.front(); // 连接右侧节点

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return root;
    }
};
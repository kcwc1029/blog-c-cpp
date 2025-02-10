class MyStack {
    public:
        queue<int> queue1; // 主隊列
        queue<int> queue2; // 輔助隊列
        
        MyStack() {    
        }
        
        // Push 元素到棧頂
        void push(int x) {
            queue2.push(x); // 將新元素推入 queue2
            
            // 將 queue1 的所有元素轉移到 queue2
            while (!queue1.empty()) {
                queue2.push(queue1.front());
                queue1.pop();
            }
            // 交換 queue1 和 queue2，讓 queue1 始終保存最終結果
            swap(queue1, queue2);
        }
        
        // 從棧頂移除元素並返回
        int pop() {
            int topElement = queue1.front(); // 獲取棧頂元素
            queue1.pop(); // 刪除棧頂元素
            return topElement;
        }
        
        // 獲取棧頂元素
        int top() {
            return queue1.front(); // 棧頂即為 queue1 的隊首
        }
        
        // 判斷棧是否為空
        bool empty() {
            return queue1.empty();
        }
    };
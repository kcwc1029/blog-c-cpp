class MyQueue {
    public:
        stack<int> stack1; // 主棧，存放新插入的元素
        stack<int> stack2; // 輔助棧，反轉順序以實現 FIFO
        MyQueue() {
            
        }
        
        void push(int x) {
            stack1.push(x); // 直接壓入 stack1 
        }
        
        int pop() {
            if(stack2.empty()){
                // stack1吐給stack2
                while(!stack1.empty()){
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }
            // 如果stack2還有東西，那就直接丟出去
            int ans = stack2.top();
            stack2.pop();
            return ans;
        }
        
        int peek() {
            if(stack2.empty()){
                // stack1吐給stack2
                while(!stack1.empty()){
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }
            // 如果stack2還有東西，那就直接丟出去
            int ans = stack2.top();
            return ans;
        }
        
        bool empty() {
            return stack1.empty() && stack2.empty();
        }
    };
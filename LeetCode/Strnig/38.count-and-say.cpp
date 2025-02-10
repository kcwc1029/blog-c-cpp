class Solution {
    public:
        string countAndSay(int n) {
            string prev = "1";
            // 生成第 n 项 -> 要去把【連續數字】進行壓縮
            for(int i=2;i<n+1;i++){
                string s= "";
                int left = 0; // start
                int right = 0; // pos
                // 描述当前字符串
                while(right<prev.size()){
                    while(right<prev.size() && prev[left]==prev[right]){
                        right++;
                    }
                    s+=to_string(right-left)+prev[left];
                    left=right;
                }
                prev = s;
            }
            return prev;
        }
    };
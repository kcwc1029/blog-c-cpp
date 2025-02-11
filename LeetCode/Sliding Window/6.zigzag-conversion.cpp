class Solution {
    public:
        string convert(string s, int numRows) {
            int n = s.size();
            // NOTE: s長度為1時，直接返回(以下兩個條件都要)
            if (n <= 1 || numRows == 1) return s;
    
            vector<string> v(numRows); // 存放上到下的格子
            int v_idx = 0; // 控制v的索引
            int flag = 1; // 1上往下，-1下往上
            for(int i=0;i<n;i++){
                v[v_idx].push_back(s[i]);
                v_idx+=flag;
                // 檢查flag是否要更換方向
                if(v_idx==0 || v_idx==numRows-1){
                    flag=-flag;
                }
            }
    
            // 將v裡面的成員串起來
            string ans="";
            for(string row: v){
                ans+=row;
            }
            return ans;
        }
    };
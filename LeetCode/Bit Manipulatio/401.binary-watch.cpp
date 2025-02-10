class Solution {
    public:
        // 給一個整數，返回該數轉二進位後有幾個1
        int f(int n){
            int ans = 0;
            while(n){
                n = n&(n-1);
                ans++;
            }
            return ans;
        }
    
        vector<string> readBinaryWatch(int turnedOn) {
            vector<string> ans;
            for(int i=0;i<12;i++){
                for(int j=0;j<60;j++){
                    string hour, min;
                    if(f(i)+f(j)==turnedOn){
                        hour = to_string(i);
                        // 分的格式比較特別，處裡一下
                        if(j<10) min = "0"+to_string(j);
                        else min = to_string(j);
                        ans.push_back(hour+":"+min);
                    }
                }
            }
            return ans;
        }
    };
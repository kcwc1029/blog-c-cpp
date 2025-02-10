// 解法 1：樸素比對

class Solution {
    public:
        int strStr(string haystack, string needle) {
            int n = haystack.size(), m = needle.size();
            for (int i = 0; i + m <= n; i++){
                bool flag = true;
                // 逐一比對
                for (int j = 0; j < m; j++){
                    if (haystack[i + j] != needle[j]){
                        flag = false;
                        break;
                    }
                }
                if (flag) return i;
            }
            return -1;
        }
    };


// 解法 2：KMP 演算法(真滴難離解)

class Solution {
    public:
        // TODO: 製作next array
        void getNext(int next[], const string &needle){
            int j = -1;
            next[0] = -1;
            for(int i=1;i<needle.size();i++){
                while (j>-1 && needle[i] != needle[j+1]) j = next[j];
                if(needle[i] == needle[j+1]) j++;
                // 紀錄
                next[i] = j;
            }
        }
    
        int strStr(string haystack, string needle) {
            // 宣告next陣列
            int next[needle.size()];
            getNext(next, needle);
            int j = -1;
            for(int i=0;i<haystack.size();i++){
                // 不匹配
                while (j>-1 && haystack[i] != needle[j+1]) j = next[j];
                if(haystack[i] == needle[j+1]) j++;
                if(j == needle.size()-1) return (i-needle.size()+1);
            }
            return -1; // 未找到匹配
        }
    };
// 解法 1：先開根號，在平方，看是否一樣。
class Solution {
    public:
        bool isPerfectSquare(int num) {
            int x = (int) sqrt(num);
            return x*x == num;
        }
    };
// 解法 2：二分去找(純屬裝牛 B)
class Solution {
    public:
        bool isPerfectSquare(int num) {
            int left = 0;
            int right = num;
            while(left<=right){
                int mid  = left + (right-left)/2;
                long square = (long)mid*mid; // 開大，避免溢位
                if(square == num) return true;
                else if(square < num) left = mid+1;
                else right = mid -1;
            }
            return false;
        }
    };
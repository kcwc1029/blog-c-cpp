
void reverseString(vector<char>& s) {
    int n = s.size();
    // 雙指針
    int left = 0, right = n-1;
    while(left<right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

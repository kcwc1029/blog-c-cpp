// -   定義一個函數 match(要找的值, 陣列本身, 陣列長度)
//     -   如果找到，返回位置
//     -   找不到，返回-1

int match(int key, int keys[], int n){
    for (int i = 0; i < n; i++){
        if (key == keys[i]){
            return i;
        }
    }
    return -1;
}

int main(void){
    int key = 2;// 要找的值
    int keys[] = {3, 4, 6, 2, 8, 10};
    int size = sizeof(keys) / sizeof(int);
    printf("%d\n", match(key, keys, size));
    return 0;
}
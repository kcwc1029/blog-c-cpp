void printArray(int (*p)[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", (*p)[i]);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(&arr);  // 傳整個陣列的位址
}

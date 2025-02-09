#include <stdio.h>
#include <stdlib.h>

// 定義 ListNode 結構
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

// 創建新節點
ListNode* createNode(int val) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // 建立鏈結串列 1 -> 2 -> 3 -> NULL
    ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    return 0;
}
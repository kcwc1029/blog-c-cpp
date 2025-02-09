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

// 遍歷鏈結串列並列印值
void traverseList(ListNode* head) {
    ListNode* cur = head; // current
    while (cur != NULL) {
        printf("%d ", cur->val);
        cur = cur->next; // 移動到下一個節點
    }
}

int main() {
    // 建立鏈結串列 1 -> 2 -> 3 -> NULL
    ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    // 遍歷鏈結
    traverseList(head);
    return 0;
}
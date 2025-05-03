#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define ARRAYSIZE 5

// 基本node
struct listnode {
    int data;
    struct listnode *next;
};
typedef struct listnode ListNode;

// 新增node
ListNode *genListNode(int data,ListNode *next){
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    assert(node != NULL);
    node->data = data;
    node->next = next;
    return node;
}


// 印出每一個節點
void printLinkedList(ListNode *node){
    for (; node != NULL; node = node->next)
        printf("data = %d\n", node->data);
}

// 移除mode
void freeLinkedList(ListNode *node){
    while (node != NULL) {
        ListNode *next = node->next;
        free(node);
        node = next;
    }
}

// main
int main(void){
    int array[5] = {1,2,3,4,5};
    ListNode *head; // 整條 Linked List 的起點
    ListNode *previous = NULL; // 目前最新插入的節點
    for (int i = 0; i < ARRAYSIZE; i++) {
        // 要把「新節點的 next 指向 previous」，然後更新 previous 成新節點。
        head = genListNode(array[i], previous); // 整個linklist最新的頭
        previous = head;// 當前linklist最新的頭
    }
    // 做出來linklist
    printLinkedList(head);
    freeLinkedList(head);
    return 0;
}
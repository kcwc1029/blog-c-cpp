linklist 其實是一個節點集合(node set)，每一個 node 可分為：

-   data：儲存資料
-   next：存一個指標(指向下一個 node 的位置)

![upgit_20250428_1745845893.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/04/upgit_20250428_1745845893.png)

```c
struct listnode {
    int data;
    struct listnode *next; // pointer 指向下一個node
}
typedef struct listnode Listnode
```

-   使用 linklist 時，需要知道 linklist 得頭(head)，在皆由 pointer 去知道第 2 3 個節點。
-   head 不是特別獨立的東西，它只是「指向第一個節點」的指標。
-   linklist 的最後，需要用 NULL 這個特殊指標值，來代表整個 linklist 結束

## 1. 建立 node

```c
// 建立一個node的過程
ListNode *genListNode(int data, ListNode *next){
    ListNode *node = (ListNode *)malloc(sizeof(ListNode)); // 先跟記憶體要空間
    node->data = data; // 把data填進去
    node->next = next; // 把下一個節點的地址填進去
    return node; // 做完了，吐出來
}
```

這邊要注意的是，每一次建立的點，都是排在第一個歐
假設我跑 for 迴圈：1、2、3
他會建立

```
[1]
[2]->[1]
[3]->[2]->[1]
```

引此，我們這邊通常會使用兩個變數去紀錄，以方便後續操作

-   head：永遠記住鏈結串列的開頭，方便之後從第一個節點開始遍歷或操作。
-   previous：目前最新插入的節點=>每次新增節點時，要把「新節點的 next 指向 previous」，然後更新 previous 成新節點。

## 2. 遍歷鏈結串列（Linked List Traversal）

```c
ptr = head; // 將head指向的地址給了ptr => 相當於ptr跟head指向相同的地址
while (ptr != NULL) { // 檢查，當前節點之指針，並不是NULL的時候
    printf("data = %d\n", node->data); // 處理目前 ptr 指向的節點（可以印出資料、累加等等）
    ptr = ptr->next; // 移動到下一個節點
}
```

![upgit_20250428_1745847249.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/04/upgit_20250428_1745847249.png)

## 3. 移除鏈結串列（remove Linked List）

-   移除，其實就是讓 node 不被找到
-   假設我要移除第 X 個 node：我就把第(X-1)個 node 的 pointer，指向(X+1)node(相當於排擠第 X 個 node，讓大家遺忘他)

```c
void freeLinkedList(ListNode *node){
    while (node != NULL) {
        ListNode *next = node->next; // 先記下下一個節點
        free(node);                  // 釋放目前這個節點
        node = next;                  // 移動到下一個節點
    }
}
```

### 3.1. Lab：實作基本 linklist

```c
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
        head = genListNode(array[i], previous);
        previous = head;
    }
    printLinkedList(head);
    freeLinkedList(head);
    return 0;
}

// data = 5
// data = 4
// data = 3
// data = 2
// data = 1
```

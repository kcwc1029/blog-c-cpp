#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL; // 空鏈結串列

    if (head == NULL) {
        printf("Linked List is empty\n");
    }

    return 0;
}
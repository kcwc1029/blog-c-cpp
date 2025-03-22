#include <stdio.h>

struct A {
    int var;
};

int main() {
    struct A a = {30};
    struct A *ptr;
    ptr = &a;
    printf("%d ", (*ptr).var); // Dot Operator
    printf("%d ", ptr->var); // Arrow Operator
    return 0;
}




#include <stdio.h>
int main(){
    int a = 22;
    int *p = &a;
    printf("p = %u\n", p); 
    p++;
    printf("p++ = %u\n", p);
    p--;
    printf("p-- = %u\n", p);

    float b = 22.22;
    float *q = &b;
    printf("q = %u\n", q);  
    q++;
    printf("q++ = %u\n", q);
    q--;
    printf("q-- = %u\n", q);

    char c = 'a';
    char *r = &c;
    printf("r = %u\n", r);  
    r++;
    printf("r++ = %u\n", r); 
    r--;
    printf("r-- = %u\n", r);  
    return 0;
}

// p = 4294953988
// p++ = 4294953992
// p-- = 4294953988
// q = 4294953984
// q++ = 4294953988
// q-- = 4294953984
// r = 4294953983
// r++ = 4294953984
// r-- = 4294953983
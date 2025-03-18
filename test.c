#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prime number
int isPrime(int number){
	int isPrime = 1;
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}


int main(){
    int n = 5;
    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime(i) == 1) {
            if (isPrime(n - i) == 1) {
                printf("%d %d\n", i, n-i);
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}

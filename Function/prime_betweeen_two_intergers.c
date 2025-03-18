#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prime number
int checkPrimeNumber(int number){
	int f = 1;
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			f = 0;
			break;
		}
	}
	return f;
}


int main(){
	int num1 = 2, num2 = 10,f;
	printf("Prime numbers between %d and %d are: ", num1, num2);
	for (int j = num1; j < num2; ++j) {
		f = checkPrimeNumber(j);
		if (f == 1) {		 
			printf("%d ", j);
		}
	}
	return 0;
}
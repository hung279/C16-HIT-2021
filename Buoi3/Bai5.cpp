#include<stdio.h>

int main() {
	int n;
	do {
		printf("Nhap n = "); scanf("%d", &n);
	} while(n < 0 || n > 100);
	
	int A = 0, B = 1, C = 1;
	if(n == 0) B = 0;
	
	int i;
	for (i = 1; i <= n; i++) {
		A += i;
		B += 2*i;
		C += (2*i+1);
	}
	printf("\nA = %d", A);
	printf("\nB = %d", B);
	printf("\nC = %d", C);
	return 0;
}


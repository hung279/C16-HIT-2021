#include <stdio.h>

int main() {
	int n;
	do {
		printf("n = "); scanf("%d", &n);
	} while (n < 2 || n > 9);
	int i;
    for(i = 1; i <= 10;i++) {
	 	printf("%d x %d = %d\n", n, i, n*i);
    }
	return 0;
}

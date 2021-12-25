#include<stdio.h>

int main() {
	int t, n;
	printf("Tuoi: ");
	scanf("%d%d", &t, &n);
	
	(t >= 18) ? printf("Da du tuoi di tu") : printf("Chua du tuoi di tu");
	
	return 0;
}

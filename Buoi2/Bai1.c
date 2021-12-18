#include<stdio.h>

int main() {
	int t;
	printf("Tuoi t = ");
	scanf("%d", &t);
	
	(t >= 18) ? printf("Da du tuoi di tu") : printf("Chua du tuoi di tu");
	return 0;
}

#include <stdio.h>

int main() {
	for(int i = 0; i <= 99; i++)
	{
		printf("%3d", i);
			
		if (i % 10 == 9)
			printf("\n");
	}
		
	return 0;
}

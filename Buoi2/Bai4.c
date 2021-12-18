#include <stdio.h>

int main()
{
    int m,n,k;
    
    	printf("so member n = ");
    	scanf("%d", &n);
    
    	printf("goi keo m = ");
    	scanf("%d", &m);
    
    	printf("so keo k = ");
    	scanf("%d", &k);
    
    if ((m * k) % n == 0)  {       
        printf("no");
    }
    else  {  
        printf("yes");
    }
    
    return 0;
}

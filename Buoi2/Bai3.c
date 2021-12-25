#include <stdio.h>

int main()
{
    int m,n ;
    
    printf("so bong n = ");
    scanf("%d",&n);
    
    printf("gia tien m = ");
    scanf("%d",&m);
    //Vi chan > 4 la tu 6 tro len va le > 5 tu 7 tro len nen DK chung la n > 5
    if (n > 5) {
if (n % 2 == 0) {
        	printf("so tien Hung phai tra: %.0f ", m * n * 0.85);
        }
        
        else {
            printf("so tien Hung phai tra: %.0f ", m * n * 0.8);
        } 
        
    }
    else {       
        	printf("so tien Hung phai tra: %d ", m * n); 
	}
    
    return 0;        
}

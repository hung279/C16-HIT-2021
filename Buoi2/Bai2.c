#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    
    printf("a = ");
    scanf("%d", &a);
   
    if (a >= 2 && a <= 50) {
       
        printf ("(a/3) ^ 4 = %.3f", pow((float)a/3, 4));
        
    }
    
    return 0;
}

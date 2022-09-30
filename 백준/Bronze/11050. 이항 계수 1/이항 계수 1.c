// n! / (k! * (n - k)!)

#include "stdio.h"

int main(void)
{
    int n;
    int k;
    int num = 1;
    int den = 1;
    scanf("%d %d", &n, &k);
    
    for (int i = n - k + 1 ; i <= n ; i++)
        num *= i;
    
    for (int i = 2 ; i <= k ; i++)
        den *= i;
    
    printf("%d", num / den);
}
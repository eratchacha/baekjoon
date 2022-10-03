#include "stdio.h"

int people(int k, int n)
{
    if (k == 0)
        return n;
    else if (n == 1)
        return people(k - 1, n);
    else
        return people(k - 1, n) + people(k, n - 1);
}

int main(void)
{
    int t;
    int k;
    int n;
    scanf("%d", &t);
    
    for (int i = 0 ; i < t ; i++)
    {
        scanf("%d\n%d", &k, &n);
        printf("%d\n", people(k,n));
    }
}
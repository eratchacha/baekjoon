#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int n;
    unsigned long long pow = 1;
    unsigned long long answer = 0;
    scanf("%d\n", &n);
    
    char alpha[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%c", &alpha[i]);
    }
    for (int i = 0 ; i < n ; i++)
    {
        answer += (pow * (alpha[i] - 'a' + 1)) % 1234567891;
        answer %= 1234567891;
        pow *= 31;
        pow %= 1234567891;
    }
    
    printf("%d", answer);
}
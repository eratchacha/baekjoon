#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int gcd;
    int lcm;
    scanf("%d %d", &a, &b);
    
    if(a > b)
    {
        gcd = b;
        lcm = a;
    }
    else
    {
        gcd = a;
        lcm = b;
    }
    
    while (1)
    {
        if(a % gcd == 0 && b % gcd ==0)
            break;
        gcd--;
    }
    
    while (1)
    {
        if(lcm % a == 0 && lcm % b ==0)
            break;
        lcm++;
    }
    
    printf("%d\n%d",gcd ,lcm);
}
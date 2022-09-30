#include "stdio.h"

int main(void)
{
    int num;
    int w;
    int h;
    int n;
    int answer;
    scanf("%d", &num);
    
    for(int i = 0 ; i < num ; i++)
    {
        scanf("%d", &h);
        scanf("%d", &w);
        scanf("%d", &n);
        
        if (n > h)
        {   if (n % h != 0)
                w = n / h + 1; 
            else
                w = n / h;
            if (n % h != 0)    
                h = n % h;
        }
        else
        {   h = n;
            w = 1;
        }
        answer = h * 100 + w; 
        printf("%d\n", answer);
    }
}
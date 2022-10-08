#include "stdio.h"

int main(void)
{
    int n;
    scanf("%d", &n);
     
    int w[n];
    int h[n];
    int grade[n];
    int max = 0;
    
    for (int i = 0 ; i < n ; i++)
    {
        grade[i] = 1;
        scanf("%d %d", &w[i], &h[i]);
    }
    
    for (int i = 0 ; i < n ; i++)
    {
       for (int j = 0 ; j < n ; j++)
       {
           if (i == j)
               continue;

           if ((w[i] >= w[j] && h[i] >= h[j]) && (w[i] != w[j] && h[i] != h[j])) 
                   grade[j]++;
       }
    }
    
    for (int i = 0 ; i < n ; i++)
        printf("%d\n", grade[i]);

}
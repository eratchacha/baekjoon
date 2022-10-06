#include "stdio.h"

int main(void)
{
    int n;
    int blackjack;
    int num;
    scanf("%d %d\n", &n, &blackjack);
    int arr[n];
    int flag = 0;
    num = blackjack;
    
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    while(1)
    {
        for (int i = 0 ; i < n - 2 ; i ++)
        {
            for (int j = i + 1 ; j < n - 1 ; j++)
            {
                for (int k = j + 1 ; k < n ; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == num)
                    {
                        flag = 1;
                        break;
                    }
                }
                
                if (flag == 1)
                    break;
            }
            
            if (flag == 1)
                break;
        }
        
        if (flag == 1)
        {
            printf("%d", num);
            return 0;
        }
        else
            num--;
    }
}
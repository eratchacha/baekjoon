#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int nums[10000];
    int n;
    int num;
    
    memset(nums, 0, sizeof(int) * 10000);
    scanf("%d", &n);
    
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &num);
        nums[num - 1]++;
    }
    
    for (int i = 0 ; i < 10000 ; i++)
    {
        if (nums[i] > 0)
        {
            for(int j = 0 ; j < nums[i] ; j++)
            {
                printf("%d\n", i + 1);
            }
        }
    }
}
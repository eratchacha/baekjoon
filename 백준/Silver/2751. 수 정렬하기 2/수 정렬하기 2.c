#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int n;
    int num;
    scanf("%d", &n);
    int nums[2000001];
    memset(nums, 0, sizeof(int) * 2000001);
    
    for (int i = 0 ; i < n ; i++)
   {
        scanf("%d", &num);
        nums[num + 1000000]++;
   }
    for (int i = 0 ; i < 2000001 ; i++)
    {
        if (nums[i] == 1)
            printf("%d\n", i - 1000000);
    }
}
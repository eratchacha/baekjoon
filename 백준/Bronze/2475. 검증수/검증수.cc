#include <stdio.h>

int main(void)
{
    int nums[5];
    int pow[5];
    int result;
    
    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &nums[i]);
        pow[i] = nums[i] * nums[i];
    }
    result = (pow[0] + pow[1] + pow[2] + pow[3] + pow[4]) % 10;
    printf("%d",result);
}
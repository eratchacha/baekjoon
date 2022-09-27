#include "stdio.h"
#include "stdlib.h"

int checkPalinNum(int n)
{
    int num = n;
    int len = 0;
    int *arr;
    
    while (num > 0)
    {    
        num /= 10;
        len++;
    }
    
    arr = (int*)malloc(sizeof(int) * len);
    
    for (int i = 0 ; n > 0 ; i ++)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    
    for(int i = 0 ; i < len / 2 ; i++)
    {
        if(arr[i] != arr[len - 1 - i])
            return (0);
    }
    
    free(arr);
    return (1);
}

int main(void)
{
    int num;
    int i = 0;
    
    while(1)
    {
        scanf("%d",&num);
        if(num == 0)
            break;
        if(checkPalinNum(num) == 1)
            printf("yes\n");
        else
            printf("no\n");
        i++;
    }
}
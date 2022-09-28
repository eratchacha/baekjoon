#include <stdio.h>

int main(void)
{
    int num;
    int answer = 0;
    int six = 6;
    int n = 0;
    int i = 1;
    scanf("%d", &num);
    
    while (1)
    {
        if (num - 1 <= six * n)
        {
            answer += i;
            break;
        }
        else
        {
            n += i;
            i++;
        }
    }
    printf("%d", answer);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int i;
    int num;
    int div;
    int flag;
    int answer = 0;
    scanf("%d", &i);
    
    while(i > 0)
    {
        div = 2;
        flag = 1;
        scanf("%d", &num);
        while(div < num)
        {
            if(num % div == 0)
            {   
                flag = 0;
                break;
            }
            if (flag == 0)
                break;
            div++;
        }
        if (num != 1 && flag == 1)
            answer++;
        i--;
    }
    printf("%d", answer);
}
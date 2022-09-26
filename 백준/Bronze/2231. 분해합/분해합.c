#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int con = 1;
    int temp;
    int sum;
    
    while(con < num)
    {
        sum = con;
        temp = con;
        for(int i = 0 ; temp > 0 ; i++)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if(sum == num)
        {    
            printf("%d", con);
            return (0);
        }
        con++;
    }
    printf("0");
}
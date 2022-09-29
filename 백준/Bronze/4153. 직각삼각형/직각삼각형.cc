#include "stdio.h"

int main(void)
{
    int x;
    int y;
    int z;
    while (1)
    {
        scanf("%d %d %d", &x, &y, &z);
        
        if (x == 0 && y == 0 && z == 0)
            break;
        
        if (x == y || y == z || z == x)
        {
            printf("wrong\n");
            continue;
        }
        
        if (x > y)
        {
            if (z > x)
            {
                if (z * z == x * x + y * y)
                {
                    printf("right\n");
                    continue;
                }
                printf("wrong\n");
                continue;
            }
            else
            {
                if (x * x == y * y + z * z)
                {
                    printf("right\n");
                    continue;
                }
                printf("wrong\n");
                continue;
            }
        }
        else
        {
            if (y > z)
            {
                if (y * y == x * x + z * z)
                {
                    printf("right\n");
                    continue;
                }
                printf("wrong\n");
                continue;
            }
            else
            {
                if (z * z == x * x + y * y)
                {
                    printf("right\n");
                    continue;
                }
                printf("wrong\n");
                continue;
            }
        }
    }
}
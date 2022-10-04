#include "stdio.h"

int main(void)
{
    int climb;
    int fall;
    int v;
    
    scanf("%d %d %d", &climb, &fall, &v);
    
    if ((v - climb) % (climb - fall) == 0)
        printf("%d", (v - climb) / (climb - fall) + 1);
    else
        printf("%d", (v - climb) / (climb - fall) + 2);
    return 0;
}
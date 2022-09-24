#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int w;
    int h;
    int ymin;
    int xmin;
    scanf("%d %d %d %d",&x,&y, &w, &h);
    if (w - x >= x)
        xmin = x;
    else
        xmin = w - x;
    
    if (h - y >= y)
        ymin = y;
    else
        ymin = h - y;
    
    if (ymin >= xmin)
       printf("%d", xmin);
    else
        printf("%d", ymin);
}
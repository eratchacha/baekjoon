#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int tsn(int n)
{
    if (n == 0)
        return 0;
    else
    {
        if ((n % 10) == 3 || (n % 10) == 6 || (n % 10) == 9)
            return 1 + tsn(n / 10);
        else
            return tsn(n / 10);
    }
}

int solution(int order) {
    int answer = tsn(order);
    return answer;
}
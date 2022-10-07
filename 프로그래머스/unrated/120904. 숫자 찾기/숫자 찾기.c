#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = -1;
    int digit = 1000000;

    if (num == 0)
    {
        if (k == 0)
            return 1;
        else
            return answer;
    }
    
    while (num / digit == 0)
        digit /= 10;
    
    for (int i = 1 ; num > 0 ; i++)
    {
        if (num / digit == k)
            return i;
        else
        {
            num %= digit;
            if (num == 0 && digit != 1)
                return i + 1;
            digit /= 10;
        }
    }
    
    return answer;
}
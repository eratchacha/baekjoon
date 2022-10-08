#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int check(int i, int k)
{
    if (i == 0)
        return 0;
    else
    {
        if (i % 10 == k)
            return 1 + check(i / 10 , k);
        else
            return check(i / 10, k);
            
    }
}

int solution(int i, int j, int k) {
    int answer = 0;
    
    for ( ; i <= j ; i++)
        answer += check(i, k);
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int seven(int n)
{
    if (n == 0)
        return 0;
    else
    {
        if (n % 10 == 7)
            return 1 + seven(n / 10);
        else
            return seven(n / 10);
    }
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    
    for (int i = 0 ; i < array_len ; i++)
        answer += seven(array[i]); 
    
    return answer;
}
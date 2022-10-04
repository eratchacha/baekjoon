#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int max = 0;
    int maxInd = 0;
    
    for (int i = 0 ; i < numbers_len ; i++)
    {
        if (answer <= numbers[i])
        {
            answer = numbers[i];
            maxInd = i;
        }
    }
    
    for (int i = 0 ; i < numbers_len ; i++)
    {
        if (i == maxInd)
            continue;
        else
        {
            if(max <= numbers[i])
            {
                max = numbers[i];
            }
        }
    }
    
    answer *= max;
    
    return answer;
}
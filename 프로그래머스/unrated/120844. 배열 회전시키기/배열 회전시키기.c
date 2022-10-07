#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, const char* direction) {
    int* answer = malloc(sizeof(int) * numbers_len);
    
    if (*direction == 'r')
    {
        for (int i = 0 ; i < numbers_len ; i++)
        {
            if (i == 0)
                answer[i] = numbers[numbers_len - 1];
            else
                answer[i] = numbers[i - 1];
        }
    }
    else
    {
        for (int i = 0 ; i < numbers_len ; i++)
        {
            if (i == numbers_len - 1)
                answer[i] = numbers[0];
            else
                answer[i] = numbers[i + 1];
        }   
    }
    
    
    return answer;
}
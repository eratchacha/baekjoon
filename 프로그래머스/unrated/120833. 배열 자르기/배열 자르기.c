#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    int* answer = malloc(sizeof(int) * (num2 - num1 + 1));
    
    for (int i = 0 ; i < num2 - num1 + 1 ; i++)
    {
        answer[i] = numbers[num1 + i];
    }
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    char* answer;
    int len = 0;
    int temp = age;
    
    while (temp > 0)
    {
        temp /= 10;
        len++;
    }
    
    answer = malloc(sizeof(char) * (len + 1));
    
    temp = 1;
    for (int i = 0 ; i < len - 1 ; i++)
    {
        temp *= 10;
    }
    
    for (int i = 0 ; i < len ; i++)
    {
        answer[i]  = age / temp + 'a';
        age %= temp;
        temp /= 10;
    }
    answer[len] = '\0';
    return answer;
}
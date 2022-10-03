#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string) {
    char* answer;
    int len = 0;
    int i = 0;
    
    while (my_string[i] != '\0')
    {
        len++;
        i++;
    }
    
    answer = malloc(sizeof(char) * (len + 1));
    answer[i] = '\0';
    i -= 1;
    
    while (*my_string)
    {
        answer[i] = *my_string;
        my_string++;
        i--;
    }
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, const char* letter) {
    char* answer;
    int len = 0;
    int i = 0;
    
    while (my_string[i] != '\0')
    {
        if (my_string[i] != *letter)
            len++;
        i++;
    }
    
    answer = malloc(sizeof(char) * len);
    i = 0;
    
    while (*my_string != '\0')
    {
        if (*my_string == *letter)
        {
            my_string++;
            continue;
        }
        
        else
        {
            answer[i] = *my_string;
            i++;
            my_string++;
        }
    }
    
    answer[i] = '\0';
    
    return answer;
}
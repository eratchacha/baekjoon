#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cons(char c)
{
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        return 1;
    else
        return 0;
}

char* solution(const char* my_string) {
    char* answer;
    int i = 0;
    int len = 0;
    
    while (my_string[i])
    {
        if (cons(my_string[i]))
            len++;
        i++;
    }
    
    answer = malloc(sizeof(int) * (len + 1));
    i = 0;
    
    while (*my_string)
    {
        if (cons(*my_string))
        {
            answer[i] = *my_string;
            i++;
        }
        my_string++;
    }
    
    answer[i] = '\0';
    
    return answer;
}
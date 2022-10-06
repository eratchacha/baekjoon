#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string) {
    char* answer = my_string;
    for (int i = 0 ; answer[i] != '\0' ; i++)
    {
        if (answer[i] <= 'Z')
        {
            answer[i] = answer[i] + ('a' - 'A');
        }
        else if (answer[i] >= 'a')
        {
            answer[i] = answer[i] - ('a' - 'A');
        }
    }
    
    return answer;
}
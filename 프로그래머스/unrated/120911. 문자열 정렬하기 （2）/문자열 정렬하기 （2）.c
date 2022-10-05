#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string) {
    char* answer;
    int len = 0;
    char temp;
    
    while (my_string[len] != '\0')
        len++;
    
    answer = malloc(sizeof(int) * (len + 1));
    
    for (int i = 0 ; i < len ; i++)
    {
        if (my_string[i] <= 'Z')
        {
            answer[i] = my_string[i] + 'a' - 'A';    
        }
        
        else
            answer[i] = my_string[i];
    }
    
    for (int i = 0 ; i < len - 1 ; i++)
    {
        for (int j = i + 1 ; j < len ; j++)
        {
            if (answer[i] > answer[j])
            {
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    
    answer[len] = '\0';
    
    return answer;
}
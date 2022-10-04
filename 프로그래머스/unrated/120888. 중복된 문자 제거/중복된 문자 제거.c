#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string) {
    char* answer;
    int i = 0;
    int len = 0;
    int flag;
    
    while(my_string[i])
    {
        len++;
        
        for (int j = 0 ; j < i ; j++)
        {
            if (my_string[j] == my_string[i])
            {
                len--;
                break;
            }
        }
        
        i++;
    }
    
    answer = malloc(sizeof(char) * (len + 1));
    char *ptr = answer;
    i = 0;
    
    while (my_string[i])
    {
        flag = 0;
        
        for (int j = 0 ; j < i ; j++)
        {
            if (my_string[j] == my_string[i])
            {
                flag = 1;
                break;
            } 
        }
        
        if (flag == 0)
        {
            *ptr = my_string[i];
            ptr++;
        }
        
        i++;
    }
    
    *ptr = '\0';
    
    return answer;
}
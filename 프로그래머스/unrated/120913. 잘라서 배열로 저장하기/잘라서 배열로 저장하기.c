#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* my_str, int n) {
    char** answer;
    char *arr;
    int len = 0;
    int ind = 0;
    
    while (my_str[len] != '\0')
        len++;
    
    if (len % n == 0)
        len = len / n;
    else
        len = len / n + 1;
    
    answer = malloc(sizeof(char *) * len);
    
    for (int i = 0 ; i < len ; i++)
    {
        arr = malloc(sizeof(char) * (n + 1));
        
        for (int j = 0 ; j < n ; j++)
        {
            if (my_str[ind + j] == '\0')
            {
                arr[j] = '\0';
                break;
            }
            else
                arr[j] = my_str[ind + j];
        }
        
        arr[n] = '\0';
        
        answer[i] = arr;
        ind += n;
    }
    
    return answer;
}
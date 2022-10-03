#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* strlist[], size_t strlist_len) {
    int* answer = malloc(sizeof(int) * strlist_len);
    int j;
    int len;
    
    for (int i = 0 ; i < strlist_len ; i++)
    {
        j = 0;
        len = 0;
        
        while (strlist[i][j])
        {
            len++;
            j++;
        }
        
        answer[i] = len;
    }
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* cipher, int code) {
    char* answer;
    int len = 0;
    int i = 0;
    
    while (cipher[len] != '\0')
        len++;
    
    answer = malloc(sizeof(char) * (len / code + 1));
    
    for (int ind = 0 ; ind < len ; ind++)
    {
        if ((ind + 1) % code == 0)
        {
            answer[i] = cipher[ind];
            i++;
        }
    }
    
    answer[i] = '\0';
    
    return answer;
}
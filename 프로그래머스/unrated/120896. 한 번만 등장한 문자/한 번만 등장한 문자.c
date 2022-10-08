#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* s) {
    char* answer = malloc(sizeof(char) * 27);
    char alphabet[26];
    memset(alphabet, 0, sizeof(char) * 26);
    int ind = 0;
    
    while (*s)
    {
        alphabet[*s - 'a']++;
        s++;
    }
    
    
    for (int i = 0 ; i < 26 ; i++)
    {
        if (alphabet[i] == 1)
        {
            answer[ind] = i + 'a';
            ind++;
        }
    }
    
    answer[ind] = '\0';
    
    return answer;
}
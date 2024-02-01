#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int abs(int n)
{
    if(n < 0)
        n *= -1;
    return n;
}

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    char* answer = (char*)malloc(sizeof(char) * 5);
    int score[4] = {0, 0, 0, 0};
    int part;
    char pos[4] = {'R', 'C', 'J', 'A'};
    char neg[4] = {'T', 'F', 'M', 'N'};
    
    for(int i = 0 ; i < survey_len ; i++)
    {
        if (*survey[i] == 'R' || *survey[i] =='T')
            part = 0;
        else if(*survey[i] == 'C' || *survey[i] =='F')
            part = 1;
        else if(*survey[i] == 'J' || *survey[i] =='M')
            part = 2;
        else
            part = 3;
        
        if(*survey[i] == pos[part])
            score[part] -= (choices[i] - 4);
        else
            score[part] += (choices[i] - 4);
    }
    
    for(int i = 0 ; i < 4 ; i++)
    {
        if (score[i] >= 0)
            *(answer + i) = pos[i];
        else
            *(answer + i) = neg[i];
    }
    *(answer + 4) = '\0';
    return answer;
}
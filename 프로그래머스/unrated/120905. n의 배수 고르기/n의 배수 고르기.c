#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int n, int numlist[], size_t numlist_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer;
    int len = 0;
    int ind = 0;
    
    for (int i = 0 ; i  < numlist_len ; i++)
    {
        if (numlist[i] % n == 0)
            len++;
    }
    
    answer = malloc(sizeof(int) * len);
    
    for (int i = 0; i < numlist_len ; i++)
    {
        if (numlist[i] % n == 0)
        {
            answer[ind] = numlist[i];
            ind++;
        }
    }
    
    return answer;
}
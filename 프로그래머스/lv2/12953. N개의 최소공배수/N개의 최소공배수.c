#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int lcm(int n1, int n2)
{
    int bigger;
    int smaller;
    int i = 1;
    int j = 1;
    
    if (n1 == n2)
        return n1;
    else if(n1 > n2)
    {
        bigger = n1;
        smaller = n2;
    }
    else
    {
        bigger = n2;
        smaller = n1;
    }
    
    while(1)
    {
        if (smaller * j == bigger * i)
            return smaller * j;
        else if (smaller * j > bigger * i)
            i++;
        else
            j++;
    }
    
    
}

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len) {
    int answer = arr[0];
    
    if (arr_len == 1)
        return arr[0];
    
    for (int i = 0 ; i < arr_len - 1 ; i++)
    {
        answer = lcm(answer,arr[i+1]);
    }
    
    return answer;
}
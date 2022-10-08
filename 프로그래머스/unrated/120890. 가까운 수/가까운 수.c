#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

int solution(int array[], size_t array_len, int n) {
    int answer = array[0];
    int diff = array[0] - n;
    
    for (int i = 1 ; i < array_len ; i++)
    {
        if (abs(array[i] - n) < abs(diff))
        {
            diff = array[i] - n;
            answer = array[i];
        }
        else if (abs(array[i] - n) == abs(diff))
        {
            if (array[i] - n < diff)
                answer = array[i];
        }
            
    }
    
    return answer;
}
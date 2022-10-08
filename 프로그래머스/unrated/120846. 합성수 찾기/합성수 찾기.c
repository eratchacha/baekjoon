#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 2 ; j < i ; j++)
        {
            if (i % j == 0)
            {
                answer++;
                break;
            }
        }
    }
    
    
    return answer;
}
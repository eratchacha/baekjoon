#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int a = 0;
    int  b = 1;
    int i = 0;
    
    if(n == 2)
        answer = 1;
    else
    {
        while (i < n - 1)
        {
            answer = a + b;
            a = b % 1234567;
            b = answer % 1234567;
            i++;
        }
    }
    
    return answer % 1234567;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    int i = 2;
    
    while (1)
    {
        answer *= i;    
        
        if (answer == n)
            return i;
        else if (answer > n)
            return i - 1;
        
        i++;
    }
}
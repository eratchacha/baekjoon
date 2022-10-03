#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = malloc(sizeof(int) * (n / 2 + n % 2));
    int i = 0;
    for (int odd = 1 ; odd <= n ; odd++)
    {
        if (odd % 2 == 1)
        {
            answer[i] = odd; 
            i++;
        }
    }
    
    return answer;
}
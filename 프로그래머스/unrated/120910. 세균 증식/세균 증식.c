#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int answer = n;
    int x = 2;
    
    for (int i = 0 ; i < t ; i++)
        answer *= x;    
    
    return answer;
}
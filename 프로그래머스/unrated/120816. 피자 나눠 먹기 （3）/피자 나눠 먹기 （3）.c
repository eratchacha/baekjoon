#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 1;
    
    while (n > slice * answer)
        answer++;

    return answer;
}
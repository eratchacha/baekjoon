#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 2;
    int max;
    
    if (sides[0] > sides[1] && sides[0] > sides[2])
        max = 0;
    else if (sides[1] > sides[0] && sides[1] > sides[2])
        max = 1;
    else
        max = 2;
    
    if (sides[max] < sides[0] + sides[1] + sides[2] - sides[max])
        answer = 1;
    return answer;
}
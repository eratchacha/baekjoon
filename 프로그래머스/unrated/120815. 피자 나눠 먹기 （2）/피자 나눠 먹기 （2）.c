#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    while (1)
    {
        if ((6 * answer) % n == 0)
            break;
        else
            answer++;
    }

    return answer;
}
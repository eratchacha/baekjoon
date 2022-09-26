#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    for (int i = 0 ; i < count ; i++)
        answer += price * (i + 1);
    if(answer <= money)
        return 0;
    else
        return (answer - money);
}
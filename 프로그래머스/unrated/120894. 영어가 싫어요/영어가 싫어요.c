#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    long long answer = 0;
    
    while (*numbers)
    {
        answer *= 10;
        
        if (*numbers == 'z')
            numbers += 4;
        
        else if (*numbers == 'o')
        {
            answer += 1;
            numbers += 3;
        }
        else if (*numbers == 't') // two, three
        {
            if (*(numbers + 1) == 'w')
            {
                answer += 2;
                numbers += 3;
            }
            else
            {
                answer += 3;
                numbers += 5;
            }
        }
        else if (*numbers == 'f') // four, five
        {
            if (*(numbers + 1) == 'o')
                answer += 4;
            else
                answer += 5;
            
            numbers += 4;
        }
        else if (*numbers == 's') // six, seven
        {
            if (*(numbers + 1) == 'i')
            {
                answer += 6;
                numbers += 3;
            }
            else
            {
                answer += 7;
                numbers += 5;
            }
        }
        else if (*numbers == 'e')
        {
            answer += 8;
            numbers += 5;
        }
        else {
            answer += 9;
            numbers += 4;
        }
    }
    return answer;
}
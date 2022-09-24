#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int i = 0;
    int num;
    
    while(*(s + i) != '\0')
    {
        if (*(s + i) >= '0' && *(s + i) <= '9')
            num = *(s + i) - '0';
        else
        {
            if (*(s + i) == 'z')
            {
                num = 0;
                i += 3;
            }
            else if (*(s + i) == 'o')
            {
                num = 1;
                i += 2;
            }
            else if (*(s + i) == 't')
            {
                if (*(s + i + 1) == 'h')
                {
                    num = 3;
                    i += 4;
                }
                else
                {
                    num = 2;
                    i += 2;
                }
            }
            else if (*(s + i) == 'f')
            {
                if (*(s + i + 1) == 'i')
                {
                    num = 5;
                    i += 3;
                }
                else
                {
                    num = 4;
                    i += 3;
                }
            }
            else if (*(s + i) == 's')
            {
                if (*(s + i + 1) == 'i')
                {
                    num = 6;
                    i += 2;
                }
                else
                {
                    num = 7;
                    i += 4;
                }
            }
            else if (*(s + i) == 'e')
            {
                num = 8;
                i += 4;
            }
            else if (*(s + i) == 'n')
            {
                num = 9;
                i += 3;
            }
        }
        if (answer != 0)
                answer *= 10;
            answer += num;
        i++;
    }
    
    return answer;
}
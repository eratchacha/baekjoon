#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 2;
    int len1 = 0;
    int len2 = 0;
    
    while (str1[len1] != '\0')
        len1++;
    
    while (str2[len2] != '\0')
        len2++;
    
    for (int i = 0 ; i <= len1 - len2 ; i++)
    {
        if (str1[i] == str2[0])
        {
            answer = 1;
            
            for (int j = 1 ; j < len2 ; j++)
            {
                if (str1[i + j] != str2[j])
                {
                    answer = 2;
                    break;
                }
            }
            
            if (answer == 1)
                return answer;
        }
    }
    
    return answer;
}
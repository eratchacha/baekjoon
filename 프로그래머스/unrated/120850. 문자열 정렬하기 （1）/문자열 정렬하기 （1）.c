#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer;
    int len = 0;
    int i = 0;
    int j = 0;
    int temp;
    
    while (my_string[i] != '\0')
    {
        if (my_string[i] >= '0' && my_string[i] <= '9')
            len++;
        i++;
    }
    
    answer = malloc(sizeof(int) * len);
    
    i = 0;
    while (my_string[i] != '\0')
    {
        if (my_string[i] >= '0' && my_string[i] <= '9')
        {
            answer[j] = my_string[i] - '0';
            j++;
        }
        i++;
    }
    
    for (int m = 0 ; m < len - 1 ; m++)
    {
        for (int n = m + 1 ; n < len ; n++)
        {
            if (answer[m] > answer[n])
            {
                temp = answer[m];
                answer[m] = answer[n];
                answer[n] = temp;
            }
        }
    }
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int power(int n)
{
    int result = 1;
    
    while (n > 0)
    {
        result *= 2;
        n--;
    }
    
    return result;
}

int* solution(const char* s) {
    int *answer = (int*)malloc(sizeof(int) * 2);
    char *str = s;
    int n = 0;
    int zero = 0;
    int len = 0;
    int i = 0;
    int j = 0;
    
    while (str[1] != '\0')
    {
        while (str[i] != '\0')
        {
            if(str[i] == '0')
                zero++;
            else
                len++;
            i++;
        }
        
        i = 0;
        
        while (len >= power(i))
            i++;
        
        str = malloc(sizeof(char) * (i + 1));
        str[i] = '\0';
        i -= 1;
        while (i >= 0)
        {
            str[j] = len / power(i) + '0';
            len %= power(i);
            i--;
            j++;
        }
        i = 0;
        j = 0;
        len = 0;
        n++;
    }
    answer[0] = n;
    answer[1] = zero;
    return answer;
}
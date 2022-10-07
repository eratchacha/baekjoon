#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int answer = 0;
    int alphabet[26];
    memset(alphabet, 0, sizeof(int) * 26);
    
    for (int i = 0 ; before[i] != '\0' ; i++)
        alphabet[before[i] - 'a']++;
    
    for (int i = 0 ; after[i] != '\0' ; i++)
        alphabet[after[i] - 'a']--;
    
    for (int i = 0 ; i < 26 ; i++)
    {
        if (alphabet[i] != 0)
            return 0;
    }
    
    return 1;
}
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int i = 0;
    int answer = 0;
    int same, different;
    char x;
    
    while (i < s.length()) {
        if (i == s.length() - 1) {
            answer++;
            break;
        }
        
        x = s[i];
        same = 0;
        different = 0;
        
        for(int j = i ; j < s.length() ; j++) {
            if (s[j] == x)
                same++;
            else
                different++;
            
            if (same == different) {
                answer++;
                i = j + 1;
                break;
            }
            else {
                if (j == s.length() - 1)
                    answer++;
                    i = j + 1;
            }
        }
    }
    
    return answer;
}
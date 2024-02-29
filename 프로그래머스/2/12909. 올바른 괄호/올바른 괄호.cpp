#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int bracket = 0;
    
    for (int i = 0 ; i < s.size() ; i ++) {
        if (s[i] == '(') {
            bracket++;
        }
        else {
            bracket--;
        }
        
        if (bracket < 0)
            return false;
    }
    
    if (bracket > 0)
        return false;
    
    return answer;
}
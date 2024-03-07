#include <iostream>
#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = 0;
    
    stack<char>stringStack;
    
    for (int i = 0 ; i < s.length() ; i++) {
        if (stringStack.size() > 0 && stringStack.top() == s[i]) {
            stringStack.pop();
        }
        else {
            stringStack.push(s[i]);
        }
    }
    
    if (stringStack.empty()) {
        answer = 1;
    }
    

    return answer;
}
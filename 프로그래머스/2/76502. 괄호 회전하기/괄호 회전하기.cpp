#include <stack>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool wrong;
    string rotate = s;
    
    for (int i = 0 ; i < s.size() ; i++) {
        if (i > 0) 
            rotate = s.substr(i) + s.substr(0, i);
        
        stack<char> brackets;
        wrong = false;
        
        for (int j = 0 ; j < rotate.size() ; j++) {
            switch (rotate[j]) {
                case ']':
                    if (brackets.size() > 0 && brackets.top() == '[')
                        brackets.pop();
                    else
                        wrong = true;
                    
                    break;
                    
                case '}':
                    if (brackets.size() > 0 && brackets.top() == '{')
                            brackets.pop();
                    else
                        wrong = true;
                    
                    break;
                    
                case ')':
                    if (brackets.size() > 0 && brackets.top() == '(')
                        brackets.pop();
                    else
                        wrong = true;
                        
                    break;
                    
                default:
                    brackets.push(rotate[j]);
                    break;
        }
        
            if (wrong)
                break;
            
        }
        
        if (brackets.empty() && wrong == false)
            answer++;
        
    }
    
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool large = true;
    
    for (int i = 0 ; i < s.size() ; i++) {
        if(large) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                answer += (s[i] + 'A' - 'a');
                large = false;
            }
            else if(s[i] == ' ') {
                answer += s[i];
            }
            else {
                answer += s[i];
                large = false;
            }
        }
        else {
            if (s[i] == ' ') {
                large = true;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z') {
                answer += (s[i] + 'a' - 'A');
                continue;
            }
            
            answer += s[i];
        }
    } 
    
    
    return answer;
}
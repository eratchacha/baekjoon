#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string sub;
    
    for (int i = 0 ; i <= t.length() - p.length() ; i++) {
        sub = t.substr(i, p.length());
        
        if (stol(p) >= stol(sub))
            answer++;
    }
    
    return answer;
}
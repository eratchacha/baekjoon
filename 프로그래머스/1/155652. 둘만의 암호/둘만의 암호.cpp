#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    set<char> skipset;
    char changed;
    
    for (int i = 0 ; i < skip.size() ; i++) {
        skipset.insert(skip[i]);
    }
        
    for (int i = 0 ; i < s.size() ; i++) {
        changed = s[i];
        
        for (int j = 0 ; j < index ; j++) {
            changed = changed + 1;
            
            if (changed - 'a' > 25)
                changed -= 26;
        
            while(skipset.find(changed) != skipset.end()) {
                    changed = changed + 1;
            
                    if (changed - 'a' > 25)
                        changed -= 26;
            }
        }
        
        answer += changed;
    }
    
    
    return answer;
}
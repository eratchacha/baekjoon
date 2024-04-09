#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int before;
    bool flag = false;
    string str;
    string word[4] = {"aya", "ye", "woo", "ma"};
    
    for (int i = 0 ; i < babbling.size() ; i++) {
        str = babbling[i];
        before = -1;
        
        while(true) {
            for (int j = 0 ; j < 4 ; j++) {
                if (str.substr(0, word[j].size()) == word[j] && j != before) {
                    before = j;
                    str = str.substr(word[j].size());
                    flag = true;
                    break;
                }
            }
            
            if (flag == false)
                break;
            else
                flag = false;
        }
        
        if (str == "") {
            answer++;
        }
    }
    
    return answer;
}
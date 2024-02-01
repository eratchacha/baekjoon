#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int alphabet[26];
    
    for (int i = 0 ; i < 26 ; i++) {
        alphabet[i] = -1;
    }
    
    for(int i = 0 ; i < s.length() ; i++) {
        if(alphabet[s[i] - 'a'] == -1) {
            alphabet[s[i] - 'a'] = i;
            answer.push_back(-1);
        }
        else {
            answer.push_back(i - alphabet[s[i] - 'a']);
            alphabet[s[i] - 'a'] = i;
        }
    } 
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int result;
    int alphabets[26];
    fill_n(alphabets, 26, 101);
    
    for (int i = 0 ; i < 26 ; i++) {
        for (int j = 0 ; j < keymap.size() ; j++) {
            for (int k = 0 ; k < keymap[j].size() ; k++) {
                if(keymap[j][k] == 'A' + i && k + 1 < alphabets[i]) {
                    alphabets[i] = k + 1;
                }
            }
        }
    }
    
    for (int i = 0 ; i < targets.size() ; i++) {
        result = 0;
        
        for (int j = 0 ; j < targets[i].size() ; j++) {
            if (alphabets[targets[i][j] - 'A'] < 101) {
            result += alphabets[targets[i][j] - 'A']; 
            }
            else {
                result = -1;
                break;
            }
        }
        
        answer.push_back(result);
    }


    return answer;
}
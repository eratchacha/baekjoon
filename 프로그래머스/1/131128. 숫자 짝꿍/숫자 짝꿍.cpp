#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int xNumbers[10] = {0,0,0,0,0,0,0,0,0,0};
    int yNumbers[10] = {0,0,0,0,0,0,0,0,0,0,};
    
    for (int i = 0 ; i < X.size() ; i++) {
        xNumbers[X[i] - '0']++;
    }
    
    for (int i = 0 ; i < Y.size() ; i++) {
        yNumbers[Y[i] - '0']++;
    }
    
    for (int i = 9 ; i >= 0 ; i--) {
        if (xNumbers[i] > 0 && yNumbers[i] > 0) {
            if (xNumbers[i] > yNumbers[i]) {
                for (int j = 0 ; j < yNumbers[i] ; j++) {
                    answer += '0' + i;
                }
            }
            else {
                for (int j = 0 ; j < xNumbers[i] ; j++) {
                    answer += '0' + i;
                }
            }
        }
    }
    
    if (answer == "")
        answer = "-1";
    
    if (answer[0] == '0')
        answer = "0";
    
    return answer;
}
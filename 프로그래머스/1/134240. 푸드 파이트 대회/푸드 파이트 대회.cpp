#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string reverse = "";
    
    for(int i = 1 ; i < food.size() ; i ++) {
        if (food[i] / 2 == 0)
            continue;
        else {
            for (int j = 0 ; j < food[i] / 2 ; j++) {
               answer+= to_string(i);
            }
        }
    }
    
    
    for(int i = answer.length() - 1 ; i >= 0 ; i--) {
        reverse += answer[i];
    }
    
    answer = answer + "0" + reverse;
    
    return answer;
}
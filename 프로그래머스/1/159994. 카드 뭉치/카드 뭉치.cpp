#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int index1 = 0;
    int index2 = 0;
    
    for (int i = 0 ; i < goal.size() ; i++) {
        if (goal[i] == cards1[index1]) {
            index1++;
        }
        else if (goal[i] == cards2[index2]) {
            index2++;
        }
        else {
            answer = "No";
        }
    }
    
    return answer;
}
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.rbegin(), score.rend());
    
    for (int i = 0 ; i < score.size() - m + 1; i = i + m) {
        if (i + m - 1 < score.size()) {
        answer += score[i + m - 1] * m;
        }
        else
            break;
    }
    
    return answer;
}
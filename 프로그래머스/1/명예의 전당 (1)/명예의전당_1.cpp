#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honor;
    
    for (int i = 0 ; i < score.size() ; i++) {
        if (i < k) {
            honor.push_back(score[i]);
            sort(honor.begin(), honor.end());
            answer.push_back(honor[0]);
        }
        else {
            if (score[i] > honor[0]) {
                honor[0] = score[i];
                sort(honor.begin(), honor.end());
                answer.push_back(honor[0]);

            }
            else {
                answer.push_back(honor[0]);
            }
        }
    }
    
    return answer;
}

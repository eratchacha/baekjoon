#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int total = brown + yellow;

    for (int i = total - 1 ; i > 1 ; i--) {
        if (total % i == 0) {
            if (2 * total / i + 2 * i == brown + 4) {
                answer.push_back(i);
                answer.push_back(total / i);
                break;
            }
        }
    }
    
    return answer;
}
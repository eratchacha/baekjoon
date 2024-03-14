#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    
    sort(citations.rbegin(), citations.rend());
    
    for (answer = citations.size() ; answer > 0 ; answer--) {
        for (int i = 0 ; i < citations.size() ; i++) {
            if (citations[i] < answer) {
                if (answer <= i)
                    return answer;
                else
                    break;
            }
        }
        
        if (citations.back() > answer)
            return answer;
    }

    return answer;
}

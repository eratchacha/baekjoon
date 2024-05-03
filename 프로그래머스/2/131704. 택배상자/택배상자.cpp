#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    int init = 1;
    stack<int> sub;
    
    for (int i = 0 ; i < order.size() ; i++) {
        if (sub.empty()) {
            if (init > order[i])
                break;
        }
        else {
            if (init > order[i]) {
                if (sub.top() == order[i]) {
                    sub.pop();
                    answer++;
                    continue;
                }
                else
                    break;
            }
        }
        
        while(1) {
            if (init != order[i]) {
                sub.push(init);
                init++;
            }
            else {
                init++;
                break;
            }
        }
        
        answer++;
    }
    
    return answer;
}
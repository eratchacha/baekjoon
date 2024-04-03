#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int>hamburger;
    
    for (int i = 0 ; i < ingredient.size() ; i++) {
        hamburger.push_back(ingredient[i]);
        if (hamburger.back() == 1 && hamburger.size() >= 4) {
            if (hamburger[hamburger.size() - 2] == 3 && hamburger[hamburger.size() - 3] == 2 && hamburger[hamburger.size() - 4] == 1) {
                for (int i = 0 ; i < 4 ; i++)
                    hamburger.pop_back();
                answer++;
            }
        }
    }
    
    
    return answer;
}
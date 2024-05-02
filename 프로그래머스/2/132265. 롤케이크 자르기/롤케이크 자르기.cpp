#include <string>
#include <set>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    int end = topping.size() - 1;
    set<int> type;
    set<int> rtype;
    vector<int> num;
    vector<int> rnum(end);
    
    for (int i = 0 ; i < end ; i++) {
        type.insert(topping[i]);
        num.push_back(type.size());
    }
    
    for (int j = end ; j > 0 ; j--) {
        rtype.insert(topping[j]);
        rnum[j - 1] = rtype.size();
    }

    for (int i = 0 ; i < end ; i++) {
        if (num[i] == rnum[i]) {
            answer++;
        }
    }
    
    
    
    return answer;
}
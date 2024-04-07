#include <map>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> m;
    
    
    for (int i = 0 ; i < discount.size() - 10 + 1 ; i++) {
        for (int j = 0 ; j < want.size() ; j++)
            m.insert({want[j], number[j]});
        
        for (int j = i ; j < i + 10 ; j++) {
            if (m.find(discount[j]) == m.end() || m[discount[j]] == 0)
                break;
            
            else
                m[discount[j]]--;
        }
        
        for (auto iter = m.begin() ; iter !=  m.end() ; iter++) {
            if (iter->second > 0) {
                m.clear();
                break;
            }
        }
        
        if (m.size() != 0) {
            answer++;
            m.clear();
        }
    }
     
    return answer;
}
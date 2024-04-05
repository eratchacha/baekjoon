#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int max = 0;
    
    for (int i = 0 ; i < section.size() ; i++) {
        max = section[i] + m - 1;
        
        for (int j = i + 1 ; j < section.size() ; j++) {
            if (max >= section[j])
                i++;
        }
        
        answer++;
    }
    
    return answer;
}
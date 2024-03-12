#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> works;
    int before = 0;
    
    for (int i = 0 ; i < progresses.size() ; i++) {
        works.push_back((100 - progresses[i]) / speeds[i]);
        
        if ((100 - progresses[i]) % speeds[i] != 0)
            works[i]++;
    }

    answer.push_back(1);
    before = works[0];
    
    for (int i = 1 ; i < works.size() ; i++) {
        if (before >= works[i])
            answer.back()++;
        
        else {
            answer.push_back(1);
            before = works[i];
        }
    }    
    
    return answer;
}
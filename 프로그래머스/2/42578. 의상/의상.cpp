#include <map>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int>cMap;

    
    for (int i = 0 ; i < clothes.size() ; i++) {
        if(cMap.find(clothes[i][1]) == cMap.end())
            cMap.insert(pair<string, int>(clothes[i][1], 1));
        else
            cMap[clothes[i][1]]++;
        
    }
    
    for(auto iter = cMap.begin() ; iter != cMap.end() ; ++iter) {
        answer *= iter->second + 1;
    }
    
    return answer - 1;
}
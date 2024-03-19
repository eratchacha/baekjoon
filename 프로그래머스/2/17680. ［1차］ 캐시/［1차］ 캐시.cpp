#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    bool flag;
    
    vector<string>cache;
    
    for (int i = 0 ; i < cities.size() ; i++) {
        for (int j = 0 ; j < cities[i].size() ; j++) {
            if (cities[i][j] >= 'A' && cities[i][j] <= 'Z')
            {
                cities[i][j] += ('a' - 'A');
            }
        }
    }
    
    answer += 5;
    
    if (cache.size() < cacheSize)
        cache.push_back(cities[0]);
    
    for (int i = 1 ; i < cities.size() ; i++) {
        answer += 5;
        flag = false;
        
        for (int j = 0 ; j < cache.size(); j++) {
            if(cities[i] == cache[j]) {
                answer -= 5;
                answer += 1;
                flag = true;        
                cache.erase(cache.begin() + j);
                cache.push_back(cities[i]);
                break;
            }
        }
        
        if (flag == false) {
            if (cache.size() == cacheSize && !cache.empty())
                cache.erase(cache.begin());
            
            if (cache.size() < cacheSize)
                cache.push_back(cities[i]);
        }
        
    }
    
    return answer;
}
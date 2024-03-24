#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int boat;
    int index = 0;
    sort(people.begin() , people.end());
    
    while (people.size() > index) {
        answer++;
        boat = people.back();
        people.pop_back();
        
        if (people[index] + boat > limit)
            continue;
        else if (people.size() > 0)
            index++;
    }
    
    return answer;
}
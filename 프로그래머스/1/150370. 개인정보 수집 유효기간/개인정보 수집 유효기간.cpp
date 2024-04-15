#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char, int> term_map;
    int temp;
    int today_date = stoi(today.substr(0,4)) * 28 * 12 + stoi(today.substr(5,7)) * 28 + stoi(today.substr(8));
    int day;
   
    for (int i = 0 ; i < terms.size() ; i++) {
        temp = stoi(terms[i].substr(2));
        term_map[terms[i][0]] = temp;
    }
    
    
    for (int i = 0 ; i < privacies.size() ; i++) {
        day = stoi(privacies[i].substr(0,4)) * 28 * 12 + stoi(privacies[i].substr(5,7)) * 28 + stoi(privacies[i].substr(8));
        day += term_map[privacies[i][11]] * 28;

        if (day <= today_date)
            answer.push_back(i + 1);
    }
    
    return answer;
}
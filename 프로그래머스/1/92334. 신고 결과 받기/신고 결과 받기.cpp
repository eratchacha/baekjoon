#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<int> num;
    map<string, int> dict;
    
    int n = id_list.size();
    int people[n][n];
    string reporter;
    string reported;
    
    
    for (int i = 0 ; i < n ; i++) {
        dict.insert({id_list[i], i});
        num.push_back(0);
        answer.push_back(0);
        
        for (int j = 0 ; j < n ; j++) {
            if (i == j)
                people[i][j] = -1;
            else
                people[i][j] = 0;
        }
    }
    
    for (int i = 0 ; i < report.size() ; i++) {
        for (int j = 0 ; j < report[i].size() ; j++) {
            if (report[i][j] == ' ') {
                reporter = report[i].substr(0,j);
                reported = report[i].substr(j + 1);
                people[dict[reporter]][dict[reported]]++;
            }
        }
    }
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (people[j][i] > 0)
                num[i]++;
        }
        
        if (num[i] >= k) {
            for (int j = 0 ; j < n ; j++) {
                if (people[j][i] > 0)
                    answer[j]++;
            }
        }
    }
    
    return answer;
}
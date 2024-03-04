#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<int> people;
    char last_word;
    int wrong = 0;
    int turn = 0;
    
    for (int i = 0 ; i < n ; i++) {
        people.push_back(0);
    }
    
    people[0]++;
    last_word = words[0].back();
    
    for (int i = 1 ; i < words.size() ; i++) {
        people[i % n]++;
        
        if (last_word != words[i][0]) {
            wrong = i % n + 1;
            turn = people[i % n];
            break;
        }
        else {
            for (int j = 0 ; j < i ; j++) {
                if (words[j] == words[i]) {
                    wrong = i % n + 1;
                    turn = people[i % n];
                    
                    answer.push_back(wrong);
                    answer.push_back(turn);
                    return answer;
                }
            }
            
            last_word = words[i].back();
        }
    }
    
    answer.push_back(wrong);
    answer.push_back(turn);
    
    return answer;
}
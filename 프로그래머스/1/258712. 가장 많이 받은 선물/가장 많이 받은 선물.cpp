#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    int n = friends.size();
    int score[n][n];
    int score1;
    int score2;
    string giver;
    string receiver;
    map<string,int> name;
    vector<int>gift_num;
    
    for (int i = 0 ; i < friends.size() ; i++) {
        name.insert({friends[i], i});
    }
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (i == j)
                score[i][j] = -1;
            else
                score[i][j] = 0;
        }
    }
    
    for (int i = 0 ; i < gifts.size() ; i++) {
        for(int j = 0 ; j < gifts[i].size() ; j++) {
            if (gifts[i][j] == ' ')
            {
                giver = gifts[i].substr(0, j);
                receiver = gifts[i].substr(j+1);
                break;
            }
        }
        
        score[name[giver]][name[receiver]]++;
    }
    
    for (int i = 0 ; i < n ; i++)
        gift_num.push_back(0);
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            if (i == j)
                continue;
            
            if (score[i][j] > score[j][i])
                gift_num[i]++;
            else if (score[i][j] < score[j][i])
                gift_num[j]++;
            else {
                score1 = 0;
                score2 = 0;
                
                for (int k = 0 ; k < n ; k++) {
                    if (score[i][k] > 0)
                        score1 += score[i][k];
                }
                
                for (int k = 0 ; k < n ; k++) {
                    if (score[k][i] > 0)
                        score1 -= score[k][i];
                }
                
                for (int k = 0 ; k < n ; k++) {
                    if (score[j][k] > 0)
                        score2 += score[j][k];
                }
                
                for (int k = 0 ; k < n ; k++) {
                    if (score[k][j] > 0)
                        score2 -= score[k][j];
                }
                
                if (score1 > score2)
                    gift_num[i]++;
                else if (score1 < score2)
                    gift_num[j]++;
            }
        }
    }
    
    for (int i = 0 ; i < n ; i++)
        if (answer < gift_num[i])
            answer = gift_num[i];
    
    return answer;
}
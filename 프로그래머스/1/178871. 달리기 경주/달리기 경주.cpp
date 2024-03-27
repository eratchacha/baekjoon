#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> rank;
    int chase = 0;
    string temp = "";
    
    for (int i = 0 ; i < players.size() ; i++) {
        rank.insert({players[i], i});
    }
    
    for (int i = 0 ; i < callings.size() ; i++) {
        chase = rank[callings[i]];
        
        rank[players[chase]] -= 1;
        rank[players[chase - 1]] += 1;
        
        temp = players[chase];
        players[chase] = players[chase - 1];
        players[chase - 1] = temp;
    }
    
    return players;
}
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    answer.push_back(wallpaper.size());
    answer.push_back(wallpaper[0].size());
    answer.push_back(0);
    answer.push_back(0);
    
    for (int i = 0 ; i < wallpaper.size() ; i++) {
        for (int j = 0 ; j  < wallpaper[i].size() ; j++) {
            if (wallpaper[i][j] == '#') {
                if (answer[0] >= i)
                    answer[0] = i;
                
                if (answer[1] >= j)
                    answer[1] = j;
                
                if (answer[2] <= i)
                    answer[2] = i + 1;
                
                if (answer[3] <= j)
                    answer[3] = j + 1;
            }
            
            cout << "[" << answer[0] << "," << answer[1] << "," << answer[2] << "," <<  answer[3] << "]" << endl;
        }
    }
    
    
    return answer;
}
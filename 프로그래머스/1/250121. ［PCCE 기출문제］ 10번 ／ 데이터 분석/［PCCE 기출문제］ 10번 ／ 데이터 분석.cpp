#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    vector<int> temp;
    int index = 0;
    
    switch (ext[0]) {
        case 'c':
            index = 0;
            break;
        
        case 'd':
            index = 1;
            break;
        
        case 'm':
            index = 2;
            break;
        
        case 'r':
            index = 3;
            break;
        
        default:
            break;
    }
    
    for (int i = 0 ; i < data.size() ; i++) {
        if (data[i][index] < val_ext) {
            answer.push_back(data[i]);
        }                
    }
    
    
    switch (sort_by[0]) {
        case 'c':
            index = 0;
            break;
        
        case 'd':
            index = 1;
            break;
        
        case 'm':
            index = 2;
            break;
        
        case 'r':
            index = 3;
            break;
        
        default:
            break;
    }
    
    for (int i = 0 ; i < answer.size() - 1 ; i++) {
        for (int j = i + 1 ; j < answer.size() ; j++) {
            if (answer[i][index] > answer[j][index]) {
                temp = answer[i];
                answer[i]= answer[j];
                answer[j] = temp;
            }
        }
    }
    
    
    return answer;
}
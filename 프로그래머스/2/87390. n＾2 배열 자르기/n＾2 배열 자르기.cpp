#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    long long column;
    long long row;
    
    for (long long i = left ; i < right + 1 ; i++) {
        column = i % n;
        row = (i - column) / n;
        
        if (column > row)
            answer.push_back(column + 1);
        else
            answer.push_back(row + 1);
    }
    
    return answer;
}
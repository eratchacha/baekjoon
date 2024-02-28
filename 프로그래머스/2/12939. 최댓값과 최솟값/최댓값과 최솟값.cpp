#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp = "";
    int num = 0;
    vector<int> numbers;
    
    for (int i = 0 ; i < s.size() ; i++) {
        if (s[i] == ' ') {
            if (temp[0] == '-') {
                temp = temp.substr(1);
                num = -1 * stoi(temp);
                numbers.push_back(num);
            }
            else {
            num = stoi(temp);
            numbers.push_back(num);
            }
            num = 0;
            temp = "";
        }
        else {
            temp += s[i];
            if (i == s.size() - 1) {
                if (temp[0] == '-') {
                temp = temp.substr(1);
                num = -1 * stoi(temp);
                numbers.push_back(num);
            }
            else {
            num = stoi(temp);
            numbers.push_back(num);
            }
            }
        }
    }
    
    sort(numbers.begin(), numbers.end(), greater<int>());
    answer = to_string(numbers[numbers.size() - 1]);
    answer += ' ';
    answer += to_string(numbers[0]); 
    
    return answer;
}
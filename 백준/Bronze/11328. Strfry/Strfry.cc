//
//  main.cpp
//  Algorithm_C++
//
//  Created by 차차 on 3/7/24.
//

#include <iostream>

using namespace std;

char alphabet[26];

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    bool second;
    bool p;
    string input;
    string s1;
    string s2;
    
    cin >> n;
    cin.ignore();
    
    for (int i = 0 ; i < n ; i++) {
        getline(cin, input);
        p = true;
        second = false;
        fill(alphabet, alphabet + 26, 0);
    
        for (int j = 0 ; j < input.size() ; j++) {
            if (input[j] == ' ') {
                if (input.size() - j - 1 != j) {
                    p = false;
                    break;
                }
                else {
                    second = true;
                    continue;
                }
            }
            
            if (second) {
                alphabet[input[j] - 'a']--;
                if (alphabet[input[j] - 'a'] < 0) {
                    p = false;
                    break;
                }
            }
            else {
                alphabet[input[j] - 'a']++;
            }
            
        }
        
        if (p)
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }
}

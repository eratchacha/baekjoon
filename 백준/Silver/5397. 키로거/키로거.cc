//
//  main.cpp
//  Algorithm_C++
//
//  Created by 차차 on 3/7/24.
//

#include <iostream>
#include <list>

using namespace std;

int numbers[10];

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string input;
    bool front = false;
    list<char> line;
    //list<char>::iterator iter = line.begin();
    auto iter = line.begin();
    cin >> n;
    cin.ignore();
    
    for (int i = 0 ; i < n ; i++) {
        getline(cin, input);
        
        for (int j = 0 ; j < input.size() ; j++) {
            if (input[j] == '>') {
                if (iter != line.end() && line.size() > 0)
                    iter++;
            }
            else if (input[j] == '<') {
                if (line.size() > 0 && iter != line.begin())
                    iter--;
            }
            else if (input[j] == '-') {
                auto eraser = iter;
                if (eraser == line.begin())
                    continue;
                else {
                    eraser--;
                    line.erase(eraser);
                }
            }
            else {
                line.insert(iter, input[j]);
            }
        }
        
        for (iter = line.begin() ; iter!= line.end() ; iter++)
            cout << *iter;
        cout << '\n';
        line.clear();
    }
}

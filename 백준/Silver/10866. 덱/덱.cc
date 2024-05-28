//
//  main.cpp
//  Algorithm_C++
//
//  Created by 차차 on 3/7/24.
//

#include <iostream>
#include <string>
#include <deque>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    int value;
    string temp;
    string cmd;
    deque<int> deck;
    bool flag;
    
    cin >> num;
    
    while(num >= 0) {
        getline(cin, cmd);
        
        if (cmd == "front") {
            if (deck.empty())
                cout << -1 << endl;
            else
                cout << deck.front() << endl;
        }
        else if (cmd == "back") {
            if (deck.empty())
                cout << -1 << endl;
            else
                cout << deck.back() << endl;
        }
        else if (cmd == "size") {
            cout << deck.size() << endl;
        }
        else if (cmd == "pop_front") {
            if (deck.empty())
                cout << -1 << endl;
            else {
                cout << deck.front() << endl;
                deck.pop_front();
            }
        }
        else if (cmd == "pop_back") {
            if (deck.empty())
                cout << -1 << endl;
            else {
                cout << deck.back() << endl;
                deck.pop_back();
            }
        }
        else if (cmd =="empty") {
            if (deck.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (cmd.substr(0,10) == "push_front") {
            temp = "";
            flag = false;
            
            for (int i = 0 ; i < cmd.size() ; i++) {
                if (flag) {
                    temp += cmd[i];
                }
                else if (cmd[i] == ' ') {
                    flag = true;
                }
            }
            if (temp != "")
                value = stoi(temp);
            
            deck.push_front(value);
        }
        else if (cmd.substr(0,9) == "push_back") {
            temp = "";
            flag = false;
            
            for (int i = 0 ; i < cmd.size() ; i++) {
                if (flag) {
                    temp += cmd[i];
                }
                else if (cmd[i] == ' ') {
                    flag = true;
                }
            }
            if (temp != "")
                value = stoi(temp);
            
            deck.push_back(value);
        }

        
        num--;
    }
    
}

//
//  main.cpp
//  Algorithm_C++
//
//  Created by 차차 on 3/7/24.
//

#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    int value;
    string temp;
    string cmd;
    queue<int> queue;
    bool flag;
    
    cin >> num;
    
    while(num >= 0) {
        getline(cin, cmd);
        
        if (cmd == "front") {
            if (queue.empty())
                cout << -1 << endl;
            else
                cout << queue.front() << endl;
        }
        else if (cmd == "back") {
            if (queue.empty())
                cout << -1 << endl;
            else
                cout << queue.back() << endl;
        }
        else if (cmd == "size") {
            cout << queue.size() << endl;
        }
        else if (cmd == "pop") {
            if (queue.empty())
                cout << -1 << endl;
            else {
                cout << queue.front() << endl;
                queue.pop();
            }
        }
        else if (cmd =="empty") {
            if (queue.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if (cmd.substr(0,4) == "push") {
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
            
            queue.push(value);
        }
        
        num--;
    }
    
}

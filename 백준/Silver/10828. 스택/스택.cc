//
//  main.cpp
//  Algorithm_C++
//
//  Created by 차차 on 3/7/24.
//

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    int value;
    string temp;
    string cmd;
    stack<int> stack;
    bool flag;
    
    cin >> num;
    
    while(num >= 0) {
        getline(cin, cmd);
        
        if (cmd == "top") {
            if (stack.empty())
                cout << -1 << endl;
            else
                cout << stack.top() << endl;
        }
        else if (cmd == "size") {
            cout << stack.size() << endl;
        }
        else if (cmd == "pop") {
            if (stack.empty())
                cout << -1 << endl;
            else {
                cout << stack.top() << endl;
                stack.pop();
            }
        }
        else if (cmd =="empty") {
            if (stack.empty())
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
            
            stack.push(value);
        }
        
        num--;
    }
    
}

#include <iostream>
#include <list>

using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string input;
    
    list<int>circle;
    
    int n;
    int k;
    
    getline(cin, input);
    
    for (int i = 0 ; i < input.size() ; i++) {
        if (input[i] == ' ') {
            n = stoi(input.substr(0, i));
            k = stoi(input.substr(i, input.size() - i));
        }
    }
    
    for (int i = 1 ; i <= n ; i++)
        circle.push_back(i);
    
    list<int>::iterator iter = circle.begin();
    
    cout << "<";
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 1 ; j < k ; j++) {
            if (*iter == circle.back())
                iter = circle.begin();
            else
                iter++;
        }
        
        cout << *iter;

        iter = circle.erase(iter);
        
        if (iter == circle.end())
            iter = circle.begin();
        
        if (i != n - 1) {
            cout << ",";
            
            cout << " ";
        }
    }
    
    cout << ">";
}

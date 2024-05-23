#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    int num;
    
    cin >> str;
    cin >> num;
    
    cout << str[num - 1] << endl;
}
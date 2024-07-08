//
//  main.cpp
//  Algorithm_C++
//
//  Created by 차차 on 3/7/24.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int answer = 0;
    int n;
    string input;
    int arr[100000];
    int x;
    
    cin >> n;
    cin.ignore();
    
    getline(cin, input);
    
    cin >> x;
    
    int temp = 0;
    int ind = 0;
    
    for (int i = 0 ; i < input.size() ; i++) {
        if (input[i] == ' ' || i == input.size() - 1) {
            if (i == input.size() - 1)
                arr[ind] = stoi(input.substr(temp, i - temp + 1));
            else
                arr[ind] = stoi(input.substr(temp, i - temp));
            ind++;
            temp = i + 1;
        }
    }
    
    int check[x];
    
    for (int i = 0 ; i < x ; i++)
        check[i] = 0;
    
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] <= x)
            check[arr[i]]++;
    }
    
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] < x) {
            if (check[x - arr[i]] == 1) {
                answer++;
            }
        }
    }
    
    cout << answer / 2;
}

//
//  main.cpp
//  Algorithm_C++
//
//  Created by 차차 on 3/7/24.
//

#include <iostream>

using namespace std;

int numbers[10];

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string input;
    int answer = 0;
    int max = 0;
    
    getline(cin, input);
    
    for (int i = 0 ; i < input.size() ; i++) {
        numbers[input[i] - '0']++;
    }
    
    for (int i = 0 ; i < 10 ; i++) {
        if (i != 6 && i != 9) {
            if (max < numbers[i])
                max = numbers[i];
        }
    }
    
    int six_and_nine = numbers[6] + numbers[9];
    
    if (six_and_nine % 2 == 1)
        six_and_nine++;
    
    six_and_nine /= 2;
    
    if (max < six_and_nine)
        answer = six_and_nine;
    else
        answer = max;
    
    cout << answer;
}

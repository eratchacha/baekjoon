#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = n + 1;
    int binary = 1;
    int n_one = 0;
    int answer_one;
    
    for ( ; ; binary *= 2) {
        if (binary * 2 > n)
            break;
    }
    
    while (n > 0) {
        if (n >= binary) {
            n -= binary;
            n_one++;
        }
   
        binary /= 2;
    }
    
    int i = 0;
    
    while (1) {
        int num = answer;
        answer_one = 0;
        binary = 1;
        
        for ( ; ; binary *= 2) {
        if (binary * 2 > num)
            break;
        }
        
        while (num > 0) {
            if (num >= binary) {
                num -= binary;
                answer_one++;
            }
            
            binary /= 2;
        }
            
        if (answer_one == n_one)
            break;
        else
            answer++;
        
        i++;
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int balls, int share) {
    unsigned long long int answer = 1;
    int i = 1;
    int j = balls;
    
    while (j > share && balls - share >= i) {
        answer *= j;
        answer /= i;
        i++;
        j--;
 
    }
    
    /*
    for (int i = balls ; i > share ; i--) {
        answer *= i;
    }
    
    for (int i = 2 ; i <= balls - share ; i++) {
        answer /= i;
    }*/
    
    return answer;
}
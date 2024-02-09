#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int div ;
    vector<int> divs;
    
    for (int i = 1 ; i <= number ; i++) {
        div = 0;
        
        for (int j = 1 ; j * j <= i ; j++) {
            if (j * j == i)
                div++;
            else if (i % j == 0)
                div += 2;
        }
        
        divs.push_back(div);
    }
    
    for(int i = 0 ; i < divs.size() ; i++) {
        if (divs[i] > limit)
            answer += power;
        else
            answer += divs[i];
    }
    
    return answer;
}
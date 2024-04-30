#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int temp;
    int len;
    vector<int> sum;
    
    for (int i = 1 ; i <= elements.size() ; i++) {
        
        for (int j = 0 ; j < elements.size() ; j++) {
            temp = 0;
            len = i;
            
            for (int k = j ; len > 0 ; k++) {
                if (k >= elements.size())
                    k = 0;
                
                temp += elements[k];
                len--;
            }
            
            sum.push_back(temp);
        }
    }
    
    sort(sum.begin(), sum.end());
    sum.erase(unique(sum.begin(), sum.end()), sum.end());
    
    answer = sum.size();
    
    return answer;
}
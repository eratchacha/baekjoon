#include <string>
#include <vector>

using namespace std;

int min(vector<int> target) {
    if (target[0] > target[1]) {
        return target[1];
    } else {
        return target[0];
    }
}


int max(vector<int> target) {
    if (target[0] > target[1]) {
        return target[0];
    } else {
        return target[1];
    }
}

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    while (min(bill) > min(wallet) || max(bill) > max(wallet)) {
        if (bill[0] > bill[1]) {
            bill[0] /= 2;
        } else {
            bill[1] /= 2;
        }
        
        answer++;
    }
    
    return answer;
}
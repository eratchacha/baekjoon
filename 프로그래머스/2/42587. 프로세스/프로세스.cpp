#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Process {
    public: 
    int loc, p;
    
    Process(int l, int p) {
        this -> loc = l;
        this -> p = p;
    }
};

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int ind = 0;
    vector<Process> pQueue;
    vector<int>order;
    
    for (int i = 0 ; i < priorities.size() ; i++) {
        pQueue.push_back(Process(i, priorities[i]));
    }
    
    while(pQueue.size() > 0) {
            for (int j = ind + 1 ; j < pQueue.size() ; j++) {
                if (pQueue[ind].p < pQueue[j].p) {
                    pQueue.push_back(pQueue[ind]);
                    pQueue.erase(pQueue.begin());
                    ind = -1;
                    break;
                }
            }
            
            if (ind > -1) {
                order.push_back(pQueue[ind].loc);
                pQueue.erase(pQueue.begin());
            }
        
            ind = 0;
    }
    
    for (int i = 0 ; i < order.size() ; i++) {
        if (location == order[i]) {
            answer = i + 1;
            break;
        }
    }
    
    return answer;
}
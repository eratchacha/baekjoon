#include <string>
#include <vector>

using namespace std;

int cola(int bottle, int take, int give);

int solution(int a, int b, int n) {
    int answer = cola(n,a,b);
    return answer;
}

int cola(int bottle, int take, int give) {
    if (bottle >= take) {
        return give + cola(bottle - take + give, take, give);
    }
    else
        return 0;
    
}

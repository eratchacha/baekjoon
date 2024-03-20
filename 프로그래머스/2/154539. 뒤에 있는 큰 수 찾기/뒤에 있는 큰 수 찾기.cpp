#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
//     int max = 0;
//     int biggest = 1000000;
    
//     for (int i = 0 ; i < numbers.size() - 1 ; i++) {
//         if (numbers[i] >= biggest)
//             continue;
        
//         for (int j = i + 1 ; j < numbers.size() ; j++) {
//             if (numbers[i] < numbers[j]) {
//                 answer[i] = numbers[j];
//                 break;
//             }
//         }
        
//         if (answer[i] == -1 && biggest > numbers[i]) {
//             biggest = numbers[i];
//         }
//     }
    
    for (int i = numbers.size() - 2 ; i >= 0 ; i--) {
        for (int j = i + 1 ; j < numbers.size() ; j++) {
            if (numbers[i] < numbers[j]) {
                answer[i] = numbers[j];
                break;
            }
            else if (numbers[i] > numbers[j]) {
                if (answer[j] == -1) {
                    answer[i] = -1;
                    break;
                }
            }
            else {
                answer[i] = answer[j];
                break;
            }
        }
    }
    
    return answer;
}
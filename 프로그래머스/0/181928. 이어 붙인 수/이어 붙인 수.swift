import Foundation

func solution(_ num_list:[Int]) -> Int {
    var answer = 0
    var odd = 0
    var even = 0
    
    for i in num_list {
        if i % 2 == 0 {
            even *= 10
            even += i
        }
        else {
            odd *= 10
            odd += i
        }
    } 
    
    answer = odd + even
    
    return answer
}
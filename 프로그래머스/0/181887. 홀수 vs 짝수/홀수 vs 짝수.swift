import Foundation

func solution(_ num_list:[Int]) -> Int {
    var answer = 0
    var odd = 0
    var even = 0
    
    for i in 1 ... num_list.count {
        if i % 2 == 1 {
            odd += num_list[i - 1]
        }
        else {
            even += num_list[i - 1]
        }
    }
    
    if odd > even {
        answer = odd
    }
    else {
        answer = even
    }
    
    return answer
}
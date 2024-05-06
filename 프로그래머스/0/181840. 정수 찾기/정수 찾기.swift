import Foundation

func solution(_ num_list:[Int], _ n:Int) -> Int {
    var answer = 0
    
    for i in num_list {
        if i == n {
            answer = 1
            break
        }
    }
    
    return answer
}
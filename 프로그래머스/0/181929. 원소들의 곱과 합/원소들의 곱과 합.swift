import Foundation

func solution(_ num_list:[Int]) -> Int {
    var answer = 0
    var a = 1
    var b = 0
    
    for i in num_list {
        a *= i
        b += i
    }
    
    b *= b
    
    if a < b {
        answer = 1
    }
    else {
        answer = 0
    }
    
    return answer
}
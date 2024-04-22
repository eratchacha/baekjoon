import Foundation

func solution(_ names:[String]) -> [String] {
    var answer : [String] = []
    
    for i in 1 ... names.count {
        if i % 5 == 1 {
            answer.append(names[i - 1])
        }
    }
    
    return answer
}
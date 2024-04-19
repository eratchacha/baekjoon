import Foundation

func solution(_ n_str:String) -> Int {
    var answer = 0
    var index = n_str.endIndex
    var ten = 1
    
    while index != n_str.startIndex {
        if let num = Int(String(n_str[n_str.index(before: index)])) {
            answer += ten * num
        }

        ten *= 10
        index = n_str.index(before: index)
    }
        
    return answer
}
import Foundation

func solution(_ num_str:String) -> Int {
    var answer = 0
    
    for c in num_str {
        if let num = Int(String(c)) {
            answer += num
        } else {
            return 1
        }
    }
    
    return answer
}
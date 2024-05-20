import Foundation

func solution(_ number:String) -> Int {
    var answer = 0
    
    for i in number {
        answer += Int(String(i))!
    }
    
    answer %= 9
    
    return answer
}
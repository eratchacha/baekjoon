import Foundation

func solution(_ binomial:String) -> Int {
    var answer = 0
    var arr = binomial.components(separatedBy: " ")
    
    answer = Int(arr[0])!
    
    switch arr[1] {
        case "+":
            answer += Int(arr[2])!
        case "-":
            answer -= Int(arr[2])!
        case "*":
            answer *= Int(arr[2])!
        default:
            break
    }
    
    return answer
}
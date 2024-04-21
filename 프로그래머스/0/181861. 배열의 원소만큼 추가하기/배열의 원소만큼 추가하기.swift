import Foundation

func solution(_ arr:[Int]) -> [Int] {
    var answer = Array<Int>()
    
    for i in arr {
        for j in 0 ..< i {
            answer.append(i)
        }
    }
    
    return answer
}
import Foundation

func solution(_ n:Int, _ k:Int) -> [Int] {
    var answer : [Int] = []
    
    for i in 1 ... n / k {
        if i * k <= n {
            answer.append(i * k)
        }
    }
    
    return answer
}
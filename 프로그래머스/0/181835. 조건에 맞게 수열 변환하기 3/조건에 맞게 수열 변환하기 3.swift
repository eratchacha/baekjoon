import Foundation

func solution(_ arr:[Int], _ k:Int) -> [Int] {
    var answer : [Int] = []
    
    if k % 2 == 1 {
        for i in arr {
            answer.append(i * k)
        }
    }
    else {
        for i in arr {
            answer.append(i + k)
        }
    }

    return answer
}
import Foundation

func solution(_ start:Int, _ end_num:Int) -> [Int] {
    var answer : [Int] = []
    
    for i in end_num ... start {
        answer.append(start + end_num - i)
    }
    
    return answer
}
import Foundation

func solution(_ myString:String) -> [Int] {
    var answer = Array<Int>()
    var num = 0
    
    for i in myString {
        if i == "x" {
            answer.append(num)
            num = 0
        }
        else {
            num += 1
        }
    }
    
    answer.append(num)
    
    return answer
}
import Foundation

func solution(_ a:Int, _ b:Int, _ flag:Bool) -> Int {
    var answer = 0
    
    if flag == true {
        answer = a + b
    }
    else {
        answer = a - b
    }
    
    return answer
}
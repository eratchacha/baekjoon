import Foundation

func solution(_ a:Int, _ b:Int) -> Int {
    var answer = 2 * a * b
    var concat = 0
    var ten = 10
    
    while b > ten {
        if b <= ten {
            break
    }
        ten *= 10
    }
    
    concat = a * ten + b
    
    if answer <= concat {
        answer = concat
    }
    
    return answer
}
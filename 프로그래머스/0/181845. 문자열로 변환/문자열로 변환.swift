import Foundation

func solution(_ n:Int) -> String {
    var num = n
    var ten = 10
    var answer = ""
    
    for i in 0 ..< 4 {
        if num / ten >= 10 {
            ten *= 10
        }
        else {
            break
        }
    }
    if (num >= 10) {
    for i in 0 ..< 4 {
        if (ten >= 10) {
        answer += String(num / ten)
        num = num % ten
        ten /= 10
        }

        if (ten == 1) {
            answer += String(num % 10)
            break
        }
    }
    }
    else {
        answer = String(num)
    }
    
    return answer
}
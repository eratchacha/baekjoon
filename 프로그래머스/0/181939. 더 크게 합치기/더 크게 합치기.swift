import Foundation

func solution(_ a:Int, _ b:Int) -> Int {
    var answer = 0
    var concat1 = 0
    var concat2 = 0
    var ten1 = 10
    var ten2 = 10
    
    while (b > ten1) {
        if b <= ten1 {
            break
        }
        ten1 *= 10
    }
    
    while (a > ten2) {
        if a <= ten2 {
            break
        }
        ten2 *= 10
    }
    
    concat1 = a * ten1 + b
    concat2 = b * ten2 + a
    
    answer = concat1
    
    if concat1 < concat2 {
        answer = concat2
    }
    
    return answer
}
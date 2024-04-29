import Foundation

func solution(_ a:Int, _ b:Int) -> Int {
    var answer = 0
    
    if a % 2 == 1 && b % 2 == 1 {
        return a * a + b * b
    }
    
    if a % 2 == 0 && b % 2 == 0 {
         return abs(a - b)
    }

    
    return 2 * (a + b)
}
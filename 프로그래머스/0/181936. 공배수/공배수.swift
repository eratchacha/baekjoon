import Foundation

func solution(_ number:Int, _ n:Int, _ m:Int) -> Int {
    var answer = 0
    
    if number % n == 0 && number % m == 0 {
        answer = 1
    }
    
    return answer
}
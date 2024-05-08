import Foundation

func solution(_ str1:String, _ str2:String) -> Int {
    var answer = 0
    
    if str2.contains(str1) {
        answer = 1
    }
    
    return answer
}
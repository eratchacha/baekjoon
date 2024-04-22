import Foundation

func solution(_ myString:String, _ pat:String) -> Int {
    var answer = 0
    var str1 = myString.lowercased()
    var str2 = pat.lowercased()
    
    if str1.contains(str2) {
        answer = 1
    }
    else {
        answer = 0
    }
    
    return answer
}
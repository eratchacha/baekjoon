import Foundation

func solution(_ myString:String) -> String {
    var answer = ""
    
    for i in myString {
            answer += String(i).lowercased()
    }
    
    return answer
}
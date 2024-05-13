import Foundation

func solution(_ myString:String) -> String {
    var answer = ""
    
    for c in myString {
        if (c < "l") {
            answer += "l"
        }
        else {
            answer += String(c)
        }
    }
    
    return answer
}
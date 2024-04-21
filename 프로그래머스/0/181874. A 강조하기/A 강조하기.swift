import Foundation

func solution(_ myString:String) -> String {
    var answer = ""

    for i in myString {
        if String(i) == "a" {
            answer += String(i).uppercased()
        }
        else if String(i) > "A" {
            answer += String(i).lowercased()
        }
        else {
            answer += String(i)
        }
    }
    
    return answer
}
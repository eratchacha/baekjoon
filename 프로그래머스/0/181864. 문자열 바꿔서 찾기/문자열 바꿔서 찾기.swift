import Foundation

func solution(_ myString:String, _ pat:String) -> Int {
    
    var answer = ""
    
    for i in myString {
        if i == "A" {
            answer.append("B")
        }
        else {
            answer.append("A")
        }
    }
    
    if answer.contains(pat) {
        return 1
    }
    else {
        return 0
    }
    
    return 0
}
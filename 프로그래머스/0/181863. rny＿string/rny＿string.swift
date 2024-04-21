import Foundation

func solution(_ rny_string:String) -> String {
    var answer = ""
    
    for i in rny_string {
        if i == "m" {
            answer.append("rn")
        }
        else {
            answer.append(i)
        }
    }
    
    
    return answer
}
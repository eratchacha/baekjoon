import Foundation

func solution(_ my_string:String, _ alp:String) -> String {
    var answer = ""
    
    for i in my_string {
        if String(i) == alp {
            answer += String(i).uppercased()
        }
        else {
            answer += String(i)
        }
    }
    
    return answer
}
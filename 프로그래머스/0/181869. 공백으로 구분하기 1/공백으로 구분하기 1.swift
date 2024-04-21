import Foundation

func solution(_ my_string:String) -> [String] {
    var answer = Array<String>()
    var str = ""
    
    for i in my_string {
        if (i == " ") {
            answer.append(str)
            str = ""
        }
        else {
            str += String(i)
        }
    }
    
    answer.append(str)
    
    return answer
}
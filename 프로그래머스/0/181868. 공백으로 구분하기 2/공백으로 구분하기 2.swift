import Foundation

func solution(_ my_string:String) -> [String] {
    var answer = Array<String>()
    var str = ""
    var flag = false
    
    for i in my_string {
        if i == " " {
            if (flag == false) {
                flag = true
            }
        }
        else {
            if flag == true {
                if str != "" {
                    answer.append(str)
                }
                str = String(i)
                flag = false
            }
            else {
                str += String(i)
            }
        }
    }
    
    answer.append(str)
    
    return answer
}
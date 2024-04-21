import Foundation

func solution(_ strArr:[String]) -> [String] {
    var answer = Array<String>()
    var ind = 0
    var str : String
    
    for i in strArr {
        str = ""
        
        if ind % 2 == 0 {
            for j in i {
                str += String(j).lowercased()
            }
        }
        else {
            for j in i {
                str += String(j).uppercased()
            }
        }
        
        ind += 1
        answer.append(str)
    }
    
    return answer
}
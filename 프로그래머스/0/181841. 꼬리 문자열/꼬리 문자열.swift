import Foundation

func solution(_ str_list:[String], _ ex:String) -> String {
    var answer = ""
    
    for str in str_list {
        if str.contains(ex) {
            continue
        }
        else {
            answer += String(str)
        }
    }
    return answer
}
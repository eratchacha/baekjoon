import Foundation

func solution(_ my_string:String, _ is_prefix:String) -> Int {
    var answer = 0
    
    if my_string.hasPrefix(is_prefix) {
        answer = 1
    }
    else {
        answer = 0
    }
    
    return answer
}
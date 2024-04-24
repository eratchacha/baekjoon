import Foundation

func solution(_ my_string:String, _ is_suffix:String) -> Int {
    var answer = 0
    
    if my_string.hasSuffix(is_suffix) {
        answer = 1
    }
    else {
        answer = 0
    }
    
    return answer
}
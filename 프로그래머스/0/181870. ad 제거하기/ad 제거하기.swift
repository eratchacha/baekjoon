import Foundation

func solution(_ strArr:[String]) -> [String] {
    var answer: Array<String> = []
    
    for arr in strArr {
        if arr.contains("ad") {
            continue
        }
        else {
            answer.append(String(arr))
        }
    }
    
    return answer
}
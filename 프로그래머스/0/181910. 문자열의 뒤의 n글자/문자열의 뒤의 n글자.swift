import Foundation

func solution(_ my_string:String, _ n:Int) -> String {
    var answer = ""
    
    answer = String(my_string.suffix(n))
    
    return answer
}
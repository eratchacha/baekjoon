import Foundation

func solution(_ my_string:String, _ n:Int) -> String {
    var answer = ""
    
    answer = String(my_string.prefix(n))
    
    return answer
}
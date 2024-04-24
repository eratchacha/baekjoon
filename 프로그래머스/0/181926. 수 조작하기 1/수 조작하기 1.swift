import Foundation

func solution(_ n:Int, _ control:String) -> Int {
    var answer = n
    
    for i in control {
        switch i {
            case "w":
                answer += 1
            
            case "s":
                answer -= 1
            
            case "d":
                answer += 10
            
            case "a":
                answer -= 10
            
            default:
                break
            
        }
    }
    
    return answer
}
import Foundation

func solution(_ n_str:String) -> String {
    var answer = ""
    var flag = false
    
    for n in n_str {
        if n == "0" {
            if flag == false {
               continue; 
            }
        }
        
            flag = true;
            answer += String(n)
        
        
    }
    
    return answer
}
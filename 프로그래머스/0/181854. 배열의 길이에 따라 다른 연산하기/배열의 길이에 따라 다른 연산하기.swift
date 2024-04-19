import Foundation

func solution(_ arr:[Int], _ n:Int) -> [Int] {
    var answer = arr
    var ind = 0
    
    if arr.count % 2 == 0 {
        for i in 0 ..< answer.count {
            if (ind % 2 == 1) {
                answer[ind] += n 
            }
            
            ind += 1
        }
    }
    else {
        for i in 0 ..< answer.count {
            if (ind % 2 == 0) {
                answer[ind] += n 
            }
            
            ind += 1
        }
    }
    
    
    return answer
}
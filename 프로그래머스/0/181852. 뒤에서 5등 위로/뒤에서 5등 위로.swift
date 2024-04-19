import Foundation

func solution(_ num_list:[Int]) -> [Int] {
    var answer: [Int] = []
    var sortedArr = num_list.sorted()
    var i = 0
    
    for num in sortedArr {
        if (i < 5) {
            i += 1
            continue
        }
        answer.append(num)
        i += 1
    }
    return answer
}
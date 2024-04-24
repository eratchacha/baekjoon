import Foundation

func solution(_ num_list:[Int]) -> [Int] {
    var answer : [Int] = num_list
    
    if num_list[num_list.count - 1] > num_list[num_list.count - 2] {
        answer.append(num_list[num_list.count - 1] - num_list[num_list.count - 2])
    }
    else {
        answer.append(num_list[num_list.count - 1] * 2)
    }
    
    return answer
}
import Foundation

func solution(_ my_strings:[String], _ parts:[[Int]]) -> String {
    var answer = ""
    var ind = 0
    for i in my_strings {
        let start = i.index(i.startIndex, offsetBy : parts[ind][0])
        let end = i.index(i.startIndex, offsetBy : parts[ind][1])
        answer += i[start ... end]
        ind += 1
    }
    
    return answer
}
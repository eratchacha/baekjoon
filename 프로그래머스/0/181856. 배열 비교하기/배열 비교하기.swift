import Foundation

func solution(_ arr1:[Int], _ arr2:[Int]) -> Int {
    
    if arr1.count < arr2.count {
        return -1
    }
    else if arr1.count > arr2.count {
        return 1
    }
    else {
        var sum1 = 0
        var sum2 = 0
        
        for i in arr1 {
            sum1 += i    
        }
        
        for i in arr2 {
            sum2 += i
        }
        
        if sum1 > sum2 {
            return 1
        }
        else if sum1 < sum2 {
            return -1
        }
        else {
            return 0
        }
    }
}
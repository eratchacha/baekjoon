#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int checkUnion(vector<string> big, vector<string> small) {
    int unions = big.size();
    int ind1 = 0;
    int ind2 = 0;
    
    sort(big.begin(), big.end());
    sort(small.begin(), small.end());
    
    while (ind1 < small.size()) {
        while(ind2 < big.size()) {
            if(small[ind1] < big[ind2])
                break;
            else if (small[ind1] == big[ind2]) {
                unions--;
                ind2++;
                break;
            }
            else
                ind2++;
        }
        unions++;
        ind1++;
    }
    
    return unions;
}

bool checkAlphabets(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}

vector<string> jacSet(string str) {
    vector<string> set;
    
    for (int i = 0 ; i < str.size() - 1; i++) {
        if (!checkAlphabets(str[i]) || !checkAlphabets(str[i + 1]))
            continue;
        else {
            char c1 = tolower(str[i]);
            char c2 = tolower(str[i + 1]);
            string s = "";
            s += c1;
            s += c2;
            set.push_back(s);
        }
    }
    
    return set;
}

int solution(string str1, string str2) {
    int unions = 0;
    int inter = 0;
    
    vector<string>set1 = jacSet(str1);
    vector<string>set2 = jacSet(str2);
    
    if (set1.size() > set2.size())
        unions = checkUnion(set1, set2);   
    else 
        unions = checkUnion(set2, set1);
    
    inter = set1.size() + set2.size() - unions;
     
    cout << inter << " " <<  unions;
    
    if(unions == 0)
        return 65536;
    else if (inter == 0)
        return 0;
    else
        return ((float) inter / unions) * 65536;
}
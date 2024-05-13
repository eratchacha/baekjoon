#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int index;
    bool flag;
    for (int i = 0 ; i < skill_trees.size() ; i++) {
        index = 0;
        flag = false;
        for (int j = 0 ; j < skill_trees[i].size() ; j++) {
            if (skill.find(skill_trees[i][j]) != string::npos) {
                if (skill[index] == skill_trees[i][j]) {
                    index++;
                }
                else {
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
            answer++;
        

    }
    
    return answer;
}
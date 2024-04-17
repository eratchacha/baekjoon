#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    char direction;
    int n;
    int w = park[0].size();
    int h = park.size();
    int x = 0;
    int y = 0;
    int tempX;
    int tempY;
    int d;
    
    for (int i = 0 ; i < h ; i++) {
        for (int j = 0 ; j < w ; j++) {
            if (park[i][j] == 'S') {
                x = j;
                y = i;
                break;
            }
        }
    }
    
    for (int i = 0 ; i < routes.size() ; i++) {
        direction = routes[i][0];
        n = routes[i][2] - '0';
        
        tempX = x;
        tempY = y;
        
        switch (direction) {
            case 'N':
                y -= n;
                d = -1;
                break;
                
            case 'S':
                y += n;
                d = 1;
                break;
                
            case 'W':
                x -= n;
                d = -1;
                break;
                
            case 'E':
                x += n;
                d = 1;
                break;
                
            default:
                break;
        }
        
        if ((x < 0 || x >= w) || (y < 0 || y >= h)) {
            x = tempX;
            y = tempY;

            continue;
        }
        
        if (direction == 'W') {
            for (int j = tempX ; j >= x ; j--) {
                if (park[tempY][j] == 'X') {
                    x = tempX;
                    y = tempY;
                    break;
                }
            }
        }
        else if (direction == 'E') {
            for (int j = tempX ; j <= x ; j ++) {
                if (park[tempY][j] == 'X') {
                    x = tempX;
                    y = tempY;
                    break;
                }
            }
        }
        else if (direction == 'N') {
            for (int j = tempY ; j >= y ; j--) {
                if (park[j][tempX] == 'X') {
                    x = tempX;
                    y = tempY;
                    break;
                }
            }
        }
        else {
            for (int j = tempY ; j <= y ; j++) {
                if (park[j][tempX] == 'X') {
                    x = tempX;
                    y = tempY;
                    break;
                }
            }
        }
    }
    
    answer.push_back(y);
    answer.push_back(x);
    
    return answer;
}
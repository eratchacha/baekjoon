#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer;
    int five = hp / 5;
    int three;
    int one;
    hp -= five * 5;
    
    if (hp == 0)
        return five;
    
    else
    {
        three = hp / 3;
        hp -= three * 3;
        
        if (hp == 0)
            return five + three;
        else
        {
            one = hp;
            return five + three + one;
        }
    }
}
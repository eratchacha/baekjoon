#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 1;
    int temp;
    int max = 0;
    
    for (int i = 0 ; i < sizes_rows ; i++)
    {
        if (sizes[i][0] > sizes[i][1])
        {
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    
    for (int i = 0 ; i < sizes_rows ; i++)
    {
        if (sizes[i][0] > max)
            max = sizes[i][0];
    }
    answer *= max;
    
    max = 0;
    for (int i = 0 ; i < sizes_rows ; i++)
    {
        if (sizes[i][1] > max)
            max = sizes[i][1];
    }
    answer *= max;
    return answer;
}
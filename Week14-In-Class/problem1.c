#include <stdio.h>
#include <limits.h>
int main(void) {
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    int max_min = INT_MAX; //也可以初始化为第一行最大值
    for(int i=0; i<row; i++) {
        int row_max = INT_MIN; //也可以初始化为第一行第一个值
        for(int j=0; j<col; j++) {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > row_max) 
                row_max = arr[i][j]; //更新行的最大值
        }
        if(row_max < max_min)
            max_min = row_max; //更新最大值的最小值
    }
    printf("%d\n", max_min);
    return 0;
}

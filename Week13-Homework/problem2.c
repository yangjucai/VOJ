#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, m;
    scanf("%d %d", &n, &m); // 输入矩阵的行数n和列数m

    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE]; // 声明两个二维数组A和B，用于存储输入的矩阵

    // 输入矩阵A
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%d", &A[i][j]);
        }
    }

    // 输入矩阵B
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            scanf("%d", &B[i][j]);
        }
    }

    // 对应元素相加并输出结果
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m - 1; ++j){
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("%d\n", A[i][m - 1] + B[i][m - 1]);
    }

    return 0;
}

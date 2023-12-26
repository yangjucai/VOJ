#include <stdio.h>

int main(main) {
    int n;

    while (scanf("%d", &n) != EOF && (n >= 1 && n <= 10)) {
        int a[10][10] = {0}; // 二维数组存储杨辉三角
        int i, j, k;

        // 生成杨辉三角
        for (i = 0; i < n; i++) {
            for (j = 0; j <= i; j++) {
                if (i == j || j == 0)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }

        // 打印倒杨辉三角
        for (i = 0; i < n; i++) {
            // 打印每行前面的空格
            for (j = 0; j < i; j++)
                printf(" ");

            // 打印每行的数字
            for (k = 0; k < n - i; k++) {
                printf("%d", a[n - i - 1][k]);
                printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

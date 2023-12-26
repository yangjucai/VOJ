#include <stdio.h>

int main() {
    int n;

    // 输入矩阵的大小 n
    scanf("%d", &n);

    // 输入矩阵的内容并输出下三角部分
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int num;
            scanf("%d", &num);
            if(j <= i)
 	           printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}

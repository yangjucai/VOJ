#include<stdio.h>

int main() {
    int n, i, sum = 0, isseven = 0, j;

    // 输入一个整数 n
    scanf("%d", &n);

    // 从 n 循环到 1
    for (i = n; i > 0; i--) {
        // 检查 i 中是否包含数字 7
        for (j = i; j > 0; j = j / 10) {
            if (j % 10 == 7) {
                isseven = 1;
                break;
            }
        }

        // 如果 i 不是 7 的倍数且不包含数字 7，则累加 i 的平方到 sum
        if (i % 7 != 0 && isseven != 1) {
            sum += i * i;
        }

        // 重置 isseven 标志
        isseven = 0;
    }

    // 输出结果
    printf("%d", sum);

    return 0;
}

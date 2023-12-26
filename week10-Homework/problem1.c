#include<stdio.h>

// 函数定义
double f(int x, int n) {
    double t = x;

    // 循环计算递归公式
    for (int i = 1; i <= n; i++) {
        t = x / (i + t);
    }

    return t;
}

int main() {
    int x, n;

    // 输入 x 和 n
    scanf("%d %d", &x, &n);

    // 调用函数并输出结果
    printf("%.2f", f(x, n));

    return 0;
}

#include <stdio.h>

// 提前声明 digit 函数
int digit(int n, int k);

int main(void) {
    int n, k, t;
    scanf("%d%d", &n, &k);
    t = digit(n, k);
    printf("%d", t);
    return 0;
}

// 定义 digit 函数
int digit(int n, int k) {
    int i, t;
    for (i = 1; i <= k; i++) {
        t = n % 10;
        n = n / 10;
    }
    return t;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 输入整数n

    int a[n], b[n]; // 声明两个整数数组a和b，长度为n
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]); // 输入数组a的元素
        if (i == 0)
            b[i] = a[i]; // 对于数组b的第一个元素，直接赋值为数组a的第一个元素
        else
            b[i] = b[i - 1] + a[i]; // 对于数组b的其他元素，累加前面的元素和数组a的当前元素
    }
    
    for (int i = 0; i < n; ++i) {
        printf("%d ", b[i]); // 输出数组b的每个元素
    }

    return 0;
}

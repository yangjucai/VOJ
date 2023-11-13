#include<stdio.h>

int main() {
    //遍历所有的三位数
    for (int i = 100; i < 1000; ++i) {
        int a, b, c;
        c = i % 10; //个位数
        b = (i / 10) % 10; //百位数
        a = i / 100; //千位数
        if (a * a * a + b * b * b + c * c * c == i)
            printf("%6d", i);
    }
    return 0;
}
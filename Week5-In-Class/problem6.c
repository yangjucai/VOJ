#include<stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    //定义一个临时变量，保存第一个数
    int tmp = a;
    a = b, b = tmp;

    printf("%d %d", a, b);

    return 0;
}









#include<stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%8d%8d%8d\n", a, b, c);

    printf("%d\t%d\t%d", a, b, c);
    //感兴趣的同学可以用选择结构实现

    return 0;
}
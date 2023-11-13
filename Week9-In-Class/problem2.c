#include<stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int fact = 1; //阶乘初始化为1
    while(n>1)
        fact *= n, n--; //每次循环阶乘乘以n，n再减一
    printf("%d", fact);
    return 0;
}
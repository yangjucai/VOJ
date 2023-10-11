#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    //判断不是闰年的
    //不能被4整除 或 能被100整除但不能被400整除
    if(n % 4 != 0 || (n % 100 == 0 && n % 400 != 0))
        printf("N");
    else
        printf("Y");

    return 0;
}
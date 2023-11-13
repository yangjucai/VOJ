#include<stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int fibo = 1; //斐波纳契数初始化为1
    int last1 = 1, last2 = 1; //定义最后两个数，均初始化为1
    for (int i = 3; i <= n; i++) 
    {
        fibo = last1 + last2; //第i个斐波那契数为后两个数之和
        last1 = last2; // 更新last1 为 last2
        last2 = fibo; // 更新last2 为fibo
    }
    printf("%d", fibo);
    return 0;
}
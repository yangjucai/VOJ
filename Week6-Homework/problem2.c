#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    // 处理为0的情况
    if (num == 0)
    {
        printf("0");
        return 0;
    }
    // 处理负数的情况
    if (num < 0)
    {
        num = -num;
        printf("-");
    }

    // 去除末尾0
    while (num % 10 == 0)
        num /= 10;

    // 从后往前输出   
    while (num != 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
}
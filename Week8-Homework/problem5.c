#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d*%d=%d ", i, j, i*j); //打印公式
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(void)
{
    int cntA = 0, cntB = 0; // 统计A和B类数的个数
    for (int i = 1; i <= 1000; i++)
    {
        int tmp = i, cnt1 = 0, cnt0 = 0;
        while (tmp > 0)
        {
            if (tmp % 2 == 0)
                cnt0 += 1; // 统计0
            else
                cnt1 += 1; // 统计1
            tmp /= 2;      // 除2取余求二进制
        }
        if (cnt1 > cnt0)
            cntA += 1;
        else
            cntB += 1;
    }
    printf("%d %d", cntA, cntB);
    return 0;
}

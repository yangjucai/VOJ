#include<stdio.h>

int main() {
    int a, b;
    int res = 1;
    scanf("%d %d", &a, &b);
    //计算a^b, 对7取模
    for (int i = 0; i < b; ++i) {
        res *= a;
        res %= 7;
    }
    //判断是星期几
    switch (res) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("Sunday");
            break;
    }
    return 0;
}
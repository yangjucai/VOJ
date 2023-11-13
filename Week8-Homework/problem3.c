#include <stdio.h>
int main(void)
{
    int m, d;
    scanf("%d %d", &m, &d);
    if (m < 2 && d < 25)
        printf("Pig");
    else
        printf("Mouse");
    return 0;
}
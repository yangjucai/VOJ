#include<stdio.h>

int main(void) {
    int m;
    scanf("%d", &m);
    if( m % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");

    /*
    负数的模仍是负数，所以另一种判断方法：
    if(m % 2 == 1 || m % 2 == -1) // 其中||表示逻辑或
        printf("odd\n");
    else
        printf("even\n");
    */

    return 0;
}
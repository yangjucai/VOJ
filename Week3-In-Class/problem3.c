#include<stdio.h>

int main(void) {
    int m;
    scanf("%d", &m);
    if( m % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");

    return 0;
}
#include<stdio.h>

int main(void) {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("%d", a*b-c%d*e+f);
    
    return 0;
}
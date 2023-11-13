#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    // n = (x+8) % 10
    // (n + 2) % 10 = (x + 8 + 2) % 10 = x % 10
    int x = (n+2) % 10;
    printf("%d", x);
    return 0;
}
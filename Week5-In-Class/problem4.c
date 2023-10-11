#include<stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);//假设读入n=1

    int n1 = ++n;//此时n1=++n=2, n=n+1=2
    int n2 = n++;//此时n2=n++=2, n=n+1=3

    printf("%d %d %d", n1, n2, n);
    
    return 0;
}
#include<stdio.h>

int main(void) {
    int M, N;
    scanf("%d %d", &M, &N);
    //if语句如果只有一行，可以省略大括号
    if(M % N == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
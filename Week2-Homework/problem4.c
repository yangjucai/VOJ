#include<stdio.h>

int main(void) {
    int M,N;
    scanf("%d %d", &M, &N);
    if(M % N == 0)    
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
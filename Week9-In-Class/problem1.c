#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) //打印第一行
        printf("*");
    printf("\n");

    for(int i=2; i<=n-1; i++){ //打印中间行
        for(int j=1; j<=n; j++){
            if(j==n-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(int i=1; i<=n; i++)//打印最后一行
        printf("*");
    printf("\n");
    
    return 0;
}
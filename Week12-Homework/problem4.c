#include <stdio.h>
int n, a[10005];
int main(){
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int* p = a;
    for(;p < a + n; p++){
        printf("%d ", *p); //使用指针访问
    }
    return 0;
}
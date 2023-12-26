#include <stdio.h>
int n, a[10005];
int main(){
    for(int i = 0; i < 5; i++){scanf("%d", &a[i]);}
    int* p = a, i = 0;
    for(;p < a + 5; p++, i++){ 
        printf("a[%d]=%d\n", i, *p); //使用指针访问
    }
    return 0;
}
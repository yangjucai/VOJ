#include<stdio.h>		

int main(void) {
    int a;
    scanf("%d", &a);
    //定义布尔类型变量，判断是否存在因子
    _Bool existFactor = 0;
    if(a % 3 == 0) 
        existFactor = 1, printf("3 ");
    if(a % 5 == 0) 
        existFactor = 1, printf("5 ");
    if(a % 7 == 0) 
        existFactor = 1, printf("7 ");
    if(!existFactor)
        printf("n");
    
    return 0;
}
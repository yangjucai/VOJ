#include<stdio.h>		

int main(void) {
    
    int a;
    scanf("%d", &a);
    //隐式类型转换，int -> char
    printf("%c\n", a);
    
    return 0;
}
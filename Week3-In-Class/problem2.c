#include<stdio.h>

int main(void) {
    int a;
    short b;
    //sizeof(arg)函数返回参数arg的存储空间大小，以字节为单位
    printf("%d %d", sizeof(a), sizeof(b));

    return 0;
}
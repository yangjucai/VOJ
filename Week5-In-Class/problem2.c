#include<stdio.h>
#define PI 3.1415926

int main(void) {
    const float radius = 2.0;
    //定义单精度常量
    printf("%.3f", PI * radius * radius);
    
    return 0;
}
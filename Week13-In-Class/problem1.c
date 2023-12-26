#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int m;
    scanf("%d", &m);
    int *p = (int*) malloc(m * sizeof(int));//动态分配内存，强制类   //型转换，也可以用calloc(m, sizeof(int))
    int sum = 0;
    for(int i=0; i<m; i++) {
        scanf("%d", p+i);
        sum += *(p+i); //求和
    }
    printf("%d %d", sum, sum/m);
    return 0;
}

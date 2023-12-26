#include <stdio.h>
#define SIZE 105
int main(void) {
    int n, a[SIZE][SIZE];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] = n*i+j+1; //填充二维数组的值
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

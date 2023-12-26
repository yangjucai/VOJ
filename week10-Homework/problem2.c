#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int cmp_int1(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}


int Min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int* x = (int*)malloc(n * sizeof(int));
    int* y = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &y[i]);
    }
    qsort(x, n, sizeof(int), cmp_int1);
    qsort(y, m, sizeof(int), cmp_int1);
    int ans = INT_MAX;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        ans = Min(ans, abs(x[i] - y[j]));
        
        if (x[i] < y[j]) {
            i++;  // 移动 x 数组的指针
        } else {
            j++;  // 移动 y 数组的指针
        }
    }
    printf("%d\n", ans);
    free(x);
    free(y);
    return 0;
}
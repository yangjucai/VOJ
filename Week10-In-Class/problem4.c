#include <stdio.h>
#define SIZE 100
int main(void) {
    int n;
    int arr[SIZE];
    scanf("%d", &n);
    for(int i=0; i<n; i++) //读入数组arr
        scanf("%d", &arr[i]);
    for(int i=0; i<n/2; i++){ // 对称的位置swap
        int tmp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tmp;
    }
    for(int i=0; i<n; i++) //打印数组元素
        printf("%d ", arr[i]);
    
    return 0;
}

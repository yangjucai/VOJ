#include <stdio.h>

#define SIZE 25

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[SIZE];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);

    // 遍历所有子集
    for(int i=1; i<(1<<n); i++) {
        int sum = 0;
        // 遍历集合中的元素
        for(int j=0; j<n; j++){
            if(i & (1 << j))
                sum += a[j];
        }
        // 如果子集的和等于 m，则输出 YES 并结束程序
        if(sum == m){
            printf("YES");
            return 0;
        }
    }
    // 如果没有找到符合条件的子集，输出 NO
    printf("NO");
    return 0;
}

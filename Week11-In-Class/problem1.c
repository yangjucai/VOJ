#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main() {
    int EVEN[10] = {0}; //定义偶数数组
    int ODD[10] = {0};  //定义奇数数组
    int temp = 0;
    int cnt_even = 0, cnt_odd = 0; //统计奇偶数的个数
    for (int i = 0; i < 10; i++){
        scanf("%d", &temp);
        if (temp % 2 == 0) //读入数据， 初始化数组
            EVEN[cnt_even] = temp, cnt_even++;
        else
            ODD[cnt_odd] = temp, cnt_odd++; 
    }

    qsort(ODD, 10, sizeof(int), cmp); //奇数数组排序
    qsort(EVEN, 10, sizeof(int), cmp);//偶数数组排序
    for (int i = 1; i <= cnt_odd; i++)
        printf("%d ", ODD[10 - i]); //输出奇数
    
    for (int i = cnt_even; i > 0; i--)
        printf("%d ", EVEN[10 - i]);//输出偶数
    
    return 0;

}

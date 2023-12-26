#include <stdio.h>
int main(void){
    int i,t,n; //i计数器，n为计数终点， t为临时暂存变量
    scanf("%d", &n);
    double a=2.0,b=1.0,s=0; //a初始分子， b初始分母， s为序列之和
    for(i=1;i<=n;i++){
        s=s+a/b;
        t=a;
        a=a+b; //下一个数的分子 为 上一个数的分子加分母
        b=t; //下一个数的分母 为 上一个数的分子
    }
    printf("%.2f",s);//注意保留2位小数
    return 0;
}

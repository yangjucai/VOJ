#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    char ch;
    scanf("%d %c" , &n , &ch);
    
    int i = sqrt((n+1)/2);  // 计算沙漏的半径（行数）

    // 输出沙漏上半部分
    for(int j = 0; j < i*2-1; j++){
        int p, t;
        for(p = i-1-abs(j-i+1); p > 0; p--){
            printf(" ");  // 输出左侧空格
        }
        for(t = 1+2*abs(j-i+1); t > 0; t--){
            putchar(ch);  // 输出沙漏的字符
        }
        printf("\n");
    }

    // 输出沙漏下半部分数字
    printf("%d" , n - 2*i*i+1);
    
    return 0;
}

// #include<stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
    
//     if(n<0) // 处理为负的情况
//         n = -n;
    
//     if( n / 10000 > 0)
//         printf("5");
//     else if(n / 1000 > 0)
//         printf("4");
//     else if(n / 100 > 0)
//         printf("3");
//     else if(n / 10 > 0)
//         printf("2");
//     else
//         printf("1");
//     return 0;
// }

// #include<stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);

//     int cnt = 0;
//     if(n == 0) //处理为0的情况
//         cnt = 1;
//     else if(n<0) // 处理为负的情况
//         n = -n;
//     for(; n > 0; n /= 10)
//         cnt++;
//     printf("%d", cnt);
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    if(n == 0) //处理为0的情况
        printf("1");
    else    
        printf("%d", (int)log10(abs(n))+1);
        //可以用abs(n)处理为负的情况
    return 0;
}

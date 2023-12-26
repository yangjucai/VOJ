#include<stdio.h>
#include<math.h>
#include<stdbool.h>

// 判断是否为素数的函数
int isPrime(int a){
    if(a <= 1)
        return 0;
    
    for(int i = 2; i < (int)sqrt(a) + 1; i++){
        if(a % i == 0)
            return 0;  // 如果能整除，不是素数
    }
    return 1;  // 是素数
}

// 递归计算以m开头的素数个数
int number(int m, int n){
    int sum = 0;
    for(int i = 0; i <= 9; i++){
        if(m * 10 + i > n)
            return sum;
        else if(isPrime(m * 10 + i) == 1)
            sum += number(m * 10 + i, n) + 1;  // 递归计算以m*10+i开头的素数个数
    }
    return sum;
}

int main(){
    int n, count = 0;
    scanf("%d", &n);
    
    // 遍历以2到9开头的素数
    for(int j = 2; j <= 9; j += 1){
        if(isPrime(j) == 1){
            count += number(j, n) + 1;  // 递归计算以j开头的素数个数
        }
    }
    
    printf("%d", count);
    return 0;
}

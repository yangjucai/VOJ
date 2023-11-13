#include<stdio.h>
#include<math.h>

_Bool isPrime(int n) {
    for(int i=2; i <= (int)sqrt(n); i++){
        if(n % i == 0)
            return 0; //有数i整除n，则不是素数
    }
    return 1; //是素数
}

_Bool isSymm(int n) {
    int len = (int) log10(n) + 1; //获取n位数
    for(int i=1; i<= len/2; i++) {
        int numi = (n / (int)pow(10, i-1)) % 10; //获取第i位上数字
        int numsi = (n / (int)pow(10, len-i) ) % 10; //获取第len-i位数字
        if(numi != numsi)
            return 0; // 对称位置数不相等，则返回不对称
    }
    return 1; //是对称数字
}

int main(void) {
    int n;
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        if(isPrime(n) && isSymm(n))
            printf("Yes\n"); //是素数并且对称，输出Yes
        else
            printf("No\n");
    }
    
    return 0;
}
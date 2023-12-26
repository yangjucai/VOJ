#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int n;

// 判断一个数是否为质数
bool check(int x) {
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

// 返回 x 的最小质因数
int minPrime(int x) {
    for(int i = 2; i <= x; i++) {
        if(x % i == 0 && check(i)) {
            return i;
        }
    }
}

int main(void) {
    scanf("%d", &n);
    printf("%d=", n);

    while(n != 1) {
        int t = minPrime(n);
        printf("%d", t);
        n /= t;
        if(n != 1) {
            printf("*");
        }
    }

    return 0;
}

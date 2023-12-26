#include <stdio.h>
#include <math.h>

// 判断是否为素数
_Bool isPrime(int n) {
    if (n < 2) {
        return 0; // 不是素数
    }
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // 不是素数
        }
    }
    return 1; // 是素数
}

// 判断是否为回文数
_Bool isPalindrome(int n) {
    int len = log10(n) + 1;
    for (int i = 1; i <= len / 2; i++) {
        int digit1 = (n / (int)pow(10, i - 1)) % 10;
        int digit2 = (n / (int)pow(10, len - i)) % 10;
        if (digit1 != digit2) {
            return 0; // 不是回文数
        }
    }
    return 1; // 是回文数
}

int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 11; i <= n; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

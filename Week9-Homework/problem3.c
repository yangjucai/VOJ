#include <stdio.h>

// 打印角谷猜想的步骤
void printCollatzSequence(int num) {
    while (num != 1) {

        if (num % 2 == 0) {
            printf("%d/2=%d\n", num,num/2);
            num /= 2;
        } else {
            printf("%d*3+1=%d\n", num,num * 3 + 1);
            num = num * 3 + 1;
        }
    }
    printf("End\n");
}

int main() {
    int num;
    scanf("%d", &num);
    printCollatzSequence(num);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char a[100000];
    int c[100000] = {0}; // 用于记录每个字符出现的次数

    gets(a); // 获取输入字符串，注意gets已经被标记为不安全，不推荐使用

    int length = strlen(a);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (a[i] == a[j])
                c[i]++; // 统计字符出现的次数
        }

        if (c[i] == 1) {
            printf("%c\n", a[i]); // 找到第一个仅出现一次的字符并输出
            return 0;
        }
    }

    printf("no\n"); // 如果没有找到仅出现一次的字符，则输出"no"
    return 0;
}

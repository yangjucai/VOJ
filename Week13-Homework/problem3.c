#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    int n, spaceCount = 0;
    scanf("%d\n", &n);  // 读取字符串的个数n

    char strings[n][MAX_SIZE];  // 定义一个二维字符数组用于存储输入的字符串

    // 输入多个字符串
    for(int i = 0; i < n; i++) {
        fgets(strings[i], MAX_SIZE, stdin);  // 读取一行字符串

        int len = strlen(strings[i]);

        // 遍历当前字符串中的字符
        for(int j = 0; j < len; j++) {
            if (strings[i][j] == ' ') {
                spaceCount++;  // 统计空格个数

                // 移除当前位置的空格
                for(int k = j; k < len; k++)
                    strings[i][k] = strings[i][k+1];
                len--;  // 字符串长度减1
                j--;  // 回退一步，处理当前位置的字符
            }
        }
    }

    // 输出空格的个数
    printf("%d\n", spaceCount);

    // 输出处理后的字符串
    for(int i = 0; i < n; i++)
        printf("%s", strings[i]);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 定义学生结构体
struct Student {
    char suoyin[10];  // 操作标识，如"insert"或"find"
    char mingzi[21];  // 学生名字
    int chengji;      // 学生成绩
};

int main() {
    // 动态分配内存以存储学生结构体数组
    struct Student *s = malloc(1000 * sizeof(struct Student));
    int i = 0;

    do {
        scanf("%s", s[i].suoyin);  // 读取操作标识

        // 根据操作标识执行相应操作
        if (strcmp(s[i].suoyin, "insert") == 0)
            scanf("%s %d", s[i].mingzi, &s[i].chengji);
        if (strcmp(s[i].suoyin, "find") == 0)
            scanf("%s", s[i].mingzi);
        i++;
    } while (strcmp(s[i - 1].suoyin, "end") != 0);  // 当输入"end"时结束循环

    // 遍历结构体数组，查找并输出最高分
    for (int j = 0; j < i; j++) {
        if (strcmp(s[j].suoyin, "find") == 0) {
            int maxScore = -1;

            // 遍历之前的插入操作，查找对应学生的最高分
            for (int k = 0; k < j; k++) {
                if (strcmp(s[k].suoyin, "insert") == 0 &&
                    strcmp(s[k].mingzi, s[j].mingzi) == 0) {
                    if (s[k].chengji > maxScore) {
                        maxScore = s[k].chengji;
                    }
                }
            }
            printf("%d\n", maxScore);  // 输出最高分
        }
    }

    free(s);  // 释放动态分配的内存
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    int score1;
    int score2;
    int score3;
    int sum;
} sort;

// 比较函数，用于qsort排序
int cmp(const void *a, const void *b) {
    const sort *sa = (const sort *)a;
    const sort *sb = (const sort *)b;

    int n = sa->sum - sb->sum;

    if (n == 0) {
        return sa->id - sb->id;
    }

    return -n; // 降序排序（总成绩高的排在前面）
}

int main() {
    int n;
    scanf("%d", &n);

    sort grade[110];
    
    // 输入学生成绩和计算总成绩
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &grade[i].score1, &grade[i].score2, &grade[i].score3);
        grade[i].id = i + 1;
        grade[i].sum = grade[i].score1 + grade[i].score2 + grade[i].score3;
    }

    int k;
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        int m;
        scanf("%d", &m);

        if (m == 1) { // 修改学生成绩
            int a;
            scanf("%d", &a);

            for (int i = 0; i < n; i++) {
                if (grade[i].id == a) {
                    scanf("%d %d %d", &grade[i].score1, &grade[i].score2, &grade[i].score3);
                    grade[i].sum = grade[i].score1 + grade[i].score2 + grade[i].score3;
                    break;
                }
            }
        } else if (m == 2) { // 查询学生成绩
            int a;
            scanf("%d", &a);

            for (int i = 0; i < n; i++) {
                if (grade[i].id == a) {
                    printf("%d %d %d %d\n", grade[i].score1, grade[i].score2, grade[i].score3, grade[i].sum);
                    break;
                }
            }
        } else { // 查询学生成绩排名
            qsort(grade, n, sizeof(sort), cmp);

            for (int i = 0; i < n; i++) {
                printf("%d %d %d %d %d\n", grade[i].id, grade[i].score1, grade[i].score2, grade[i].score3, grade[i].sum);
            }
        }
    }

    return 0;
}

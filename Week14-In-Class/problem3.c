#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 25
#define MAX_NAME_LENGTH 25
struct Student {
    char name[MAX_NAME_LENGTH];
    int score;
};

int compare(const void *a, const void *b) {
    const struct Student *studentA = (const struct Student *)a;
    const struct Student *studentB = (const struct Student *)b;
    if (studentA->score != studentB->score) {
        return studentB->score - studentA->score; //按成绩从高到低
    }
    return strcmp(studentA->name, studentB->name); //分数相同，按名字字典序小的在前
}

int main(void) {
    int n;
    scanf("%d", &n);
    struct Student students[MAX_STUDENTS];
    for (int i = 0; i < n; ++i) { //读入数据
        scanf("%s %d", students[i].name, &students[i].score);
    }
    qsort(students, n, sizeof(struct Student), compare); //排序
    for (int i = 0; i < n; ++i) //输出
        printf("%s %d\n", students[i].name, students[i].score);
    
    return 0;
}

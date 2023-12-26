#include <stdio.h>
#include <string.h>

struct Student {
    char name[21];
    int year;
    int month;
    int day;
    int id;
};

int compare(const void *a, const void *b) {
    const struct Student *stu1 = (const struct Student *)a;
    const struct Student *stu2 = (const struct Student *)b;

    // 按照生日从早到晚排序
    if (stu1->year != stu2->year) {
        return stu1->year - stu2->year;
    }
    if (stu1->month != stu2->month) {
        return stu1->month - stu2->month;
    }
    if(stu1->day != stu2->day) {
        return stu1->day - stu2->day;
    }
    return stu2->id - stu1->id;
}

int main() {
    int n;

    // 输入班级人数
    scanf("%d", &n);

    struct Student students[n];

    // 输入每个同学的信息
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", students[i].name, &students[i].year, &students[i].month, &students[i].day);
        students[i].id = i;
    }

    // 使用标准库函数 qsort 进行排序
    qsort(students, n, sizeof(struct Student), compare);

    // 输出排序后的姓名
    for (int i = 0; i < n; i++) {
        printf("%s\n", students[i].name);
    }

    return 0;
}

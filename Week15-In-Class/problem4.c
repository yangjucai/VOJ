#include <stdio.h>
#include <stdlib.h>

struct IDCard {
    char number[19];
    char birthday[9];
};

int compare(const void *a, const void *b) {
    const struct IDCard *id1 = (const struct IDCard *)a;
    const struct IDCard *id2 = (const struct IDCard *)b;

    // 按照出生日期从大到小排序
    if(strcmp(id1->birthday, id2->birthday) != 0)
        return strcmp(id2->birthday, id1->birthday);

    // 如果日期相同，则按身份证号码大小排序
    return strcmp(id2->number, id1->number);
}

int main() {
    int n;

    // 输入身份证数量
    scanf("%d", &n);

    struct IDCard cards[n];

    // 输入每个身份证信息
    for (int i = 0; i < n; i++) {
        scanf("%s", cards[i].number);
        strncpy(cards[i].birthday, cards[i].number + 6, 8);
        cards[i].birthday[8] = '\0'; // 添加字符串结束符
    }

    // 使用标准库函数 qsort 进行排序
    qsort(cards, n, sizeof(struct IDCard), compare);

    // 输出排序后的身份证号码
    for (int i = 0; i < n; i++) {
        printf("%s\n", cards[i].number);
    }

    return 0;
}

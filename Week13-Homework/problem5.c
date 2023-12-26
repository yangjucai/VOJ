#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[1001];
int cmp(const void *a, const void *b){
    return s[*(int *)a] - s[*(int *)b];
} // 比较函数，按照字符值对应的位置进行排序
int main()
{
    scanf("%s", s);
    int len = strlen(s);
    // 创建两个下标数组，分别保存原始字符串和排序后的字符串的位置
    int originalIndex[len], sortedIndex[len];
    for (int i = 0; i < len; i++) //初始化下标数组
        originalIndex[i] = i, sortedIndex[i] = i;
    // 对排序后的字符串位置数组按字符值进行排序
    qsort(sortedIndex, len, sizeof(int), cmp);
    // 计算稳定排序的代价
    int ans = 0;
    for (int i = 0; i < len; i++){
        ans += abs(originalIndex[i] - sortedIndex[i]);
    }
    printf("%d", ans); // 输出最终的代价和
    return 0;
}

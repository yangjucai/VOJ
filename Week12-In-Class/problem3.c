#include<stdio.h>

int cmp(const void *a, const void *b){//定义排序函数
    return strcmp((char*) a, (char*) b);
}
int main()
{
    char names[10][SIZE];
    for(int i=0; i<10; i++)
        scanf("%s", names[i]);
    qsort(names, 10, sizeof(names[0]), cmp);//排序
    for(int i=0; i<10; i++)
        printf("%s\n", names[i]);
    return 0;
}

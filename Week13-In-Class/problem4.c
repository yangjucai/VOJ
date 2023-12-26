#include <stdio.h>
#include <strings.h>
#define SIZE 1005
int cmp_inc(const void *a, const void *b) {//比较函数
    return strcmp((char*) a, (char*) b);
}
int cmp_dec(const void *a, const void *b) {
    return -strcmp((char*) a, (char*) b);
}
int cmp_ncinc(const void *a, const void *b) {
    return strcasecmp((char*) a, (char*) b);
}
int cmp_ncdec(const void *a, const void *b) {
    return -strcasecmp((char*) a, (char*) b);
}
int main(void) {
    char type[10];
    int n;
    scanf("%s %d", type, &n);
    char strings[SIZE][SIZE];
    for(int i=0; i<n; i++) {
        scanf("%s", strings[i]);
    }
    if(strcmp(type, "inc") == 0) //根据不同类型 排序
        qsort(strings, n, sizeof(strings[0]), cmp_inc);
    else if(strcmp(type, "dec") == 0)
        qsort(strings, n, sizeof(strings[0]), cmp_dec);
    else if(strcmp(type, "ncinc") == 0) 
        qsort(strings, n, sizeof(strings[0]), cmp_ncinc);
    else 
        qsort(strings, n, sizeof(strings[0]), cmp_ncdec);
    for(int i=0; i<n; i++) {
        printf("%s\n", strings[i]);
    }
    return 0;
}
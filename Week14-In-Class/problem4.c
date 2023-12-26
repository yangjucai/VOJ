#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char id[7]; //货号
    char date[11]; //上架日期
    int price; //售价
} item;

int itemcmp(const item * p1, const item *p2)
{
    int n = strcmp(p2->date, p1->date);
    if(n!=0)//按上架日期降序
        return n;
    n = p1->price-p2->price;
    if(n!=0)//上架日期相同，按售价升序
        return n;
    n = strcmp(p1->id, p2->id);
    return n;//上架日期和售价相同，按货号升序
}

int main(void)
{
    int t, i, j, n;
    scanf("%d ", &t); //读入问题数
    for(i = 0; i < t; i++) //遍历t轮问题
    {
        scanf("%d", &n); //读入商品数
        item list[n]; 
        for(j = 0; j < n; j++) //读入每个商品信息
            scanf("%s %s %d", list[j].id, list[j].date, &list[j].price);
        printf("case #%d:\n", i); //输出格式要求， case #0: 开始
        //排序
        qsort(list,n,sizeof(item),itemcmp);
        for(j = 0; j < n; j++) //输出排序后的商品信息
            printf("%s %s %d\n", list[j].id, list[j].date, list[j].price);
    }
    return 0;
}

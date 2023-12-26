#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;//定义指针，指向a,b
	//使用指针进行相加和相乘
    printf("s=%d,t=%d", *pa + *pb, *pa * *pb);     
	return 0;
}

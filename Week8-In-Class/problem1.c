#include<stdio.h>
int main(void) {
    float S,Tbike,Twalk;
    scanf("%f",&S);
    Tbike = S/1.2;
    Twalk = 50+S/3.0;
    //比较两种方式所用时间
    if(Tbike < Twalk)
        printf("Walk");
    if(Tbike == Twalk)
        printf("All");
    if(Tbike > Twalk)
        printf("Bike");
    return 0;
}

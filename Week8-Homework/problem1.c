#include<stdio.h>

int main(void) {
    char ch;
    scanf("%c", &ch);
    for(int i=0; i<3; i++){
        for(int j=0; j< 5/2 - i; j++)
            printf(" ");
        for(int j=0; j<i*2+1; j++)
            printf("%c", ch);
        for(int j=0; j< 5/2 - i; j++)
            printf(" ");
        printf("\n");
    }
}
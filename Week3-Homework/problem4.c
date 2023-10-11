//solution1
// #include<stdio.h>

// int main(void){
//     char ch;
//     scanf("%c", &ch);
//     if(ch >= 'a' && ch <= 'z')
//         printf("lower");
//     else if(ch >= 'A' && ch <= 'Z')
//         printf("upper");
//     else if(ch >= '0'&& ch <= '9')
//         printf("digit");
//     else
//         printf("other");

//     return 0;
// }


//solution2
#include<stdio.h>
#include<ctype.h>

int main(void){
    char ch;
    scanf("%c", &ch);
    if(islower(ch))
        printf("lower");
    else if(isupper(ch))
        printf("upper");
    else if(isdigit(ch))
        printf("digit");
    else
        printf("other");

    return 0;
}
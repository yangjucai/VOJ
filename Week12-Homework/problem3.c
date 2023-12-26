#include <stdio.h>
#include <string.h>
char c[1005]; 
int n, k = 0;
int main(void){
    scanf("%d\n", &n);
    scanf("%s", c);
    for(int i = 0; i < n; i++){
        printf("%c", c[i]);
        i += k; //i跳过k个
        k++;
    }
    return 0;
}
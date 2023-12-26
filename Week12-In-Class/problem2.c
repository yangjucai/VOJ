#include<stdio.h>

int main(void) {
    int N;
    int score, maxScore = 0; 
    char name[SIZE], maxName[SIZE];
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %s", &score, name);
        if(score > maxScore){//更新最大分数和对应名字
            maxScore = score;
            strcpy(maxName, name);
        }
    }
    printf("%s", maxName);

    return 0;
}
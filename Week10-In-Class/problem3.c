#include <stdio.h>
#include <math.h>
#include <limits.h>
#define SIZE 1000
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int x[SIZE], y[SIZE];
    int minDis = INT_MAX; //最小距离定义为INT_MAX
    for(int i=0; i<n; i++) //读入数组x
        scanf("%d", &x[i]);
    for(int i=0; i<m; i++) //读入数组y
        scanf("%d", &y[i]);
 
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(abs(x[i] - y[j]) < minDis)
			    //更新最小距离
                minDis = abs(x[i] - y[j]); 
        
    printf("%d", minDis); 
    return 0;
}

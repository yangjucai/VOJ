#include <stdio.h>
#include <math.h>
int func1(int m){
    static int var1 = 1;
    var1 += m;
    return var1;
}

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    int ans;
    for(int i=0; i<n; i++)
        ans = func1(m);//调用n次func1(m)

    printf("%d\n", ans);
    return 0;
}
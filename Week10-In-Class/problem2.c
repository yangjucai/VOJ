#include <stdio.h>

double Hermite(double x, int n) {
    if(n==0)
        return 1;
    else if(n==1)
        return 2*x;
    else 
        return 2*x*Hermite(x, n-1) - 2*(n-1)*Hermite(x, n-2);
}


int main(void) {
    
    double x;
    int n;
    
    scanf("%lf %d", &x, &n);
    if(n<0){
        printf("error");
        return 0;//如果 n<0, 直接return 0；
    }

    printf("%.2lf", Hermite(x, n));
    
    return 0;
}
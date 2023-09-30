#include <stdio.h>

int main(void) {
	double F;
	scanf("%lf", &F);
	double C = (5 * (F - 32)) / 9;
	printf("%.5f", C);
    
	return 0;
}
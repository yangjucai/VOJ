#include <stdio.h>

int main(void) {
	double F;
    //%lf 双精度浮点数占位符
	scanf("%lf", &F);
	double C = (5 * (F - 32)) / 9;
    //%.5f 浮点数占位符，保留5位小数
	printf("%.5f", C);

	return 0;
}
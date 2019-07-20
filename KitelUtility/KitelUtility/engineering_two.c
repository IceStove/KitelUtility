#include "engineering_two.h"
#include <math.h>

void Sub(double a, double b) {
	double sub;
	//sub = x - y;
	printf("= \n");
	printf("%lf\n\n",a-b);
}
void Sum(double x, double y) {
	double sum;
	sum = x + y;
	printf("= \n");
	printf("%lf\n\n", sum);
}
void Div(double x, double y) {
	double div;
	div = x / y;
	printf("= \n");
	printf("%lf\n\n", div);
}
void Mul(double x, double y) {
	double mul;
	mul = x * y;
	printf("= \n");
	printf("%lf\n\n", mul);
}
// e^2;
void Exp(double x, double y) {
	int i;

	printf("%d", (int)x);
	for (i = 1; i <= (int)y; i++) {
		printf("0");
	}
	printf("\n");
	// 이걸 못풀어서 망함
}

void square(double x, double y) {
	printf("=\n");
	printf("%lf\n", pow(x, y));
}

void And(double x, double y) {
	int a, b;
	a = (int)x;
	b = (int)y;

	printf("And연산 = %d\n", a&b);
}

void Mod(double x, double y) {
	int a, b;
	a = (int)x;
	b = (int)y;

	printf("Mod연산 = %d\n", a%b);
}

void Or(double x, double y) {
	int a, b;
	a = (int)x;
	b = (int)y;

	printf("Or연산 = %d\n", a|b);
}

void Xor(double x, double y) {
	int a, b;
	a = (int)x;
	b = (int)y;

	printf("Xor연산 = %d\n", a^b);
}

void LSHleft(double x, double y) {
	int a, b;
	a = (int)x;
	b = (int)y;

	printf("<<연산 = %d\n", a<<b);
}

void Pita(double x, double y) {
	printf("%lf\n", hypot(x, y));
}



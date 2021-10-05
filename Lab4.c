#include <stdio.h>
#include <math.h>

// Задание 1

int main()
{
	int a, b, S, P;
	printf("enter a\n");
	scanf("%d", &a);
	printf("enter b\n");
	scanf("%d", &b);
	S = a * b;
	printf("num ");
	printf("%d\n", S);
	P = 2 * (a + b);
	printf("num ");
	printf("%d\n", P);

// Задание 2

	int d;
	float L, pi = 3.14f;
	printf("enter d\n");
	scanf_s("%d", &d);
	L = d * pi;
	printf("num ");
	printf("%f\n", L);

// Задание 3

	int a1, b1;
	double sym;
	printf("enter a1\n");
	scanf_s("%d", &a1);
	printf("enter b1\n");
	scanf_s("%d", &b1);
	sym = (a1 + b1) / 2;
	printf("num ");
	printf("%f\n", sym);

// Задание 4

	int a2, b2, a3, b3, sym1, dif, multi;
	double privat;
	printf("enter a2\n");
	scanf_s("%d", &a2);
	printf("enter b2\n");
	scanf_s("%d", &b2);
	a3 = a2 * a2;
	b3 = b2 * b2;
	sym1 = a3 + b3;
	printf("num ");
	printf("%d\n", sym1);
	dif = a3 - b3;
	printf("num ");
	printf("%d\n", dif);
	multi = a3 * b3;
	printf("num ");
	printf("%d\n", multi);
	privat = a3 / b3;
	printf("num ");
	printf("%f\n", privat);
	
// Задание 5

	int a4, a5, b4, b5, sym2, dif2, multi2;
	double privat2;
	printf("enter a4\n");
	scanf_s("%d", &a4);
	printf("enter b4\n");
	scanf_s("%d", &b4);
	a5 = abs(a4);
	b5 = abs(b4);
	sym2 = a5 + b5;
	printf("num ");
	printf("%d\n", sym2);
	dif2 = a5 - b5;
	printf("num ");
	printf("%d\n", dif2);
	multi2 = a5 * b5;
	printf("num ");
	printf("%d\n", multi2);
	privat2 = a5 / b5;
	printf("num ");
	printf("%f\n", privat2);
}
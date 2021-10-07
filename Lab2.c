#include <stdio.h>
#include <math.h>

int main()
{
	// Задание 1

	float a, b, answer;
	printf("enter a\n");
	scanf("%f", &a);
	printf("enter b\n");
	scanf("%f", &b);
	answer = (89 * b - (a + b) / 5) / (b * a + a * 7);
	printf("num ");
	printf("%f\n", answer);

	// Задание 2

	int c;
	printf("enter c\n");
	scanf("%d", &c);
	if (c % 4 != 0 || c % 100 == 0 && c % 400 != 0) printf("This year is not leap\n");
	else printf("This year is leap\n");

	// Задание 3

	int n, k;
	float P;
	printf("enter n\n");
	scanf("%d", &n);
	for (k = 1; k <= n; k++)
	{
		P = 1 + 1 / pow(k , k);
		printf("num %f\n", P);
	}

}
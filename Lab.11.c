#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	printf(" Номер 1\n "); // Задание 1
	printf("\n");

	int A, B;
	printf(" Введите целое значение A: ");
	scanf("%d", &A);
	printf(" Введите целое значение B: ");
	scanf("%d", &B);
	if (A != B) {
		if (A > B) {
			B = A;
			printf(" A = ");
			printf("%d\n", A);
			printf(" B = ");
			printf("%d\n", B);
		}
		else if (B > A) {
			A = B;
			printf(" A = ");
			printf("%d\n", A);
			printf(" B = ");
			printf("%d\n", B);
		}
	}
	else if (A == B) {
		A = 0;
		B = 0;
		printf(" A = ");
		printf("%d\n", A);
		printf(" B = ");
		printf("%d\n", B);
	}

	printf("\n");
	printf("\n");

	printf(" Номер 2\n "); // Задание 2
	printf("\n");

	int a, b, c;
	printf(" Сумма двух наибольших из чисел\n ");
	printf("Введите значение a: ");
	scanf("%d", &a);
	printf(" Введите значение b: ");
	scanf("%d", &b);
	printf(" Введите значение c: ");
	scanf("%d", &c);
	if (a <= b && a <= c) {
		printf(" Сумма = ");
		printf("%d", b + c);
	}
	else if (b <= a && b <= c) {
		printf(" Сумма = ");
		printf("%d", a + c);
	}
	else if (c <= a && c <= b) {
		printf(" Сумма = ");
		printf("%d", a + b);
	}

	printf("\n");
	printf("\n");

	printf(" Номер 3\n "); // Задание 3
	printf("\n");

	int A1, B1, C1, distance1, distance2;
	printf(" Введите значение A1: ");
	scanf("%d", &A1);
	printf(" Введите значение B1: ");
	scanf("%d", &B1);
	printf(" Введите значение C1: ");
	scanf("%d", &C1);
	distance1 = fabs(A1 - B1);
	distance2 = fabs(A1 - C1);
	if (distance1 < distance2) {
		printf(" Расстояние = ");
		printf("%d\n", distance1);
	}
	else {
		printf(" Расстояние = ");
		printf("%d\n", distance2);
	}

	printf("\n");
	printf("\n");

	printf(" Номер 4\n "); // Задание 4
	printf("\n");

	int x, y;
	printf(" Введите значение x: ");
	scanf("%d", &x);
	printf(" Введите значение y: ");
	scanf("%d", &y);
	if ((x > 0) & (y > 0))
		printf(" Первая\n");
	else if ((x < 0) & (y > 0))
		printf(" Вторая\n");
	else if ((x < 0) & (y < 0))
		printf(" Третья\n");
	else printf(" Четвертая\n");

	printf("\n");
	printf("\n");

	printf(" Номер 5\n "); // Задание 5
	printf("\n");

	int num;
	printf(" Введите целое число: ");
	scanf("%d", &num);
	if (num == 0)
		printf(" Нулевое  ");
	else {
		if (num > 0)
			printf(" Положительное  ");
		else 
			printf(" Отрицательное  ");
		if ((num % 2) == 0)
			printf(" чётное  ");
		else 
			printf(" нечётное  ");
	}
	printf(" число ");

	printf("\n");
	printf("\n");

	printf(" Номер 6\n "); // Задание 6
	printf("\n");

	int num2;
	printf(" Введите целое число, лежащее в диапазоне 1-1999: ");
	scanf("%d", &num2);
	if ((num % 2) == 0)
		printf(" Чётное ");
	else
		printf(" Нечётное ");
	if (num > 99)
		printf(" трёхзначное ");
	else if ((99 >= num) & (num > 9))
		printf(" двузначное ");
	else if (num <= 9)
		printf(" однозначное ");
	printf(" число ");
}
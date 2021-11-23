#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	printf(" Номер 1\n "); // Задание 1
	printf("\n");

	int A, B, truth;
	printf("Справедливы неравенства A > 2 и B <= 3\n");
	printf(" \n ");
	printf("Введите целое значение A: ");
	scanf("%d", &A);
	printf(" Введите целое значение B: ");
	scanf("%d", &B);
	truth = (A > 2) & (B <= 3);
	printf(" Проверка истинности высказывания: ");
	printf("%d\n", truth);

	printf("\n");
	printf("\n");

	printf(" Номер 2\n "); // Задание 2
	printf("\n");

	int A1, B1, C, truth1;
	printf("Справедливо двойное неравенство A < B < C\n");
	printf(" Введите целое значение A: ");
	scanf("%d", &A1);
	printf(" Введите целое значение B: ");
	scanf("%d", &B1);
	printf(" Введите целое значение C: ");
	scanf("%d", &C);
	truth1 = (A1 < B1) & (B1 < C);
	printf(" Проверка истинности высказывания: ");
	printf("%d\n", truth1);

	printf("\n");
	printf("\n");

	printf(" Номер 3\n "); // Задание 3
	printf("\n");

	int number, answer;
	printf("Данное число является четным двузначным\n");
	printf(" Введите целое положительное число: ");
	scanf("%d", &number);
	answer = (number > 9) & (number < 100) & (number % 2==0);
	printf(" Проверка истинности высказывания: ");
	printf("%d\n", answer);

	printf("\n");
	printf("\n");

	printf(" Номер 4\n "); // Задание 4
	printf("\n");

	int number1;
	printf("Цифры данного числа образуют возрастающую или убывающую последовательность\n");
	printf(" Введите трехзначное число: ");
	scanf("%d", &number1);
	if ((number1 < 100) | (number1 > 999))
	{
		printf("Трехзначное число!!!");
	}
	else
	{
		int num1, num2, num3;
		num1 = number1 / 100;
		num2 = number1 % 100;
		num2 = num2 / 10;
		num3 = number1 % 100;
		num3 = num3 % 10;
		if (((num1 < num2) & (num2 < num3)) | ((num1 > num2) & (num2 > num3)))
			printf(" Истина ");

		else
			printf(" Ложь ");
	}

	printf("\n");
	printf("\n");

	printf(" Номер 5\n "); // Задание 5
	printf("\n");

	int number2;
	printf(" Введите четырехзначное число: ");
	scanf("%d", &number2);
	if ((number2 < 1000) | (number2 > 9999))
	{
		printf("Четырехзначное число!!!");
	}
	else
	{
		int num5, num6, num7, num8;
		num5 = number2 / 1000;
		num6 = number2 % 1000;
		num6 = num6 / 100;
		num7 = number2 % 100;
		num7 = num7 / 10;
		num8 = number2 % 10;
		if ((num5 == num8) & (num6 == num8))
			printf(" Истина ");
		else
			printf(" Ложь ");
	}

	printf("\n");
	printf("\n");

	printf(" Номер 6\n "); // Задание 6
	printf("\n");

	int a, b, c, truth2;
	printf("Треугольник со сторонами a, b, c является прямоугольным\n");
	printf(" Введите целое число a: ");
	scanf("%d", &a);
	printf(" Введите целое число b: ");
	scanf("%d", &b);
	printf(" Введите целое число c: ");
	scanf("%d", &c);
	truth2 = (a * a == b * b + c * c) | (b * b == a * a + c * c) | (c * c == a * a + b * b);
	printf(" Проверка истинности высказывания: ");
	printf("%d\n", truth2);

	printf("\n");
	printf("\n");

	printf(" Номер 7\n "); // Задание 7
	printf("\n");

	int a1, b1, c1;
	printf(" Введите целое число a: ");
	scanf("%d", &a1);
	printf(" Введите целое число b: ");
	scanf("%d", &b1);
	printf(" Введите целое число c: ");
	scanf("%d", &c1);
	if ((a1 < (b1 + c1)) & (b1 < (a1 + c1)) & (c1 < (a1 + b1)))
		printf(" Истина ");
	else
		printf(" Ложь ");
}
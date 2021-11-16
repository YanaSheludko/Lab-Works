#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	printf(" Номер 1\n "); // Задание 1
	printf("\n");

	int byte, kilobyte;
	printf(" Введите размер файла в байтах: ");
	scanf("%d", &byte);
	kilobyte = byte / 1024;
	printf(" Количество полных килобайтов = ");
	printf("%d\n", kilobyte);
	
	printf("\n");
	printf("\n");

	printf(" Номер 2\n "); // Задание 2
	printf("\n");

	int A, B, num;
	printf(" Введите положительное значение A, при A > B: ");
	scanf("%d", &A);
	printf(" Введите положительное значение B, при B < A: ");
	scanf("%d", &B);
	num = A / B;
	printf(" Количество отрезков B, размещенных на отрезке A = ");
	printf("%d\n", num);

	printf("\n");
	printf("\n");

	printf(" Номер 3\n "); // Задание 3
	printf("\n");

	int A1, B1, length;
	printf(" Введите положительное значение A1, при A > B: ");
	scanf("%d", &A1);
	printf(" Введите положительное значение B1, при B < A: ");
	scanf("%d", &B1);
	length = A1 % B1;
	printf(" Длина незанятой части отрезка A = ");
	printf("%d\n", length);

	printf("\n");
	printf("\n");

	printf(" Номер 4\n "); // Задание 4
	printf("\n");

	int num2, desyatki, edinizi;
	printf(" Введите двузначное число: ");
	scanf("%d", &num2);
	desyatki = num2 / 10;
	edinizi = num2 % 10;
	num2 = edinizi * 10 + desyatki;
	printf(" Число, полученное при перестановке цифр = ");
	printf("%d", num2);
	
	printf("\n");
	printf("\n");

	printf(" Номер 5\n "); // Задание 5
	printf("\n");

	int num3, sotni, dg;
	printf(" Введите трехзначное число: ");
	scanf("%d", &num3);
	sotni = num3 / 100;
	dg = num3 % 100;
	num3 = dg * 10 + sotni;
	printf(" Полученное число = ");
	printf("%d", num3);

	printf("\n");
	printf("\n");
}
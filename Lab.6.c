#include <stdio.h>
#include <math.h>

int main()
{
	// Задание 1

	int A = 2; 
	int B = 3; 
	int tmp;
	tmp = A; A = B; B = tmp;
	printf("A=");
	printf("%d ", A);
	printf("B=");
	printf("%d", B);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	// Задание 2

	int A1 = 2, t1;
	int B1 = 3, t2;
	int C1 = 4, t3;
	t1 = A1; t2 = B1; t3 = C1;
	A1 = t2; B1 = t3; C1 = t1;
	printf("A1=");
	printf("%d ", A1);
	printf("B1=");
	printf("%d ", B1);
	printf("C1=");
	printf("%d", C1);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	// Задание 3

	int A2 = 4;
	int B2 = 3;
	int C2 = 2;
	int tmp1;
	tmp1 = A2; A2 = C2; C2 = B2; B2 = tmp1;
	printf("A2=");
	printf("%d ", A2);
	printf("C2=");
	printf("%d ", C2);
	printf("B2=");
	printf("%d", B2);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	// Задание 4

	double x = 2;
	double y;
	y = (3 * pow(x, 6)) - (6 * pow(x, 2)) - 7;
	printf("y=");
	printf("%.1f", y);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	// Задание 5

	double x1 = 5;
	double y1;
	y1 = (4 * pow(x1 - 3, 6)) - (7 * pow(x1 - 3, 3)) + 2;
	printf("y1=");
	printf("%.1f", y1);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	// Задание 6

	int A3, t;
	printf("enter A1\n");
	scanf("%d", &A3);
	t = A3 * A3; // Квадрат числа A3
	t = t * t; // Четвертая степень числа A3
	t = t * t; // Восьмая степень числа A3
	printf("A3^8=");
	printf("%d", t);

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	// Задание 7

	int A4, j, k;
	printf("enter A4\n");
	scanf("%d", &A4);
	j = A4 * A4; // Квадрат числа A4
	k = j * A4; // Третья степень числа A4
	j = j * k; // Пятая степень числа A4
	k = j;
	j = k * k; // Десятая степень числа A4
	j = j * k; 
	printf("A4^15=");
	printf("%d", j);
}
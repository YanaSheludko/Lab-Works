#include <stdio.h>
#include <math.h>

int main()
{
	printf(" Number 1\n "); //Задание 1
	printf("\n");

	float a, angle;
	printf("enter a\n");
	printf(" a = ");
	scanf("%f", &a);
	angle = (a * 3.14) / 180;
	printf(" angle = ");
	printf("%f\n", angle);

	printf("\n");
	printf("\n");

	printf(" Number 2\n "); //Задание 2
	printf("\n");

	float a2, angle2;
	printf("enter a2\n");
	printf(" a = ");
	scanf("%f", &a2);
	angle2 = (180 * a2) / 3.14;
	printf(" angle = ");
	printf("%f\n", angle2);

	printf("\n");
	printf("\n");

	printf(" Number 3\n "); //Задание 3
	printf("\n");

	float X, A, Y, price, price2;
	printf("enter X\n");
	printf(" X = ");
	scanf("%f", &X);
	printf("enter A\n");
	printf(" A = ");
	scanf("%f", &A);
	printf("enter Y\n");
	printf(" Y = ");
	scanf("%f", &Y);
	price = A / X;
	price2 = Y * price;
	printf("answers:\n");
	printf(" price = ");
	printf("%f\n", price);
	printf(" price = ");
	printf("%f\n", price2);

	printf("\n");
	printf("\n");

	printf(" Number 4\n "); //Задание 4
	printf("\n");

	float V1, V2, S, T, distance;
	printf("enter V1\n");
	printf(" V = ");
	scanf("%f", &V1);
	printf("enter V2\n");
	printf(" V = ");
	scanf("%f", &V2);
	printf("enter S\n");
	printf(" S = ");
	scanf("%f", &S);
	printf("enter T\n");
	printf(" T = ");
	scanf("%f", &T);
	distance = S + V1 * T + V2 * T;
	printf(" distance = ");
	printf("%f\n", distance);

	printf("\n");
	printf("\n");

	printf(" Number 5\n "); //Задание 5
	printf("\n");

	float A1, B, answer;
	printf("enter A1\n");
	printf(" A = ");
	scanf("%f", &A1);
	printf("enter B\n");
	printf(" B = ");
	scanf("%f", &B);
	answer = (-B) / A;
	printf(" answer = ");
	printf("%f\n", answer);

	printf("\n");
	printf("\n");

	printf(" Number 6\n "); //Задание 6
	printf("\n");

	float A2, B1, C1, A3, B2, C2, D, x, y;
	printf("enter A2\n");
	printf(" A = ");
	scanf("%f", &A2);
	printf("enter B1\n");
	printf(" B = ");
	scanf("%f", &B1);
	printf("enter C1\n");
	printf(" C = ");
	scanf("%f", &C1);
	printf("enter A3\n");
	printf(" A = ");
	scanf("%f", &A3);
	printf("enter B2\n");
	printf(" B = ");
	scanf("%f", &B2);
	printf("enter C2\n");
	printf(" C = ");
	scanf("%f", &C2);
	D = (A2 * B2) - (A3 * B1);
	x = ((C1 * B2) - (C2 * B1)) / D;
	y = ((A2 * C2) - (A3 * C1)) / D;
	printf("answers:\n");
	printf(" x = ");
	printf("%.1f\n", x);
	printf(" y = ");
	printf("%.1f\n", y);

}
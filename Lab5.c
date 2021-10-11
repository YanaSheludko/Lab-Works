#include <stdio.h>
#include <math.h>

int main()

{

	// Задание 1

	int x1, y1, x2, y2;
	double distance;
	printf("enter x1\n");
	scanf("%d", &x1);
	printf("enter y1\n");
	scanf("%d", &y1);
	printf("enter x2\n");
	scanf("%d", &x2);
	printf("enter y2\n");
	scanf("%d", &y2);
	distance = (sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));
	printf("num ");
	printf("%f\n", distance);

	// Задание 2

	int a, a1, b, b1, c, c1;
	double AC, BC;
	printf("enter a, a1\n");
	scanf("%d. %d", &a, &a1);
	printf("enter b, b1\n");
	scanf("%d. %d", &b, &b1);
	printf("enter c, c1\n");
	scanf("%d. %d", &c, &c1);
	AC = sqrt(((a - c) * (a - c) + ((a1 - c1) * (a1 - c1))));
	BC = sqrt(((b - c) * (b - c) + ((b1 - c1) * (b1 - c1))));
	printf("num ");
	printf("%f\n", AC + BC);

	// Задание 3

	int a3, b3, c3, A2C2, B2C2, multi;
	printf("enter a3\n");
	scanf("%d", &a3);
	printf("enter b3\n");
	scanf("%d", &b3);
	printf("enter c3\n");
	scanf("%d", &c3);
	A2C2 = abs(c3 - a3);
	B2C2 = abs(b3 - c3);
	multi = (A2C2 * B2C2);
	printf("num ");
	printf("%d\n", multi);

	// Задание 4

	int x3, y3, x4, y4, a2, b2, P, S;
	printf("enter x3, x4\n");
	scanf("%d. %d", &x3, &x4);
	printf("enter y3, y4\n");
	scanf("%d. %d", &y3, &y4);
	a2 = (x4 - x3);
	b2 = (y4 - y3);
	P = 2 * (a2 + b2);
	printf("num ");
	printf("%d\n", P);
	S = a2 * b2;
	printf("num ");
	printf("%d\n", S);

	// Задание 5
	
	float A1B1, B1C1, A1C1, S1, x5, x6, y5, y6, z5, z6, P1;
	printf("enter x5, x6\n");
	scanf("%f. %f", &x5, &x6);
	printf("enter y5, y6\n");
	scanf("%f. %f", &y5, &y6);
	printf("enter z5, z6\n");
	scanf("%f. %f", &z5, &z6);
	A1B1 = (sqrt(((x6 - x5) * (x6 - x5)) + ((y6 - y5) * (y6 - y5))));
	B1C1 = (sqrt(((y6 - y5) * (y6 - y5)) + ((z6 - z5) * (z6 - z5))));
	A1C1 = (sqrt(((x6 - x5) * (x6 - x5)) + ((z6 - z5) * (z6 - z5))));
	P1 = A1B1 + B1C1 + A1C1;
	printf("num ");
	printf("%f\n", P1);
	S1 = (sqrt(P * (P - A1C1) * (P - B1C1) * (P - A1C1)));
	printf("num ");
	printf("%f\n", S1);


}
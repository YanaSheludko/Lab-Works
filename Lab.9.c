#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	printf(" Номер 1\n "); // Задание 1
	printf("\n");

	int N, sec;
	printf(" Введите целое число секунд: ");
	scanf("%d", &N);
	sec = N / 60;
	printf(" количество секунд, прошедших с начала последней минуты = ");
	printf("%d\n", sec);

	printf("\n");
	printf("\n");

	printf(" Номер 2\n "); // Задание 2
	printf("\n");

	int K, number;
	printf(" Введите число дня года, лежащий в диапазоне 1–365: ");
	scanf("%d", &K);
	number = K % 7;
	printf(" Номер дня недели для K-го дня года = ");
	printf("%d\n", number);

	printf("\n");
	printf("\n");

	printf(" Номер 3\n "); // Задание 3
	printf("\n");

	int K1, N1, number2;
	printf(" Введите число дня года, лежащее в диапазоне 1–365: ");
	scanf("%d", &K1);
	printf(" Введите номер дня недели, лежащее в диапазоне 1-7: ");
	scanf("%d", &N1);
	number2 = ((K + N - 2) % 7) + 1;
	printf(" Номер дня недели для K-го дня года = ");
	printf("%d\n", number2);

	printf("\n");
	printf("\n");

	printf(" Номер 4\n "); // Задание 4
	printf("\n");

	int A, B, C, S, answer;
	printf(" Введите положительное значение A: ");
	scanf("%d", &A);
	printf(" Введите положительное значение B: ");
	scanf("%d", &B);
	printf(" Введите положительное значение C: ");
	scanf("%d", &C);
	answer = (A / C) * (B / C);
	printf(" Количество квадратов, размещенных на прямоугольнике = ");
	printf("%d\n", answer);
	S = A * B - C * C * answer;
	printf(" площадь незанятой части прямоугольника = ");
	printf("%d\n", S);

	printf("\n");
	printf("\n");

	printf(" Номер 5\n "); // Задание 5
	printf("\n");

	int year, century;
	printf(" Введите номер года: ");
	scanf("%d", &year);
	century = ((year - 1) / 100 + 1);
	printf(" Номер столетия = ");
	printf("%d\n", century);
}
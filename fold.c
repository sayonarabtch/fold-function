#include <stdio.h>

int f(int *cell_1, char K, int M);
int fold(int mass, int M, char S);

void main(void)
{
	int massive[] = { 1, 2, 3, 4, 5, 10, 10 };
	int M = sizeof(massive) / sizeof(float);
	char S = '+';  //Plus or multiply

	printf("%i\n", fold(massive, M, S));
	system("pause");
}

int fold(int mass, int M, char S)
{
	return f(mass, S, mass + M * sizeof(mass));
}

int f(int *cell, char K, int M)
{
	if (K == '+')
	{
		if (cell != M) return *cell + f((cell + 1), '+', M);
		else return 0;
	}

	if (K == '*')
	{
		if (cell != M) return *cell * f((cell + 1), '*', M);
		else return 1;
	}
}
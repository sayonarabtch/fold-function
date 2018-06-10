#include <stdio.h>

int f(int *cell_1, int *cell_2, char K);

int fold(int mass, int M, char K);

int main(void)
{
	int massive[] = { 1, 2, 3, 4, 5 };
	int N = sizeof(massive) / sizeof(int);

	printf("%i\n", fold(massive, N, '*'));   //ббнярх фекюелне деиярбхе 
	system("pause");
}

int fold( int* mass, int M, char K)
{	
	int x;
	if (K == '+') x = 0;
	if (K == '-') x = *mass;
	if (K == '*') x = 1;

	for (int i = 0; i < M; i++)
	{
		x = f(&x, (mass + i), '*');     //ббнярх рн фе фекюелне деиярбхе
	}
	
	return x;
}

int f(int *cell_1, int *cell_2, char K)
{
	if (K == '+') return *cell_1 + *cell_2;
	if (K == '-') return (*cell_1) - *cell_2;
	if (K == '*') return (*cell_1) * (*cell_2);	
}
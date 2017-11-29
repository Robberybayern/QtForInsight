#include <stdio.h>
#include <time.h>
#include <math.h> /*powº¯Êý*/
clock_t start, stop;

double duration1, duration2;
void PrintN1(int N);
void PrintN2(int N);

int main()
{
	start = clock();

	int N;
	scanf_s("%d", &N);

	PrintN1(N);


	stop = clock();
	duration1 = ((double)(stop - start)) / CLK_TCK;

	start = clock();

	int N;
	scanf_s("%d", &N);

	PrintN2(N);


	stop = clock();
	duration2 = ((double)(stop - start)) / CLK_TCK;

	printf("%d\n", duration2);

	return 0;
}

void PrintN1(int N)/*µÝ¹é*/
{
	if (N) {
		PrintN1(N - 1);
		printf("%d\n", N);
	}
	return;
}

void PrintN2(int N)/*Ñ­»·*/
{
	int i;
	for (i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
	return;
}	
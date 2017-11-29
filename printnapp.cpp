# include <stdio.h>


void PrintN(int N);

void main()
{
	int N;
	scanf_s("%d", &N);

	PrintN(N);

	return;
}

//void PrintN(int N)/*Ñ­»·*/
//{
//	int i;
//	for (i = 1; i <= N; i++) {
//		printf("%d\n", i);
//	}
//	return;
//}	


void PrintN(int N)/*µÝ¹é*/
{
	if(N) {
		PrintN(N - 1);
		printf("%d\n", N);
	}
	return;
}

	
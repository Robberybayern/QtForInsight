# include <stdio.h>


void PrintN(int N);

void main()
{
	int N;
	scanf_s("%d", &N);

	PrintN(N);

	return;
}

//void PrintN(int N)/*ѭ��*/
//{
//	int i;
//	for (i = 1; i <= N; i++) {
//		printf("%d\n", i);
//	}
//	return;
//}	


void PrintN(int N)/*�ݹ�*/
{
	if(N) {
		PrintN(N - 1);
		printf("%d\n", N);
	}
	return;
}

	
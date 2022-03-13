// 嵌套循环打印字母
#include<stdio.h>
int main(void)
{
	int rows, step, sign, spa;
	char ch;

	printf("请输入需要打印的行数（5行以上效果更佳）: ");
	scanf("%d", &rows);

	// 从A到Z
	for (step = 0; step <= rows; step++)
	{
		for (ch = 'A'; ch < ('A' + step); ch++)
			printf("%c", ch);
		printf("\n");
	}

	printf("\n");

	for (step = rows; step >= 0; step--)
	{
		for (ch = 'A'; ch < ('A' + step); ch++)
			printf("%c", ch);
		printf("\n");
	}

	printf("\n");

	// 从Z到A
	for (step = 0; step <= rows; step++)
	{
		for (ch = 'Z'; ch > ('Z' - step); ch--)
			printf("%c", ch);
		printf("\n");
	}

	printf("\n");

	for (step = rows; step >= 0; step--)
	{
		for (ch = 'Z'; ch > ('Z' - step); ch--)
			printf("%c", ch);
		printf("\n");
	}

	printf("\n");

	// 打印'*'符号
	for (step = 0; step <= rows; step++)
	{
		for (sign = 0; sign < step; sign++)
			printf("*");
		printf("\n");
	}

	printf("\n");

	for (step = rows; step > 0; step--)
	{
		for (sign = step; sign >= 1; sign--)
			printf("*");
		printf("\n");
	}

	// 打印金字塔
	int a, b, c, d, j, k;

	ch = 'A';
	for (a = 1; a <= rows; a++)
	{
		for (b = 1; b <= rows - a; b++)
			printf(" ");

		for (c = 1, j = 0; c <= a; c++, j++)
			printf("%c", ch + j);

		for (d = a - 2, k = a - 2; d >= 0; d--, k--)
			printf("%c", ch + k);
		printf("\n");
	}

	printf("\n");

	ch = 'Z';
	for (a = 1; a <= rows; a++)
	{
		for (b = 1; b <= rows - a; b++)
			printf(" ");

		for (c = 1, j = 0; c <= a; c++, j++)
			printf("%c", ch - j);

		for (d = a - 2, k = a - 2; d >= 0; d--, k--)
			printf("%c", ch - k);

		printf("\n");
	}
	return 0;
}
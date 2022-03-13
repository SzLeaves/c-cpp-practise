//rand()函数的使用--10以内的乘法练习出题程序
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void cal_rand(int *, int *);

int main(void) {
	int a, b, res;
	int r = 0, w = 0;
	srand((unsigned)time(NULL));
	cal_rand(&a, &b);

	while (1 == scanf("%d", &res)) {
		if (res == (a * b)) {
			printf("--Right!");
			r++;
		}
		
		else {
			printf("--Wrong!");
			w++;
		}

		printf("\n\n");
		cal_rand(&a, &b);
	}
	printf("程序结束, 答对%d题，答错%d题", r, w);
	
	return 0;
}

void cal_rand(int *a, int *b) {
	*a = rand() % 10;
	*b = rand() % 10;
	printf("（输入q退出程序）%d * %d = ", *a, *b);
}
